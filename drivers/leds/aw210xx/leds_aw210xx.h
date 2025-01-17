#ifndef __LEDS_AW210XX_H__
#define __LEDS_AW210XX_H__
#include "aw_lamp_interface.h"
#include "leds_aw210xx_reg.h"
#define AW210XX_I2C_NAME "aw210xx_led"


#define LEDMODE_MAX_NUM						(11)
#define LED_MAX_NUM							(8)
#define AW_DEBUG 							(1)

#if AW_DEBUG
#define AW_LOG(fmt, args...)	pr_info("[%s] %s %d: " fmt, AW210XX_I2C_NAME, \
		__func__, __LINE__, ##args)
#else
#define AW_LOG(fmt, args...)
#endif
#define AW_ERR(fmt, args...)	pr_err("[%s] %s %d: " fmt, AW210XX_I2C_NAME, \
		__func__, __LINE__, ##args)
		
#define	AWLOGD(format, arg...)	printf(format, ##arg)


/*****************************************************
* register about led mode
*****************************************************/
#define AW210XX_REG_GCR						(0x20)
#define AW210XX_REG_BR00L					(0x21)
#define AW210XX_REG_BR00H					(0x22)
#define AW210XX_REG_BR01L					(0x23)
#define AW210XX_REG_BR01H					(0x24)
#define AW210XX_REG_BR02L					(0x25)
#define AW210XX_REG_BR02H					(0x26)
#define AW210XX_REG_BR03L					(0x27)
#define AW210XX_REG_BR03H					(0x28)
#define AW210XX_REG_BR04L					(0x29)
#define AW210XX_REG_BR04H					(0x2A)
#define AW210XX_REG_BR05L					(0x2B)
#define AW210XX_REG_BR05H					(0x2C)
#define AW210XX_REG_BR06L					(0x2D)
#define AW210XX_REG_BR06H					(0x2E)
#define AW210XX_REG_BR07L					(0x2F)
#define AW210XX_REG_BR07H					(0x30)
#define AW210XX_REG_BR08L					(0x31)
#define AW210XX_REG_BR08H					(0x32)
#define AW210XX_REG_BR09L					(0x33)
#define AW210XX_REG_BR09H					(0x34)
#define AW210XX_REG_BR10L					(0x35)
#define AW210XX_REG_BR10H					(0x36)
#define AW210XX_REG_BR11L					(0x37)
#define AW210XX_REG_BR11H					(0x38)
#define AW210XX_REG_BR12L					(0x39)
#define AW210XX_REG_BR12H					(0x3A)
#define AW210XX_REG_BR13L					(0x3B)
#define AW210XX_REG_BR13H					(0x3C)
#define AW210XX_REG_BR14L					(0x3D)
#define AW210XX_REG_BR14H					(0x3E)
#define AW210XX_REG_BR15L					(0x3F)
#define AW210XX_REG_BR15H					(0x40)
#define AW210XX_REG_BR16L					(0x41)
#define AW210XX_REG_BR16H					(0x42)
#define AW210XX_REG_BR17L					(0x43)
#define AW210XX_REG_BR17H					(0x44)
#define AW210XX_REG_UPDATE					(0x45)
#define AW210XX_REG_SL00					(0x46)
#define AW210XX_REG_SL01					(0x47)
#define AW210XX_REG_SL02					(0x48)
#define AW210XX_REG_SL03					(0x49)
#define AW210XX_REG_SL04					(0x4A)
#define AW210XX_REG_SL05					(0x4B)
#define AW210XX_REG_SL06					(0x4C)
#define AW210XX_REG_SL07					(0x4D)
#define AW210XX_REG_SL08					(0x4E)
#define AW210XX_REG_SL09					(0x4F)
#define AW210XX_REG_SL10					(0x50)
#define AW210XX_REG_SL11					(0x51)
#define AW210XX_REG_SL12					(0x52)
#define AW210XX_REG_SL13					(0x53)
#define AW210XX_REG_SL14					(0x54)
#define AW210XX_REG_SL15					(0x55)
#define AW210XX_REG_SL16					(0x56)
#define AW210XX_REG_SL17					(0x57)
#define AW210XX_REG_GCCR					(0x58)
#define AW210XX_REG_PHCR					(0x59)
#define AW210XX_REG_OSDCR					(0x5A)
#define AW210XX_REG_OSST0					(0x5B)
#define AW210XX_REG_OSST1					(0x5C)
#define AW210XX_REG_OSST2					(0x5D)
#define AW210XX_REG_OTCR					(0x5E)
#define AW210XX_REG_SSCR					(0x5F)
#define AW210XX_REG_UVCR					(0x60)
#define AW210XX_REG_GCR2					(0x61)
#define AW210XX_REG_GCR3					(0x62)
#define AW210XX_REG_RESET					(0x70)
#define AW210XX_REG_ABMCFG					(0x80)
#define AW210XX_REG_ABMGO					(0x81)
#define AW210XX_REG_ABMT0					(0x82)
#define AW210XX_REG_ABMT1					(0x83)
#define AW210XX_REG_ABMT2					(0x84)
#define AW210XX_REG_ABMT3					(0x85)
#define AW210XX_REG_GBRH					(0x86)
#define AW210XX_REG_GBRL					(0x87)
#define AW210XX_REG_GSLR					(0x88)
#define AW210XX_REG_GSLG					(0x89)
#define AW210XX_REG_GSLB					(0x8A)
#define AW210XX_REG_GCFG					(0x8B)

/*****************************************************
 * define register Detail
*****************************************************/
#define AW210XX_BIT_APSE_MASK				(~(1 << 7))
#define AW210XX_BIT_APSE_ENABLE				(1 << 7)
#define AW210XX_BIT_APSE_DISENA				(0 << 7)
#define AW210XX_BIT_CHIPEN_MASK				(~(1 << 0))
#define AW210XX_BIT_CHIPEN_ENABLE			(1 << 0)
#define AW210XX_BIT_CHIPEN_DISENA			(0 << 0)
#define AW210XX_BIT_UVPD_MASK				(~(1 << 1))
#define AW210XX_BIT_UVPD_ENABLE				(0 << 1)
#define AW210XX_BIT_UVPD_DISENA				(1 << 1)
#define AW210XX_BIT_UVDIS_MASK				(~(1 << 0))
#define AW210XX_BIT_UVDIS_ENABLE			(0 << 0)
#define AW210XX_BIT_UVDIS_DISENA			(1 << 0)
#define AW210XX_BIT_ABME_MASK				(~(1 << 0))
#define AW210XX_BIT_ABME_ENABLE				(1 << 0)
#define AW210XX_BIT_ABME_DISENA				(0 << 0)
#define AW210XX_BIT_GSLDIS_MASK				(~(1 << 6))
#define AW210XX_BIT_GSLDIS_ENABLE			(0 << 6)
#define AW210XX_BIT_GSLDIS_DISENA			(1 << 6)
#define AW210XX_BIT_RGBMD_MASK				(~(1 << 0))
#define AW210XX_BIT_RGBMD_ENABLE			(1 << 0)
#define AW210XX_BIT_RGBMD_DISENA			(0 << 0)
#define AW210XX_BIT_SBMD_MASK				(~(1 << 1))
#define AW210XX_BIT_SBMD_ENABLE				(1 << 1)
#define AW210XX_BIT_SBMD_DISENA				(0 << 1)
#define AW210XX_BIT_CLKFRQ_MASK				(~(7 << 4))
#define AW210XX_BIT_CLKFRQ_16MHz			(0 << 4)
#define AW210XX_BIT_CLKFRQ_8MHz				(1 << 4)
#define AW210XX_BIT_CLKFRQ_1MHz				(2 << 4)
#define AW210XX_BIT_CLKFRQ_512kHz			(3 << 4)
#define AW210XX_BIT_CLKFRQ_256kHz			(4 << 4)
#define AW210XX_BIT_CLKFRQ_125kHz			(5 << 4)
#define AW210XX_BIT_CLKFRQ_62_5kHz			(6 << 4)
#define AW210XX_BIT_CLKFRQ_31_25kHz			(7 << 4)

#define AW210XX_BIT_PWMRES_MASK				(~(3 << 1))
#define AW210XX_BIT_PWMRES_8BIT				(0 << 1)
#define AW210XX_BIT_PWMRES_9BIT				(1 << 1)
#define AW210XX_BIT_PWMRES_12BIT			(2 << 1)
#define AW210XX_BIT_PWMRES_9_AND_3_BIT		(3 << 1)

#define AW210XX_DCPWM_SET					(7 << 5)
#define AW210XX_DCPWM_CLEAN					(0x00)
#define AW210XX_DCPWM_SET_MASK				~(7 << 5)
#define AW210XX_OPEN_THRESHOLD_SET			(1 << 3)
#define AW210XX_OPEN_THRESHOLD_SET_MASK		~(1 << 3)
#define AW210XX_SHORT_THRESHOLD_SET			(1 << 2)
#define AW210XX_SHORT_THRESHOLD_SET_MASK	~(1 << 2)

/*****************************************************
 * define register data
*****************************************************/
#define AW210XX_RESET_CHIP					(0x00)
#define AW210XX_UPDATE_BR_SL				(0x00)
#define AW21018_GROUP_ENABLE				(0x3F)
#define AW21018_GROUP_DISABLE				(0x40)
#define AW21012_GROUP_ENABLE				(0x3C)
#define AW21012_GROUP_DISABLE				(0x40)
#define AW21009_GROUP_ENABLE				(0x38)
#define AW21009_GROUP_DISABLE				(0x40)
#define AW210XX_GLOBAL_DEFAULT_SET			(0x66)
#define AW210XX_GBRH_DEFAULT_SET			(0x60)
#define AW210XX_GBRL_DEFAULT_SET			(0x00)
#define AW210XX_ABMT0_SET					(0x99)
#define AW210XX_ABMT1_SET					(0x99)
#define AW210XX_ABMT2_SET					(0x00)
#define AW210XX_ABMT3_SET					(0x00)
#define AW210XX_ABMCFG_SET					(0x03)
#define AW210XX_ABMGO_SET					(0x01)

/*****************************************************
* define chipid info
*****************************************************/
#define AW95016_CHIPID						(0x00)
#define AW95016A_CHIPID						(0x80)
#define AW21018_CHIPID						(0x02)
#define AW21012_CHIPID						(0x22)
#define AW21009_CHIPID						(0x12)
#define AW21018_LED_NUM						(0x11)
#define AW21012_LED_NUM						(0x0b)
#define AW21009_LED_NUM						(0x08)
#define AW210XX_OPEN_DETECT_EN				(0x03)
#define AW210XX_SHORT_DETECT_EN				(0x02)
#define AW210XX_OPEN_SHORT_DIS				(0x00)

/*****************************************************
* define return value
*****************************************************/
#define AW210XX_RETURN_OK					(0)
#define AW210XX_CHIPID_FAILD				(1)
#define AW210XX_DATA_ERROR					(2)
#define AW210XX_INPUT_ERROR					(3)
#define AW210XX_NO_DECTECT					(4)
#define AW210XX_NO_GPIO_INFO				(5)
#define AW210XX_NO_ACCESS					(6)
#define AW210XX_WRITE_FAIL					(7)
#define AW210XX_EFFECT_MODE_UNSUPPORT		(8)
#define AW210XX_CLK_MODE_UNSUPPORT			(9)
#define AW210XX_MALLOC_FAILEDT				(10)
#define AW210XX_OPEN_DETECT					(1)
#define AW210XX_SHORT_DETECT				(0)

/***********************************************
 * define register Detail
 ***********************************************/
#define REG_NONE_ACCESS						(0)
#define REG_RD_ACCESS						(1<<0)
#define REG_WR_ACCESS						(1<<1)
#define AW210XX_REG_MAX						(0x8C)

static uint8_t aw210xx_reg_access[AW210XX_REG_MAX] = {
	[AW210XX_REG_GCR] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW210XX_REG_BR00L] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW210XX_REG_BR00H] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW210XX_REG_BR01L] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW210XX_REG_BR01H] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW210XX_REG_BR02L] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW210XX_REG_BR02H] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW210XX_REG_BR03L] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW210XX_REG_BR03H] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW210XX_REG_BR04L] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW210XX_REG_BR04H] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW210XX_REG_BR05L] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW210XX_REG_BR05H] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW210XX_REG_BR06L] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW210XX_REG_BR06H] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW210XX_REG_BR07L] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW210XX_REG_BR07H] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW210XX_REG_BR08L] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW210XX_REG_BR08H] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW210XX_REG_BR09L] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW210XX_REG_BR09H] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW210XX_REG_BR10L] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW210XX_REG_BR10H] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW210XX_REG_BR11L] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW210XX_REG_BR11H] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW210XX_REG_BR12L] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW210XX_REG_BR12H] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW210XX_REG_BR13L] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW210XX_REG_BR13H] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW210XX_REG_BR14L] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW210XX_REG_BR14H] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW210XX_REG_BR15L] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW210XX_REG_BR15H] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW210XX_REG_BR16L] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW210XX_REG_BR16H] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW210XX_REG_BR17L] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW210XX_REG_BR17H] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW210XX_REG_UPDATE] = REG_WR_ACCESS,
	[AW210XX_REG_SL00] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW210XX_REG_SL01] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW210XX_REG_SL02] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW210XX_REG_SL03] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW210XX_REG_SL04] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW210XX_REG_SL05] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW210XX_REG_SL06] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW210XX_REG_SL07] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW210XX_REG_SL08] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW210XX_REG_SL09] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW210XX_REG_SL10] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW210XX_REG_SL11] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW210XX_REG_SL12] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW210XX_REG_SL13] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW210XX_REG_SL14] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW210XX_REG_SL15] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW210XX_REG_SL16] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW210XX_REG_SL17] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW210XX_REG_GCCR] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW210XX_REG_PHCR] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW210XX_REG_OSDCR] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW210XX_REG_OSST0] = REG_RD_ACCESS,
	[AW210XX_REG_OSST1] = REG_RD_ACCESS,
	[AW210XX_REG_OSST2] = REG_RD_ACCESS,
	[AW210XX_REG_OTCR] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW210XX_REG_SSCR] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW210XX_REG_UVCR] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW210XX_REG_GCR2] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW210XX_REG_GCR3] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW210XX_REG_RESET] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW210XX_REG_ABMCFG] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW210XX_REG_ABMGO] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW210XX_REG_ABMT0] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW210XX_REG_ABMT1] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW210XX_REG_ABMT2] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW210XX_REG_ABMT3] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW210XX_REG_GBRH] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW210XX_REG_GBRL] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW210XX_REG_GSLR] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW210XX_REG_GSLG] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW210XX_REG_GSLB] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW210XX_REG_GCFG] = REG_RD_ACCESS | REG_WR_ACCESS,
};

typedef enum {
	CLK_FRQ_16M = 1,
	CLK_FRQ_8M,
	CLK_FRQ_1M,
	CLK_FRQ_512k,
	CLK_FRQ_256k,
	CLK_FRQ_125K,
	CLK_FRQ_62_5K,
	CLK_FRQ_31_25K,
} clk_pwm_t;

typedef enum {
	BR_RESOLUTION_8BIT = 1,
	BR_RESOLUTION_9BIT,
	BR_RESOLUTION_12BIT,
	BR_RESOLUTION_9_AND_3_BIT,
} br_pwm_t;

typedef struct aw210xx_cfg {
	AW_MULTI_BREATH_DATA_STRUCT *p;
	unsigned int count;
} AW210XX_CFG;

enum AW2023_LED_MODE{
	AW210XX_LED_NONE = 0,
	AW210XX_LED_CCMODE,
	AW210XX_LED_POWERON_MODE,
	AW210XX_LED_NEW_ALWAYSON, /* used for preview_color */
	AW210XX_LED_INCALL_MODE,
	AW210XX_LED_MUSICMODE,
	AW210XX_LED_GAMEMODE,
	AW210XX_LED_NOTIFY_MODE,
	AW210XX_LED_CHARGE_MODE,
	AW210XX_LED_BLINKMODE,
	AW210XX_LED_BREATHMODE,
	AW210XX_LED_INDIVIDUAL_CTL_BREATH,
	AW210XX_LED_MAXMODE,
};

enum AW210XX_LED_TYPE {
	AW210xx_LED_RED = 0,
	AW210xx_LED_GREEN,
	AW210xx_LED_BLUE,
	AW210xx_LED_ON,
	AW210xx_LED_OFF,
};

struct aw210xx_platform_data {
	int imax;
	const char *led_default_trigger;
	int led_mode;
	int br_brightness[LED_MAX_NUM];
	int color[LED_MAX_NUM];
	int rise_time_ms;
	int hold_time_ms;
	int fall_time_ms;
	int off_time_ms;
	struct aw210xx *led;
};

/*********************************************************
 *
 * struct
 *
 ********************************************************/
struct aw210xx {
	struct i2c_client *i2c;
	struct device *dev;
	struct led_classdev cdev;
	struct aw210xx_platform_data *pdata;
	struct work_struct brightness_work;
	struct work_struct cfg_work;
	struct mutex lock;
	int num_leds;
	int aw210xx_led_id;       /* for different driver ic id*/
	int led_groups_num;
	int led_allocation_order[LED_MAX_NUM];
	int id;			/* for one driver ic R,G,B id*/
	int color_ratio[2];
	u32 light_sensor_state;
	uint8_t sdmd_flag;
	uint8_t rgbmd_flag;
	br_pwm_t br_res;
	clk_pwm_t osc_clk;
	uint32_t chipid;
	uint8_t effect;
	int enable_gpio;
	int vbled_enable_gpio;
	struct regulator *vbled;
	uint32_t vbled_volt;
	uint32_t rgbcolor;
	uint32_t glo_current_max;
	uint32_t glo_current_min;
	uint32_t set_current;
	unsigned int imax;
	int rgb_isnk_on;
	int power_change_state;
	bool led_enable;
	struct delayed_work   breath_work;
	bool esd_flag;
	struct delayed_work   aw210_led_work;
	struct workqueue_struct *aw210_led_wq;
	unsigned int boot_mode;
};

/*********************************************************
 *
 * algorithm variable
 *
 ********************************************************/
typedef enum {
	INCALL_EFFECT,
	POWERON_EFFECT,
	CHARGE_EFFECT,
 	GAME_ENTER_EFFECT,
	NOTIFY_EFFECT,
	CHARGE_STAGE2_EFFECT,
	NEWALWAYSON_EFFECT,
	MUSIC_EFFECT,
	MAX_EFFECT,
} effect_select_t;

static int blevel = -1;
static int last_run_effect = 0;
static unsigned char aw210xx_br_data[MAX_EFFECT][LED_NUM] = {0};
static unsigned char aw210xx_col_data[MAX_EFFECT][LED_NUM] = {0};
static unsigned char dim_data[MAX_EFFECT][LED_NUM];
static unsigned char fade_data[MAX_EFFECT][LED_NUM];
static unsigned char effect_stop_val[MAX_EFFECT];
static AW_COLORFUL_INTERFACE_STRUCT aw210xx_interface[MAX_EFFECT];//aw_lamp_interface.h中定义该结构体

#define RGB_NUM		(LED_NUM/3)
static unsigned char loop_end[MAX_EFFECT][RGB_NUM] = {0};
static AW_MULTI_BREATH_DATA_STRUCT *effect_data[MAX_EFFECT] = {NULL};
static unsigned char num[MAX_EFFECT] = {0};
static AW_COLOR_STRUCT source_color[MAX_EFFECT][RGB_NUM];//leds_aw210xx_reg.h中定义，就是跑马和呼吸的结构体
static AW_COLOR_STRUCT destination_color[MAX_EFFECT][RGB_NUM];
static ALGO_DATA_STRUCT algo_data[MAX_EFFECT];//aw_breath_algorithm.h中定义
static ALGO_DATA_STRUCT aw210xx_algo_data[MAX_EFFECT][RGB_NUM];
static ALGO_DATA_STRUCT aw210xx_algo_color[MAX_EFFECT][RGB_NUM];
static unsigned char colorful_phase_nums[MAX_EFFECT][RGB_NUM] = {0};
static unsigned char colorful_cur_phase[MAX_EFFECT][RGB_NUM] = {0};
static unsigned char breath_cur_phase[MAX_EFFECT][RGB_NUM] = {0};
static unsigned char breath_cur_loop[MAX_EFFECT][RGB_NUM] = {0};
static unsigned char breath_phase_nums[MAX_EFFECT][RGB_NUM] = {0};
static unsigned char colorful_total_frames[MAX_EFFECT][RGB_NUM] = {0};
static unsigned char colorful_cur_frame[MAX_EFFECT][RGB_NUM] = {0};
static unsigned char colorful_cur_color_index[MAX_EFFECT][RGB_NUM] = {0};
static AW210XX_CFG aw210xx_cfg_array[] = {
    {incall_effect_data1,sizeof(incall_effect_data1)/sizeof(AW_MULTI_BREATH_DATA_STRUCT)},
	{poweron_effect_data1, sizeof(poweron_effect_data1)/sizeof(AW_MULTI_BREATH_DATA_STRUCT)},
	{charge_stage1_effect_data1, sizeof(charge_stage1_effect_data1)/sizeof(AW_MULTI_BREATH_DATA_STRUCT)},
	{gameenter_effect_data1, sizeof(gameenter_effect_data1)/sizeof(AW_MULTI_BREATH_DATA_STRUCT)},
	{notify_effect_data1, sizeof(notify_effect_data1)/sizeof(AW_MULTI_BREATH_DATA_STRUCT)},
	{charger_stage2_effect_data, sizeof(charger_stage2_effect_data)/sizeof(AW_MULTI_BREATH_DATA_STRUCT)},
};

typedef struct effect_control {
	int cur_effect;
	int prev_effect;
	int state[AW210XX_LED_MAXMODE]; // 0 disable, 1 init, 2 running, 3 pause, 4 second stage running (for charger),5 second stage pause, 6 100% recover  stage (for charger)
	int data[AW210XX_LED_MAXMODE];  // currently used for charge level
} effect_control_t;

static effect_control_t effect_state;
enum lights_types {
	L_BATTERY = 0,
	L_NOTIFY,
	L_KEYBOARD,
	L_GAMES,
	L_INCALL,
	L_WIFI,
	L_MAX,
};
int l_type[L_MAX];

/*
:: Avatar MG sequence
::     L0(1)   L7(4)
::
:: L1(5)           L6(0) 
:: 
:: L2(2)           L5(7)
:: 
::    L3(6)    L4(3)

::0 2 4 6 -- ic 0
::1 3 5 7 -- ic 1 

:: L0 IC 0 led_index= 1 color index = 1  effect_index = 2
:: L1 IC 1 led_index= 1 color index = 5  effect_index = 3
:: L2 IC 0 led_index= 2 color index = 2  effect_index = 4
:: L3 IC 1 led_index= 2 color index = 6  effect_index = 5
:: L4 IC 0 led_index= 3 color index = 3  effect_index = 6
:: L5 IC 1 led_index= 3 color index = 7  effect_index = 7
:: L6 IC 0 led_index= 0 color index = 0  effect_index = 0
:: L7 IC 1 led_index= 0 color index = 4  effect_index = 1
*/ 
#endif