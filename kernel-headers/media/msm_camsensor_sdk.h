/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef __LINUX_MSM_CAMSENSOR_SDK_H
#define __LINUX_MSM_CAMSENSOR_SDK_H
#include <linux/v4l2-mediabus.h>
#define KVERSION 0x1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MAX_POWER_CONFIG 12
#define GPIO_OUT_LOW (0 << 1)
#define GPIO_OUT_HIGH (1 << 1)
#define CSI_EMBED_DATA 0x12
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CSI_RESERVED_DATA_0 0x13
#define CSI_YUV422_8 0x1E
#define CSI_RAW8 0x2A
#define CSI_RAW10 0x2B
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CSI_RAW12 0x2C
#define CSI_DECODE_6BIT 0
#define CSI_DECODE_8BIT 1
#define CSI_DECODE_10BIT 2
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CSI_DECODE_DPCM_10_8_10 5
#define MAX_CID 16
#define I2C_SEQ_REG_DATA_MAX 256
#define MSM_V4L2_PIX_FMT_META v4l2_fourcc('M', 'E', 'T', 'A')
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MSM_V4L2_PIX_FMT_SBGGR14 v4l2_fourcc('B', 'G', '1', '4')
#define MSM_V4L2_PIX_FMT_SGBRG14 v4l2_fourcc('G', 'B', '1', '4')
#define MSM_V4L2_PIX_FMT_SGRBG14 v4l2_fourcc('B', 'A', '1', '4')
#define MSM_V4L2_PIX_FMT_SRGGB14 v4l2_fourcc('R', 'G', '1', '4')
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MAX_ACTUATOR_REG_TBL_SIZE 8
#define MAX_ACTUATOR_REGION 5
#define NUM_ACTUATOR_DIR 2
#define MAX_ACTUATOR_SCENARIO 8
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MAX_ACT_MOD_NAME_SIZE 32
#define MAX_ACT_NAME_SIZE 32
#define MAX_ACTUATOR_INIT_SET 120
#define MAX_I2C_REG_SET 12
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MAX_NAME_SIZE 32
#define MAX_LED_TRIGGERS 3
enum msm_sensor_camera_id_t {
 CAMERA_0,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 CAMERA_1,
 CAMERA_2,
 CAMERA_3,
 MAX_CAMERAS,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
enum i2c_freq_mode_t {
 I2C_STANDARD_MODE,
 I2C_FAST_MODE,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 I2C_CUSTOM_MODE,
 I2C_FAST_PLUS_MODE,
 I2C_MAX_MODES,
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum camb_position_t {
 BACK_CAMERA_B,
 FRONT_CAMERA_B,
 INVALID_CAMERA_B,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
enum msm_sensor_power_seq_type_t {
 SENSOR_CLK,
 SENSOR_GPIO,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 SENSOR_VREG,
 SENSOR_I2C_MUX,
 SENSOR_I2C,
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum msm_camera_i2c_reg_addr_type {
 MSM_CAMERA_I2C_BYTE_ADDR = 1,
 MSM_CAMERA_I2C_WORD_ADDR,
 MSM_CAMERA_I2C_3B_ADDR,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 MSM_CAMERA_I2C_ADDR_TYPE_MAX,
};
enum msm_camera_i2c_data_type {
 MSM_CAMERA_I2C_BYTE_DATA = 1,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 MSM_CAMERA_I2C_WORD_DATA,
 MSM_CAMERA_I2C_DWORD_DATA,
 MSM_CAMERA_I2C_SET_BYTE_MASK,
 MSM_CAMERA_I2C_UNSET_BYTE_MASK,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 MSM_CAMERA_I2C_SET_WORD_MASK,
 MSM_CAMERA_I2C_UNSET_WORD_MASK,
 MSM_CAMERA_I2C_SET_BYTE_WRITE_MASK_DATA,
 MSM_CAMERA_I2C_DATA_TYPE_MAX,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
enum msm_sensor_power_seq_gpio_t {
 SENSOR_GPIO_RESET,
 SENSOR_GPIO_STANDBY,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 SENSOR_GPIO_AF_PWDM,
 SENSOR_GPIO_VIO,
 SENSOR_GPIO_VANA,
 SENSOR_GPIO_VDIG,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 SENSOR_GPIO_VAF,
 SENSOR_GPIO_FL_EN,
 SENSOR_GPIO_FL_NOW,
 SENSOR_GPIO_FL_RESET,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 SENSOR_GPIO_CUSTOM1,
 SENSOR_GPIO_CUSTOM2,
 SENSOR_GPIO_MAX,
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum msm_camera_vreg_name_t {
 CAM_VDIG,
 CAM_VIO,
 CAM_VANA,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 CAM_VAF,
 CAM_V_CUSTOM1,
 CAM_V_CUSTOM2,
 CAM_VREG_MAX,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
enum msm_sensor_clk_type_t {
 SENSOR_CAM_MCLK,
 SENSOR_CAM_CLK,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 SENSOR_CAM_CLK_MAX,
};
enum camerab_mode_t {
 CAMERA_MODE_2D_B = (1<<0),
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 CAMERA_MODE_3D_B = (1<<1),
 CAMERA_MODE_INVALID = (1<<2),
};
enum sensor_stats_type {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 YRGB,
 YYYY,
};
enum msm_actuator_data_type {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 MSM_ACTUATOR_BYTE_DATA = 1,
 MSM_ACTUATOR_WORD_DATA,
};
enum msm_actuator_addr_type {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 MSM_ACTUATOR_BYTE_ADDR = 1,
 MSM_ACTUATOR_WORD_ADDR,
};
enum msm_actuator_write_type {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 MSM_ACTUATOR_WRITE_HW_DAMP,
 MSM_ACTUATOR_WRITE_DAC,
 MSM_ACTUATOR_WRITE,
 MSM_ACTUATOR_WRITE_DIR_REG,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 MSM_ACTUATOR_POLL,
 MSM_ACTUATOR_READ_WRITE,
};
enum msm_actuator_i2c_operation {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 MSM_ACT_WRITE = 0,
 MSM_ACT_POLL,
};
enum actuator_type {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 ACTUATOR_VCM,
 ACTUATOR_PIEZO,
 ACTUATOR_HVCM,
 ACTUATOR_BIVCM,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
enum msm_flash_driver_type {
 FLASH_DRIVER_PMIC,
 FLASH_DRIVER_I2C,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 FLASH_DRIVER_GPIO,
 FLASH_DRIVER_DEFAULT
};
enum msm_flash_cfg_type_t {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 CFG_FLASH_INIT,
 CFG_FLASH_RELEASE,
 CFG_FLASH_OFF,
 CFG_FLASH_LOW,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 CFG_FLASH_HIGH,
};
struct msm_sensor_power_setting {
 enum msm_sensor_power_seq_type_t seq_type;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint16_t seq_val;
 long config_val;
 uint16_t delay;
 void *data[10];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct msm_sensor_power_setting_array {
 struct msm_sensor_power_setting power_setting_a[MAX_POWER_CONFIG];
 struct msm_sensor_power_setting *power_setting;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint16_t size;
 struct msm_sensor_power_setting power_down_setting_a[MAX_POWER_CONFIG];
 struct msm_sensor_power_setting *power_down_setting;
 uint16_t size_down;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct msm_sensor_init_params {
 int modes_supported;
 enum camb_position_t position;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint32_t sensor_mount_angle;
};
struct msm_sensor_id_info_t {
 uint16_t sensor_id_reg_addr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint16_t sensor_id;
 uint16_t sensor_id_mask;
};
struct msm_camera_sensor_slave_info {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 char sensor_name[32];
 char eeprom_name[32];
 char actuator_name[32];
 char ois_name[32];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 char flash_name[32];
 enum msm_sensor_camera_id_t camera_id;
 uint16_t slave_addr;
 enum i2c_freq_mode_t i2c_freq_mode;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 enum msm_camera_i2c_reg_addr_type addr_type;
 struct msm_sensor_id_info_t sensor_id_info;
 struct msm_sensor_power_setting_array power_setting_array;
 uint8_t is_init_params_valid;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct msm_sensor_init_params sensor_init_params;
 uint8_t is_flash_supported;
};
struct msm_camera_i2c_reg_array {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint16_t reg_addr;
 uint16_t reg_data;
 uint32_t delay;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct msm_camera_i2c_reg_setting {
 struct msm_camera_i2c_reg_array *reg_setting;
 uint16_t size;
 enum msm_camera_i2c_reg_addr_type addr_type;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 enum msm_camera_i2c_data_type data_type;
 uint16_t delay;
};
struct msm_camera_csid_vc_cfg {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint8_t cid;
 uint8_t dt;
 uint8_t decode_format;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct msm_camera_csid_lut_params {
 uint8_t num_cid;
 struct msm_camera_csid_vc_cfg vc_cfg_a[MAX_CID];
 struct msm_camera_csid_vc_cfg *vc_cfg[MAX_CID];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct msm_camera_csid_params {
 uint8_t lane_cnt;
 uint16_t lane_assign;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint8_t phy_sel;
 uint32_t csi_clk;
 struct msm_camera_csid_lut_params lut_params;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct msm_camera_csiphy_params {
 uint8_t lane_cnt;
 uint8_t settle_cnt;
 uint16_t lane_mask;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint8_t combo_mode;
 uint8_t csid_core;
 uint32_t csiphy_clk;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct msm_camera_i2c_seq_reg_array {
 uint16_t reg_addr;
 uint8_t reg_data[I2C_SEQ_REG_DATA_MAX];
 uint16_t reg_data_size;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct msm_camera_i2c_seq_reg_setting {
 struct msm_camera_i2c_seq_reg_array *reg_setting;
 uint16_t size;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 enum msm_camera_i2c_reg_addr_type addr_type;
 uint16_t delay;
};
struct msm_actuator_reg_params_t {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 enum msm_actuator_write_type reg_write_type;
 uint32_t hw_mask;
 uint16_t reg_addr;
 uint16_t hw_shift;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint16_t data_shift;
 uint16_t data_type;
 uint16_t addr_type;
 uint16_t reg_data;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint16_t delay;
};
struct damping_params_t {
 uint32_t damping_step;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint32_t damping_delay;
 uint32_t hw_params;
};
struct region_params_t {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint16_t step_bound[2];
 uint16_t code_per_step;
 uint32_t qvalue;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct reg_settings_t {
 uint16_t reg_addr;
 enum msm_actuator_addr_type addr_type;
 uint16_t reg_data;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 enum msm_actuator_data_type data_type;
 enum msm_actuator_i2c_operation i2c_operation;
 uint32_t delay;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct msm_camera_i2c_reg_setting_array {
 struct msm_camera_i2c_reg_array reg_setting_a[MAX_I2C_REG_SET];
 uint16_t size;
 enum msm_camera_i2c_reg_addr_type addr_type;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 enum msm_camera_i2c_data_type data_type;
 uint16_t delay;
};
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */

