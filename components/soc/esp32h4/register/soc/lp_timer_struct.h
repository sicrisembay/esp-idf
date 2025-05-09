/**
 * SPDX-FileCopyrightText: 2025 Espressif Systems (Shanghai) CO LTD
 *
 *  SPDX-License-Identifier: Apache-2.0
 */
#pragma once

#include <stdint.h>
#ifdef __cplusplus
extern "C" {
#endif

/** Group: configure_register */
/** Type of timer_tar0_low register
 *  RTC timer threshold low bits register0
 */
typedef union {
    struct {
        /** timer_main_timer_tar_low0 : R/W; bitpos: [31:0]; default: 0;
         *  Configures the lower 32 bits of the trigger threshold for the RTC timer compare0.
         */
        uint32_t timer_main_timer_tar_low0:32;
    };
    uint32_t val;
} lp_timer_tar0_low_reg_t;

/** Type of timer_tar0_high register
 *  RTC timer enable register0
 */
typedef union {
    struct {
        /** timer_main_timer_tar_high0 : R/W; bitpos: [15:0]; default: 0;
         *  Configures the higher 16 bits of the trigger threshold for the RTC timer compare0
         */
        uint32_t timer_main_timer_tar_high0:16;
        uint32_t reserved_16:15;
        /** timer_main_timer_tar_en0 : WT; bitpos: [31]; default: 0;
         *  Configure this bit to enable the timer compare0 alarm.
         *  0: Disable
         *  1: Enable
         */
        uint32_t timer_main_timer_tar_en0:1;
    };
    uint32_t val;
} lp_timer_tar0_high_reg_t;

/** Type of timer_tar1_low register
 *  RTC timer threshold low bits register1
 */
typedef union {
    struct {
        /** timer_main_timer_tar_low1 : R/W; bitpos: [31:0]; default: 0;
         *  Configures the lower 32 bits of the trigger threshold for the RTC timer compare1.
         */
        uint32_t timer_main_timer_tar_low1:32;
    };
    uint32_t val;
} lp_timer_tar1_low_reg_t;

/** Type of timer_tar1_high register
 *  RTC timer threshold high bits register0
 */
typedef union {
    struct {
        /** timer_main_timer_tar_high1 : R/W; bitpos: [15:0]; default: 0;
         *  Configures the higher 16 bits of the trigger threshold for the RTC timer compare1
         */
        uint32_t timer_main_timer_tar_high1:16;
        uint32_t reserved_16:15;
        /** timer_main_timer_tar_en1 : WT; bitpos: [31]; default: 0;
         *  Configure this bit to enable the timer compare1 alarm.
         *  0: Disable
         *  1: Enable
         */
        uint32_t timer_main_timer_tar_en1:1;
    };
    uint32_t val;
} lp_timer_tar1_high_reg_t;

/** Type of timer_update register
 *  RTC timer update control register
 */
typedef union {
    struct {
        uint32_t reserved_0:27;
        /** timer_main_timer_update : WT; bitpos: [27]; default: 0;
         *  Triggers timer by software
         */
        uint32_t timer_main_timer_update:1;
        /** timer_main_timer_regdma_work : R/W; bitpos: [28]; default: 0;
         *  Selects the triggering condition for the RTC timer,triggered when regdma working
         */
        uint32_t timer_main_timer_regdma_work:1;
        /** timer_main_timer_xtal_off : R/W; bitpos: [29]; default: 0;
         *  Selects the triggering condition for the RTC timer,triggered when XTAL\_CLK powers
         *  up
         */
        uint32_t timer_main_timer_xtal_off:1;
        /** timer_main_timer_sys_stall : R/W; bitpos: [30]; default: 0;
         *  Selects the triggering condition for the RTC timer,triggered when CPU enters or
         *  exits the stall state.
         */
        uint32_t timer_main_timer_sys_stall:1;
        /** timer_main_timer_sys_rst : R/W; bitpos: [31]; default: 0;
         *  Selects the triggering condition for the RTC timer,triggered when resetting digital
         *  core completes
         */
        uint32_t timer_main_timer_sys_rst:1;
    };
    uint32_t val;
} lp_timer_update_reg_t;

/** Type of timer_main_buf0_low register
 *  RTC timer buffer0 low bits register
 */
typedef union {
    struct {
        /** timer_main_timer_buf0_low : RO; bitpos: [31:0]; default: 0;
         *  RTC timer buffer0 low bits register
         */
        uint32_t timer_main_timer_buf0_low:32;
    };
    uint32_t val;
} lp_timer_main_buf0_low_reg_t;

/** Type of timer_main_buf0_high register
 *  RTC timer buffer0 high bits register
 */
typedef union {
    struct {
        /** timer_main_timer_buf0_high : RO; bitpos: [15:0]; default: 0;
         *  RTC timer buffer0 high bits register
         */
        uint32_t timer_main_timer_buf0_high:16;
        uint32_t reserved_16:16;
    };
    uint32_t val;
} lp_timer_main_buf0_high_reg_t;

/** Type of timer_main_buf1_low register
 *  RTC timer buffer1 low bits register
 */
typedef union {
    struct {
        /** timer_main_timer_buf1_low : RO; bitpos: [31:0]; default: 0;
         *  RTC timer buffer1 low bits register
         */
        uint32_t timer_main_timer_buf1_low:32;
    };
    uint32_t val;
} lp_timer_main_buf1_low_reg_t;

/** Type of timer_main_buf1_high register
 *  RTC timer buffer1 high bits register
 */
typedef union {
    struct {
        /** timer_main_timer_buf1_high : RO; bitpos: [15:0]; default: 0;
         *  RTC timer buffer1 high bits register
         */
        uint32_t timer_main_timer_buf1_high:16;
        uint32_t reserved_16:16;
    };
    uint32_t val;
} lp_timer_main_buf1_high_reg_t;

/** Type of timer_int_raw register
 *  RTC timer interrupt raw register
 */
typedef union {
    struct {
        uint32_t reserved_0:30;
        /** timer_overflow_raw : R/WTC/SS; bitpos: [30]; default: 0;
         *  Triggered when counter register of RTC main timer overflow.
         */
        uint32_t timer_overflow_raw:1;
        /** timer_soc_wakeup_int_raw : R/WTC/SS; bitpos: [31]; default: 0;
         *  Triggered when RTC main timer reach the target value.
         */
        uint32_t timer_soc_wakeup_int_raw:1;
    };
    uint32_t val;
} lp_timer_int_raw_reg_t;

/** Type of timer_int_st register
 *  RTC timer interrupt status register
 */
typedef union {
    struct {
        uint32_t reserved_0:30;
        /** timer_overflow_st : RO; bitpos: [30]; default: 0;
         *  Status of RTC main timer overflow interrupt .
         */
        uint32_t timer_overflow_st:1;
        /** timer_soc_wakeup_int_st : RO; bitpos: [31]; default: 0;
         *  Status of RTC main timer interrupt .
         */
        uint32_t timer_soc_wakeup_int_st:1;
    };
    uint32_t val;
} lp_timer_int_st_reg_t;

/** Type of timer_int_ena register
 *  RTC timer interrupt enable register
 */
typedef union {
    struct {
        uint32_t reserved_0:30;
        /** timer_overflow_ena : R/W; bitpos: [30]; default: 0;
         *  Enable the RTC main timer overflow interrupt..
         *  0 : Disable
         *  1: Enable
         */
        uint32_t timer_overflow_ena:1;
        /** timer_soc_wakeup_int_ena : R/W; bitpos: [31]; default: 0;
         *  Enable the RTC main timer interrupt..
         *  0 : Disable
         *  1: Enable
         */
        uint32_t timer_soc_wakeup_int_ena:1;
    };
    uint32_t val;
} lp_timer_int_ena_reg_t;

/** Type of timer_int_clr register
 *  RTC timer interrupt clear register
 */
typedef union {
    struct {
        uint32_t reserved_0:30;
        /** timer_overflow_clr : WT; bitpos: [30]; default: 0;
         *  Clear the RTC main timer overflow raw interrupt..
         */
        uint32_t timer_overflow_clr:1;
        /** timer_soc_wakeup_int_clr : WT; bitpos: [31]; default: 0;
         *  Clear the RTC main timer raw interrupt..
         */
        uint32_t timer_soc_wakeup_int_clr:1;
    };
    uint32_t val;
} lp_timer_int_clr_reg_t;

/** Type of timer_lp_int_raw register
 *  RTC timer interrupt raw register(For ULP)
 */
typedef union {
    struct {
        uint32_t reserved_0:30;
        /** timer_main_timer_overflow_lp_int_raw : R/WTC/SS; bitpos: [30]; default: 0;
         *  Triggered when counter register of RTC main timer overflow
         */
        uint32_t timer_main_timer_overflow_lp_int_raw:1;
        /** timer_main_timer_lp_int_raw : R/WTC/SS; bitpos: [31]; default: 0;
         *  Triggered when RTC main timer reach the target value
         */
        uint32_t timer_main_timer_lp_int_raw:1;
    };
    uint32_t val;
} lp_timer_lp_int_raw_reg_t;

/** Type of timer_lp_int_st register
 *  RTC timer interrupt status register(For ULP)
 */
typedef union {
    struct {
        uint32_t reserved_0:30;
        /** timer_main_timer_overflow_lp_int_st : RO; bitpos: [30]; default: 0;
         *  Status of RTC main timer overflow interrupt .
         */
        uint32_t timer_main_timer_overflow_lp_int_st:1;
        /** timer_main_timer_lp_int_st : RO; bitpos: [31]; default: 0;
         *  Status of RTC main timer interrupt .
         */
        uint32_t timer_main_timer_lp_int_st:1;
    };
    uint32_t val;
} lp_timer_lp_int_st_reg_t;

/** Type of timer_lp_int_ena register
 *  RTC timer interrupt enable register(For ULP)
 */
typedef union {
    struct {
        uint32_t reserved_0:30;
        /** timer_main_timer_overflow_lp_int_ena : R/W; bitpos: [30]; default: 0;
         *  Enable the RTC main timer overflow interrupt..
         *  0 : Disable
         *  1: Enable
         */
        uint32_t timer_main_timer_overflow_lp_int_ena:1;
        /** timer_main_timer_lp_int_ena : R/W; bitpos: [31]; default: 0;
         *  Enable the RTC main timer interrupt..
         *  0 : Disable
         *  1: Enable
         */
        uint32_t timer_main_timer_lp_int_ena:1;
    };
    uint32_t val;
} lp_timer_lp_int_ena_reg_t;

/** Type of timer_lp_int_clr register
 *  RTC timer interrupt clear register(For ULP)
 */
typedef union {
    struct {
        uint32_t reserved_0:30;
        /** timer_main_timer_overflow_lp_int_clr : WT; bitpos: [30]; default: 0;
         *  Clear the RTC main timer overflow clear interrupt..
         */
        uint32_t timer_main_timer_overflow_lp_int_clr:1;
        /** timer_main_timer_lp_int_clr : WT; bitpos: [31]; default: 0;
         *  Clear the RTC main timer clear interrupt..
         */
        uint32_t timer_main_timer_lp_int_clr:1;
    };
    uint32_t val;
} lp_timer_lp_int_clr_reg_t;

/** Type of timer_date register
 *  Date register
 */
typedef union {
    struct {
        /** timer_date : R/W; bitpos: [30:0]; default: 36769936;
         *  Version data
         */
        uint32_t timer_date:31;
        uint32_t reserved_31:1;
    };
    uint32_t val;
} lp_timer_date_reg_t;


typedef struct {
    volatile lp_timer_tar0_low_reg_t timer_tar0_low;
    volatile lp_timer_tar0_high_reg_t timer_tar0_high;
    volatile lp_timer_tar1_low_reg_t timer_tar1_low;
    volatile lp_timer_tar1_high_reg_t timer_tar1_high;
    volatile lp_timer_update_reg_t timer_update;
    volatile lp_timer_main_buf0_low_reg_t timer_main_buf0_low;
    volatile lp_timer_main_buf0_high_reg_t timer_main_buf0_high;
    volatile lp_timer_main_buf1_low_reg_t timer_main_buf1_low;
    volatile lp_timer_main_buf1_high_reg_t timer_main_buf1_high;
    uint32_t reserved_024;
    volatile lp_timer_int_raw_reg_t timer_int_raw;
    volatile lp_timer_int_st_reg_t timer_int_st;
    volatile lp_timer_int_ena_reg_t timer_int_ena;
    volatile lp_timer_int_clr_reg_t timer_int_clr;
    volatile lp_timer_lp_int_raw_reg_t timer_lp_int_raw;
    volatile lp_timer_lp_int_st_reg_t timer_lp_int_st;
    volatile lp_timer_lp_int_ena_reg_t timer_lp_int_ena;
    volatile lp_timer_lp_int_clr_reg_t timer_lp_int_clr;
    uint32_t reserved_048[237];
    volatile lp_timer_date_reg_t timer_date;
} lp_timer_dev_t;

extern lp_timer_dev_t LP_TIMER;

#ifndef __cplusplus
_Static_assert(sizeof(lp_timer_dev_t) == 0x400, "Invalid size of lp_timer_dev_t structure");
#endif

#ifdef __cplusplus
}
#endif
