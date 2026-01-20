/* generated HAL header file - do not edit */
#ifndef HAL_DATA_H_
#define HAL_DATA_H_
#include <stdint.h>
#include "bsp_api.h"
#include "common_data.h"
#include "r_capture_api.h"
#include "r_ceu.h"
#include "r_gpt.h"
#include "r_timer_api.h"
#include "r_iic_master.h"
#include "r_i2c_master_api.h"
FSP_HEADER
/* CEU on CAPTURE instance */
extern const capture_instance_t g_ceu_vga;
/* Access the CEU instance using these structures when calling API functions directly (::p_api is not used). */
extern ceu_instance_ctrl_t g_ceu_vga_ctrl;
extern const capture_cfg_t g_ceu_vga_cfg;
#ifndef g_ceu_vga_callback
void g_ceu_vga_callback(capture_callback_args_t *p_args);
#endif
/* CEU on CAPTURE instance */
extern const capture_instance_t g_ceu_sxga;
/* Access the CEU instance using these structures when calling API functions directly (::p_api is not used). */
extern ceu_instance_ctrl_t g_ceu_sxga_ctrl;
extern const capture_cfg_t g_ceu_sxga_cfg;
#ifndef g_ceu_sxga_callback
void g_ceu_sxga_callback(capture_callback_args_t *p_args);
#endif
/** Timer on GPT Instance. */
extern const timer_instance_t g_timer_periodic;

/** Access the GPT instance using these structures when calling API functions directly (::p_api is not used). */
extern gpt_instance_ctrl_t g_timer_periodic_ctrl;
extern const timer_cfg_t g_timer_periodic_cfg;

#ifndef NULL
void NULL(timer_callback_args_t *p_args);
#endif
/* I2C Master on IIC Instance. */
extern const i2c_master_instance_t g_i2c_master_for_cam;

/** Access the I2C Master instance using these structures when calling API functions directly (::p_api is not used). */
extern iic_master_instance_ctrl_t g_i2c_master_for_cam_ctrl;
extern const i2c_master_cfg_t g_i2c_master_for_cam_cfg;

#ifndef g_i2c_master_for_cam_callback
void g_i2c_master_for_cam_callback(i2c_master_callback_args_t *p_args);
#endif
void hal_entry(void);
void g_hal_init(void);
FSP_FOOTER
#endif /* HAL_DATA_H_ */
