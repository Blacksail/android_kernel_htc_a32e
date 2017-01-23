

#include <linux/of_gpio.h>
#include <linux/platform_device.h>
#include <linux/gpio.h>
#include <linux/i2c.h>
#include <linux/types.h>
#include "pn544_htc.h"
#include <linux/regulator/consumer.h>
#if NFC_READ_RFSKUID
#include <linux/htc_flags.h>
#define HAS_NFC_CHIP 0x7000000
#endif 


#define D(x...)	\
	if (is_debug) \
		printk(KERN_DEBUG "[NFC] " x)
#define I(x...) printk(KERN_INFO "[NFC] " x)
#define E(x...) printk(KERN_ERR "[NFC] [Err] " x)

static	struct regulator *pm8909_l15;
int pn544_htc_check_rfskuid(int in_is_alive){

#if NFC_READ_RFSKUID
	int nfc_rfbandid_size = 0;
	int i;
	unsigned int *nfc_rfbandid_info;
	struct device_node *nfc_rfbandid;
	nfc_rfbandid = of_find_node_by_path("/chosen/mfg");
	if (nfc_rfbandid){
		nfc_rfbandid_info = (unsigned int *) of_get_property(nfc_rfbandid,"skuid.rf_id",&nfc_rfbandid_size);
		if (!nfc_rfbandid_info){
			E("%s:Get null pointer of rfbandid\n",__func__);
			return 1;
		}
	}else {
		E("%s:Get skuid.rf_id fail keep NFC by default\n",__func__);
		return 1;
	}
	if(nfc_rfbandid_size != 32) {  
		E("%s:Get skuid.rf_id size error keep NFC by default\n",__func__);
		return 1;
	}

	for ( i = 0; i < 8; i++) {
		if (nfc_rfbandid_info[i] == HAS_NFC_CHIP) {
			I("%s: Check skuid.rf_id done device has NFC chip\n",__func__);
			return 1;
		}
	}
	I("%s: Check skuid.rf_id done remove NFC\n",__func__);
	return 0;
#else 
	return in_is_alive;
#endif 
}


int pn544_htc_get_bootmode(void) {
	char sbootmode[30] = "default";
#if NFC_GET_BOOTMODE
        strlcpy(sbootmode,htc_get_bootmode(),sizeof(sbootmode));
#endif  
	if (strcmp(sbootmode, "offmode_charging") == 0) {
		I("%s: Check bootmode done NFC_BOOT_MODE_OFF_MODE_CHARGING\n",__func__);
		return NFC_BOOT_MODE_OFF_MODE_CHARGING;
	} else if (strcmp(sbootmode, "ftm") == 0) {
		I("%s: Check bootmode done NFC_BOOT_MODE_FTM\n",__func__);
		return NFC_BOOT_MODE_FTM;
	} else if (strcmp(sbootmode, "download") == 0) {
		I("%s: Check bootmode done NFC_BOOT_MODE_DOWNLOAD\n",__func__);
		return NFC_BOOT_MODE_DOWNLOAD;
	} else {
		I("%s: Check bootmode done NFC_BOOT_MODE_NORMAL mode = %s\n",__func__,sbootmode);
		return NFC_BOOT_MODE_NORMAL;
	}
}

int pn544_htc_pvdd_on (struct i2c_client *client) {
        int ret;
        pm8909_l15 = regulator_get(&client->dev, "pm8909_l15");
        I("%s : pm8909_l15 workaround regulator_get\n", __func__);
        if (pm8909_l15< 0) {
                E("%s : pm8909_l15 workaround regulator_get fail\n", __func__);
                return  0;
        }
        ret = regulator_set_voltage(pm8909_l15, 1800000, 1800000);
        I("%s : pm8909_l15 workaround regulator_set_voltage\n", __func__);
        if (ret < 0) {
                E("%s : pm8909_l15 workaround regulator_set_voltage fail\n", __func__);
                return 0;
        }
        ret = regulator_enable(pm8909_l15);
        I("%s : pm8909_l15 workaround regulator_enable\n", __func__);
        if (ret < 0) {
                E("%s : pm8909_l15 workaround regulator_enable fail\n", __func__);
                return 0;
        }
	return 1;

}

void pn544_off_mode_charging (struct i2c_client *client) {
        int ret;
        pm8909_l15 = regulator_get(&client->dev, "pm8909_l15");
        I("%s : pm8909_l15 workaround regulator_get\n", __func__);
        if (pm8909_l15< 0) {
                E("%s : pm8909_l15 workaround regulator_get fail\n", __func__);
        }
        ret = regulator_disable(pm8909_l15);
        I("%s : pm8909_l15 workaround regulator_disable\n", __func__);
        if (ret < 0) {
                E("%s : pm8909_l15 workaround regulator_disable fail\n", __func__);
        }
}

