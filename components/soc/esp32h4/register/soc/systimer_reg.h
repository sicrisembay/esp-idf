/**
 * SPDX-FileCopyrightText: 2025 Espressif Systems (Shanghai) CO LTD
 *
 *  SPDX-License-Identifier: Apache-2.0
 */
#pragma once

#include <stdint.h>
#include "soc/soc.h"
#ifdef __cplusplus
extern "C" {
#endif

/** SYSTIMER_CONF_REG register
 *  Configure system timer clock
 */
#define SYSTIMER_CONF_REG (DR_REG_SYSTIMER_BASE + 0x0)
/** SYSTIMER_ETM_EN : R/W; bitpos: [1]; default: 0;
 *  Configures whether or not to enable generation of ETM events.
 *  0: Disable
 *  1: Enable
 */
#define SYSTIMER_ETM_EN    (BIT(1))
#define SYSTIMER_ETM_EN_M  (SYSTIMER_ETM_EN_V << SYSTIMER_ETM_EN_S)
#define SYSTIMER_ETM_EN_V  0x00000001U
#define SYSTIMER_ETM_EN_S  1
/** SYSTIMER_TARGET2_WORK_EN : R/W; bitpos: [22]; default: 0;
 *  Configures whether or not to enable COMP2.
 *  0: Disable
 *  1: Enable
 */
#define SYSTIMER_TARGET2_WORK_EN    (BIT(22))
#define SYSTIMER_TARGET2_WORK_EN_M  (SYSTIMER_TARGET2_WORK_EN_V << SYSTIMER_TARGET2_WORK_EN_S)
#define SYSTIMER_TARGET2_WORK_EN_V  0x00000001U
#define SYSTIMER_TARGET2_WORK_EN_S  22
/** SYSTIMER_TARGET1_WORK_EN : R/W; bitpos: [23]; default: 0;
 *  Configures whether or not to enable COMP1. See details in SYSTIMER_TARGET2_WORK_EN.
 */
#define SYSTIMER_TARGET1_WORK_EN    (BIT(23))
#define SYSTIMER_TARGET1_WORK_EN_M  (SYSTIMER_TARGET1_WORK_EN_V << SYSTIMER_TARGET1_WORK_EN_S)
#define SYSTIMER_TARGET1_WORK_EN_V  0x00000001U
#define SYSTIMER_TARGET1_WORK_EN_S  23
/** SYSTIMER_TARGET0_WORK_EN : R/W; bitpos: [24]; default: 0;
 *  Configures whether or not to enable COMP0. See details in SYSTIMER_TARGET2_WORK_EN.
 */
#define SYSTIMER_TARGET0_WORK_EN    (BIT(24))
#define SYSTIMER_TARGET0_WORK_EN_M  (SYSTIMER_TARGET0_WORK_EN_V << SYSTIMER_TARGET0_WORK_EN_S)
#define SYSTIMER_TARGET0_WORK_EN_V  0x00000001U
#define SYSTIMER_TARGET0_WORK_EN_S  24
/** SYSTIMER_TIMER_UNIT1_CORE1_STALL_EN : R/W; bitpos: [25]; default: 1;
 *  Configures whether or not UNIT1 is stalled when CORE1 is stalled.
 *  0: UNIT1 is not stalled.
 *  1: UNIT1 is stalled.
 */
#define SYSTIMER_TIMER_UNIT1_CORE1_STALL_EN    (BIT(25))
#define SYSTIMER_TIMER_UNIT1_CORE1_STALL_EN_M  (SYSTIMER_TIMER_UNIT1_CORE1_STALL_EN_V << SYSTIMER_TIMER_UNIT1_CORE1_STALL_EN_S)
#define SYSTIMER_TIMER_UNIT1_CORE1_STALL_EN_V  0x00000001U
#define SYSTIMER_TIMER_UNIT1_CORE1_STALL_EN_S  25
/** SYSTIMER_TIMER_UNIT1_CORE0_STALL_EN : R/W; bitpos: [26]; default: 1;
 *  Configures whether or not UNIT1 is stalled when CORE0 is stalled. See details in
 *  SYSTIMER_TIMER_UNIT1_CORE1_STALL_EN.
 */
#define SYSTIMER_TIMER_UNIT1_CORE0_STALL_EN    (BIT(26))
#define SYSTIMER_TIMER_UNIT1_CORE0_STALL_EN_M  (SYSTIMER_TIMER_UNIT1_CORE0_STALL_EN_V << SYSTIMER_TIMER_UNIT1_CORE0_STALL_EN_S)
#define SYSTIMER_TIMER_UNIT1_CORE0_STALL_EN_V  0x00000001U
#define SYSTIMER_TIMER_UNIT1_CORE0_STALL_EN_S  26
/** SYSTIMER_TIMER_UNIT0_CORE1_STALL_EN : R/W; bitpos: [27]; default: 0;
 *  Configures whether or not UNIT0 is stalled when CORE1 is stalled. See details in
 *  SYSTIMER_TIMER_UNIT1_CORE1_STALL_EN.
 */
#define SYSTIMER_TIMER_UNIT0_CORE1_STALL_EN    (BIT(27))
#define SYSTIMER_TIMER_UNIT0_CORE1_STALL_EN_M  (SYSTIMER_TIMER_UNIT0_CORE1_STALL_EN_V << SYSTIMER_TIMER_UNIT0_CORE1_STALL_EN_S)
#define SYSTIMER_TIMER_UNIT0_CORE1_STALL_EN_V  0x00000001U
#define SYSTIMER_TIMER_UNIT0_CORE1_STALL_EN_S  27
/** SYSTIMER_TIMER_UNIT0_CORE0_STALL_EN : R/W; bitpos: [28]; default: 0;
 *  Configures whether or not UNIT0 is stalled when CORE0 is stalled. See details in
 *  SYSTIMER_TIMER_UNIT1_CORE1_STALL_EN.
 */
#define SYSTIMER_TIMER_UNIT0_CORE0_STALL_EN    (BIT(28))
#define SYSTIMER_TIMER_UNIT0_CORE0_STALL_EN_M  (SYSTIMER_TIMER_UNIT0_CORE0_STALL_EN_V << SYSTIMER_TIMER_UNIT0_CORE0_STALL_EN_S)
#define SYSTIMER_TIMER_UNIT0_CORE0_STALL_EN_V  0x00000001U
#define SYSTIMER_TIMER_UNIT0_CORE0_STALL_EN_S  28
/** SYSTIMER_TIMER_UNIT1_WORK_EN : R/W; bitpos: [29]; default: 0;
 *  Configures whether or not to enable UNIT1.
 *  0: Disable
 *  1: Enable
 */
#define SYSTIMER_TIMER_UNIT1_WORK_EN    (BIT(29))
#define SYSTIMER_TIMER_UNIT1_WORK_EN_M  (SYSTIMER_TIMER_UNIT1_WORK_EN_V << SYSTIMER_TIMER_UNIT1_WORK_EN_S)
#define SYSTIMER_TIMER_UNIT1_WORK_EN_V  0x00000001U
#define SYSTIMER_TIMER_UNIT1_WORK_EN_S  29
/** SYSTIMER_TIMER_UNIT0_WORK_EN : R/W; bitpos: [30]; default: 1;
 *  Configures whether or not to enable UNIT0.
 *  0: Disable
 *  1: Enable
 */
#define SYSTIMER_TIMER_UNIT0_WORK_EN    (BIT(30))
#define SYSTIMER_TIMER_UNIT0_WORK_EN_M  (SYSTIMER_TIMER_UNIT0_WORK_EN_V << SYSTIMER_TIMER_UNIT0_WORK_EN_S)
#define SYSTIMER_TIMER_UNIT0_WORK_EN_V  0x00000001U
#define SYSTIMER_TIMER_UNIT0_WORK_EN_S  30
/** SYSTIMER_CLK_EN : R/W; bitpos: [31]; default: 0;
 *  Configures register clock gating.
 *  0: Only enable needed clock for register read or write operations.
 *  1: Register clock is always enabled for read and write operations.
 */
#define SYSTIMER_CLK_EN    (BIT(31))
#define SYSTIMER_CLK_EN_M  (SYSTIMER_CLK_EN_V << SYSTIMER_CLK_EN_S)
#define SYSTIMER_CLK_EN_V  0x00000001U
#define SYSTIMER_CLK_EN_S  31

/** SYSTIMER_UNIT0_OP_REG register
 *  Read UNIT0 value to registers
 */
#define SYSTIMER_UNIT0_OP_REG (DR_REG_SYSTIMER_BASE + 0x4)
/** SYSTIMER_TIMER_UNIT0_VALUE_VALID : R/SS/WTC; bitpos: [29]; default: 0;
 *  Represents UNIT0 value is synchronized and valid.
 */
#define SYSTIMER_TIMER_UNIT0_VALUE_VALID    (BIT(29))
#define SYSTIMER_TIMER_UNIT0_VALUE_VALID_M  (SYSTIMER_TIMER_UNIT0_VALUE_VALID_V << SYSTIMER_TIMER_UNIT0_VALUE_VALID_S)
#define SYSTIMER_TIMER_UNIT0_VALUE_VALID_V  0x00000001U
#define SYSTIMER_TIMER_UNIT0_VALUE_VALID_S  29
/** SYSTIMER_TIMER_UNIT0_UPDATE : WT; bitpos: [30]; default: 0;
 *  Configures whether or not to update timer UNIT0, i.e., reads the UNIT0 count value
 *  to SYSTIMER_TIMER_UNIT0_VALUE_HI and SYSTIMER_TIMER_UNIT0_VALUE_LO.
 *  0: No effect
 *  1: Update timer UNIT0
 */
#define SYSTIMER_TIMER_UNIT0_UPDATE    (BIT(30))
#define SYSTIMER_TIMER_UNIT0_UPDATE_M  (SYSTIMER_TIMER_UNIT0_UPDATE_V << SYSTIMER_TIMER_UNIT0_UPDATE_S)
#define SYSTIMER_TIMER_UNIT0_UPDATE_V  0x00000001U
#define SYSTIMER_TIMER_UNIT0_UPDATE_S  30

/** SYSTIMER_UNIT1_OP_REG register
 *  Read UNIT1 value to registers
 */
#define SYSTIMER_UNIT1_OP_REG (DR_REG_SYSTIMER_BASE + 0x8)
/** SYSTIMER_TIMER_UNIT1_VALUE_VALID : R/SS/WTC; bitpos: [29]; default: 0;
 *  Represents UNIT1 value is synchronized and valid.
 */
#define SYSTIMER_TIMER_UNIT1_VALUE_VALID    (BIT(29))
#define SYSTIMER_TIMER_UNIT1_VALUE_VALID_M  (SYSTIMER_TIMER_UNIT1_VALUE_VALID_V << SYSTIMER_TIMER_UNIT1_VALUE_VALID_S)
#define SYSTIMER_TIMER_UNIT1_VALUE_VALID_V  0x00000001U
#define SYSTIMER_TIMER_UNIT1_VALUE_VALID_S  29
/** SYSTIMER_TIMER_UNIT1_UPDATE : WT; bitpos: [30]; default: 0;
 *  Configures whether or not to update timer UNIT1, i.e., reads the UNIT1 count value
 *  to SYSTIMER_TIMER_UNIT1_VALUE_HI and SYSTIMER_TIMER_UNIT1_VALUE_LO.
 *  0: No effect
 *  1: Update timer UNIT1
 */
#define SYSTIMER_TIMER_UNIT1_UPDATE    (BIT(30))
#define SYSTIMER_TIMER_UNIT1_UPDATE_M  (SYSTIMER_TIMER_UNIT1_UPDATE_V << SYSTIMER_TIMER_UNIT1_UPDATE_S)
#define SYSTIMER_TIMER_UNIT1_UPDATE_V  0x00000001U
#define SYSTIMER_TIMER_UNIT1_UPDATE_S  30

/** SYSTIMER_UNIT0_LOAD_HI_REG register
 *  High 20 bits to be loaded to UNIT0
 */
#define SYSTIMER_UNIT0_LOAD_HI_REG (DR_REG_SYSTIMER_BASE + 0xc)
/** SYSTIMER_TIMER_UNIT0_LOAD_HI : R/W; bitpos: [19:0]; default: 0;
 *  Configures the value to be loaded to UNIT0, high 20 bits.
 */
#define SYSTIMER_TIMER_UNIT0_LOAD_HI    0x000FFFFFU
#define SYSTIMER_TIMER_UNIT0_LOAD_HI_M  (SYSTIMER_TIMER_UNIT0_LOAD_HI_V << SYSTIMER_TIMER_UNIT0_LOAD_HI_S)
#define SYSTIMER_TIMER_UNIT0_LOAD_HI_V  0x000FFFFFU
#define SYSTIMER_TIMER_UNIT0_LOAD_HI_S  0

/** SYSTIMER_UNIT0_LOAD_LO_REG register
 *  Low 32 bits to be loaded to UNIT0
 */
#define SYSTIMER_UNIT0_LOAD_LO_REG (DR_REG_SYSTIMER_BASE + 0x10)
/** SYSTIMER_TIMER_UNIT0_LOAD_LO : R/W; bitpos: [31:0]; default: 0;
 *  Configures the value to be loaded to UNIT0, low 32 bits.
 */
#define SYSTIMER_TIMER_UNIT0_LOAD_LO    0xFFFFFFFFU
#define SYSTIMER_TIMER_UNIT0_LOAD_LO_M  (SYSTIMER_TIMER_UNIT0_LOAD_LO_V << SYSTIMER_TIMER_UNIT0_LOAD_LO_S)
#define SYSTIMER_TIMER_UNIT0_LOAD_LO_V  0xFFFFFFFFU
#define SYSTIMER_TIMER_UNIT0_LOAD_LO_S  0

/** SYSTIMER_UNIT1_LOAD_HI_REG register
 *  High 20 bits to be loaded to UNIT1
 */
#define SYSTIMER_UNIT1_LOAD_HI_REG (DR_REG_SYSTIMER_BASE + 0x14)
/** SYSTIMER_TIMER_UNIT1_LOAD_HI : R/W; bitpos: [19:0]; default: 0;
 *  Configures the value to be loaded to UNIT1, high 20 bits.
 */
#define SYSTIMER_TIMER_UNIT1_LOAD_HI    0x000FFFFFU
#define SYSTIMER_TIMER_UNIT1_LOAD_HI_M  (SYSTIMER_TIMER_UNIT1_LOAD_HI_V << SYSTIMER_TIMER_UNIT1_LOAD_HI_S)
#define SYSTIMER_TIMER_UNIT1_LOAD_HI_V  0x000FFFFFU
#define SYSTIMER_TIMER_UNIT1_LOAD_HI_S  0

/** SYSTIMER_UNIT1_LOAD_LO_REG register
 *  Low 32 bits to be loaded to UNIT1
 */
#define SYSTIMER_UNIT1_LOAD_LO_REG (DR_REG_SYSTIMER_BASE + 0x18)
/** SYSTIMER_TIMER_UNIT1_LOAD_LO : R/W; bitpos: [31:0]; default: 0;
 *  Configures the value to be loaded to UNIT1, low 32 bits.
 */
#define SYSTIMER_TIMER_UNIT1_LOAD_LO    0xFFFFFFFFU
#define SYSTIMER_TIMER_UNIT1_LOAD_LO_M  (SYSTIMER_TIMER_UNIT1_LOAD_LO_V << SYSTIMER_TIMER_UNIT1_LOAD_LO_S)
#define SYSTIMER_TIMER_UNIT1_LOAD_LO_V  0xFFFFFFFFU
#define SYSTIMER_TIMER_UNIT1_LOAD_LO_S  0

/** SYSTIMER_TARGET0_HI_REG register
 *  Alarm value to be loaded to COMP0, high 20 bits
 */
#define SYSTIMER_TARGET0_HI_REG (DR_REG_SYSTIMER_BASE + 0x1c)
/** SYSTIMER_TIMER_TARGET0_HI : R/W; bitpos: [19:0]; default: 0;
 *  Configures the alarm value to be loaded to COMP0, high 20 bits.
 */
#define SYSTIMER_TIMER_TARGET0_HI    0x000FFFFFU
#define SYSTIMER_TIMER_TARGET0_HI_M  (SYSTIMER_TIMER_TARGET0_HI_V << SYSTIMER_TIMER_TARGET0_HI_S)
#define SYSTIMER_TIMER_TARGET0_HI_V  0x000FFFFFU
#define SYSTIMER_TIMER_TARGET0_HI_S  0

/** SYSTIMER_TARGET0_LO_REG register
 *  Alarm value to be loaded to COMP0, low 32 bits
 */
#define SYSTIMER_TARGET0_LO_REG (DR_REG_SYSTIMER_BASE + 0x20)
/** SYSTIMER_TIMER_TARGET0_LO : R/W; bitpos: [31:0]; default: 0;
 *  Configures the alarm value to be loaded to COMP0, low 32 bits.
 */
#define SYSTIMER_TIMER_TARGET0_LO    0xFFFFFFFFU
#define SYSTIMER_TIMER_TARGET0_LO_M  (SYSTIMER_TIMER_TARGET0_LO_V << SYSTIMER_TIMER_TARGET0_LO_S)
#define SYSTIMER_TIMER_TARGET0_LO_V  0xFFFFFFFFU
#define SYSTIMER_TIMER_TARGET0_LO_S  0

/** SYSTIMER_TARGET1_HI_REG register
 *  Alarm value to be loaded to COMP1, high 20 bits
 */
#define SYSTIMER_TARGET1_HI_REG (DR_REG_SYSTIMER_BASE + 0x24)
/** SYSTIMER_TIMER_TARGET1_HI : R/W; bitpos: [19:0]; default: 0;
 *  Configures the alarm value to be loaded to COMP1, high 20 bits.
 */
#define SYSTIMER_TIMER_TARGET1_HI    0x000FFFFFU
#define SYSTIMER_TIMER_TARGET1_HI_M  (SYSTIMER_TIMER_TARGET1_HI_V << SYSTIMER_TIMER_TARGET1_HI_S)
#define SYSTIMER_TIMER_TARGET1_HI_V  0x000FFFFFU
#define SYSTIMER_TIMER_TARGET1_HI_S  0

/** SYSTIMER_TARGET1_LO_REG register
 *  Alarm value to be loaded to COMP1, low 32 bits
 */
#define SYSTIMER_TARGET1_LO_REG (DR_REG_SYSTIMER_BASE + 0x28)
/** SYSTIMER_TIMER_TARGET1_LO : R/W; bitpos: [31:0]; default: 0;
 *  Configures the alarm value to be loaded to COMP1, low 32 bits.
 */
#define SYSTIMER_TIMER_TARGET1_LO    0xFFFFFFFFU
#define SYSTIMER_TIMER_TARGET1_LO_M  (SYSTIMER_TIMER_TARGET1_LO_V << SYSTIMER_TIMER_TARGET1_LO_S)
#define SYSTIMER_TIMER_TARGET1_LO_V  0xFFFFFFFFU
#define SYSTIMER_TIMER_TARGET1_LO_S  0

/** SYSTIMER_TARGET2_HI_REG register
 *  Alarm value to be loaded to COMP2, high 20 bits
 */
#define SYSTIMER_TARGET2_HI_REG (DR_REG_SYSTIMER_BASE + 0x2c)
/** SYSTIMER_TIMER_TARGET2_HI : R/W; bitpos: [19:0]; default: 0;
 *  Configures the alarm value to be loaded to COMP2, high 20 bits.
 */
#define SYSTIMER_TIMER_TARGET2_HI    0x000FFFFFU
#define SYSTIMER_TIMER_TARGET2_HI_M  (SYSTIMER_TIMER_TARGET2_HI_V << SYSTIMER_TIMER_TARGET2_HI_S)
#define SYSTIMER_TIMER_TARGET2_HI_V  0x000FFFFFU
#define SYSTIMER_TIMER_TARGET2_HI_S  0

/** SYSTIMER_TARGET2_LO_REG register
 *  Alarm value to be loaded to COMP2, low 32 bits
 */
#define SYSTIMER_TARGET2_LO_REG (DR_REG_SYSTIMER_BASE + 0x30)
/** SYSTIMER_TIMER_TARGET2_LO : R/W; bitpos: [31:0]; default: 0;
 *  Configures the alarm value to be loaded to COMP2, low 32 bits.
 */
#define SYSTIMER_TIMER_TARGET2_LO    0xFFFFFFFFU
#define SYSTIMER_TIMER_TARGET2_LO_M  (SYSTIMER_TIMER_TARGET2_LO_V << SYSTIMER_TIMER_TARGET2_LO_S)
#define SYSTIMER_TIMER_TARGET2_LO_V  0xFFFFFFFFU
#define SYSTIMER_TIMER_TARGET2_LO_S  0

/** SYSTIMER_TARGET0_CONF_REG register
 *  Configure COMP0 alarm mode
 */
#define SYSTIMER_TARGET0_CONF_REG (DR_REG_SYSTIMER_BASE + 0x34)
/** SYSTIMER_TARGET0_PERIOD : R/W; bitpos: [25:0]; default: 0;
 *  Configures COMP0 alarm period.
 */
#define SYSTIMER_TARGET0_PERIOD    0x03FFFFFFU
#define SYSTIMER_TARGET0_PERIOD_M  (SYSTIMER_TARGET0_PERIOD_V << SYSTIMER_TARGET0_PERIOD_S)
#define SYSTIMER_TARGET0_PERIOD_V  0x03FFFFFFU
#define SYSTIMER_TARGET0_PERIOD_S  0
/** SYSTIMER_TARGET0_PERIOD_MODE : R/W; bitpos: [30]; default: 0;
 *  Selects the two alarm modes for COMP0.
 *  0: Target mode
 *  1: Period mode
 */
#define SYSTIMER_TARGET0_PERIOD_MODE    (BIT(30))
#define SYSTIMER_TARGET0_PERIOD_MODE_M  (SYSTIMER_TARGET0_PERIOD_MODE_V << SYSTIMER_TARGET0_PERIOD_MODE_S)
#define SYSTIMER_TARGET0_PERIOD_MODE_V  0x00000001U
#define SYSTIMER_TARGET0_PERIOD_MODE_S  30
/** SYSTIMER_TARGET0_TIMER_UNIT_SEL : R/W; bitpos: [31]; default: 0;
 *  Chooses the counter value for comparison with COMP0.
 *  0: Use the count value from UNIT$0
 *  1: Use the count value from UNIT$1
 */
#define SYSTIMER_TARGET0_TIMER_UNIT_SEL    (BIT(31))
#define SYSTIMER_TARGET0_TIMER_UNIT_SEL_M  (SYSTIMER_TARGET0_TIMER_UNIT_SEL_V << SYSTIMER_TARGET0_TIMER_UNIT_SEL_S)
#define SYSTIMER_TARGET0_TIMER_UNIT_SEL_V  0x00000001U
#define SYSTIMER_TARGET0_TIMER_UNIT_SEL_S  31

/** SYSTIMER_TARGET1_CONF_REG register
 *  Configure COMP1 alarm mode
 */
#define SYSTIMER_TARGET1_CONF_REG (DR_REG_SYSTIMER_BASE + 0x38)
/** SYSTIMER_TARGET1_PERIOD : R/W; bitpos: [25:0]; default: 0;
 *  Configures COMP1 alarm period.
 */
#define SYSTIMER_TARGET1_PERIOD    0x03FFFFFFU
#define SYSTIMER_TARGET1_PERIOD_M  (SYSTIMER_TARGET1_PERIOD_V << SYSTIMER_TARGET1_PERIOD_S)
#define SYSTIMER_TARGET1_PERIOD_V  0x03FFFFFFU
#define SYSTIMER_TARGET1_PERIOD_S  0
/** SYSTIMER_TARGET1_PERIOD_MODE : R/W; bitpos: [30]; default: 0;
 *  Selects the two alarm modes for COMP1. See details in SYSTIMER_TARGET0_PERIOD_MODE.
 */
#define SYSTIMER_TARGET1_PERIOD_MODE    (BIT(30))
#define SYSTIMER_TARGET1_PERIOD_MODE_M  (SYSTIMER_TARGET1_PERIOD_MODE_V << SYSTIMER_TARGET1_PERIOD_MODE_S)
#define SYSTIMER_TARGET1_PERIOD_MODE_V  0x00000001U
#define SYSTIMER_TARGET1_PERIOD_MODE_S  30
/** SYSTIMER_TARGET1_TIMER_UNIT_SEL : R/W; bitpos: [31]; default: 0;
 *  Chooses the counter value for comparison with COMP1. See details in
 *  SYSTIMER_TARGET0_TIMER_UNIT_SEL.
 */
#define SYSTIMER_TARGET1_TIMER_UNIT_SEL    (BIT(31))
#define SYSTIMER_TARGET1_TIMER_UNIT_SEL_M  (SYSTIMER_TARGET1_TIMER_UNIT_SEL_V << SYSTIMER_TARGET1_TIMER_UNIT_SEL_S)
#define SYSTIMER_TARGET1_TIMER_UNIT_SEL_V  0x00000001U
#define SYSTIMER_TARGET1_TIMER_UNIT_SEL_S  31

/** SYSTIMER_TARGET2_CONF_REG register
 *  Configure COMP2 alarm mode
 */
#define SYSTIMER_TARGET2_CONF_REG (DR_REG_SYSTIMER_BASE + 0x3c)
/** SYSTIMER_TARGET2_PERIOD : R/W; bitpos: [25:0]; default: 0;
 *  Configures COMP2 alarm period.
 */
#define SYSTIMER_TARGET2_PERIOD    0x03FFFFFFU
#define SYSTIMER_TARGET2_PERIOD_M  (SYSTIMER_TARGET2_PERIOD_V << SYSTIMER_TARGET2_PERIOD_S)
#define SYSTIMER_TARGET2_PERIOD_V  0x03FFFFFFU
#define SYSTIMER_TARGET2_PERIOD_S  0
/** SYSTIMER_TARGET2_PERIOD_MODE : R/W; bitpos: [30]; default: 0;
 *  Configures Configures the two alarm modes for COMP2. See details in
 *  SYSTIMER_TARGET0_PERIOD_MODE.
 */
#define SYSTIMER_TARGET2_PERIOD_MODE    (BIT(30))
#define SYSTIMER_TARGET2_PERIOD_MODE_M  (SYSTIMER_TARGET2_PERIOD_MODE_V << SYSTIMER_TARGET2_PERIOD_MODE_S)
#define SYSTIMER_TARGET2_PERIOD_MODE_V  0x00000001U
#define SYSTIMER_TARGET2_PERIOD_MODE_S  30
/** SYSTIMER_TARGET2_TIMER_UNIT_SEL : R/W; bitpos: [31]; default: 0;
 *  Chooses the counter value for comparison with COMP2. See details in
 *  SYSTIMER_TARGET0_TIMER_UNIT_SEL.
 */
#define SYSTIMER_TARGET2_TIMER_UNIT_SEL    (BIT(31))
#define SYSTIMER_TARGET2_TIMER_UNIT_SEL_M  (SYSTIMER_TARGET2_TIMER_UNIT_SEL_V << SYSTIMER_TARGET2_TIMER_UNIT_SEL_S)
#define SYSTIMER_TARGET2_TIMER_UNIT_SEL_V  0x00000001U
#define SYSTIMER_TARGET2_TIMER_UNIT_SEL_S  31

/** SYSTIMER_UNIT0_VALUE_HI_REG register
 *  UNIT0 value, high 20 bits
 */
#define SYSTIMER_UNIT0_VALUE_HI_REG (DR_REG_SYSTIMER_BASE + 0x40)
/** SYSTIMER_TIMER_UNIT0_VALUE_HI : RO; bitpos: [19:0]; default: 0;
 *  Represents UNIT0 read value, high 20 bits.
 */
#define SYSTIMER_TIMER_UNIT0_VALUE_HI    0x000FFFFFU
#define SYSTIMER_TIMER_UNIT0_VALUE_HI_M  (SYSTIMER_TIMER_UNIT0_VALUE_HI_V << SYSTIMER_TIMER_UNIT0_VALUE_HI_S)
#define SYSTIMER_TIMER_UNIT0_VALUE_HI_V  0x000FFFFFU
#define SYSTIMER_TIMER_UNIT0_VALUE_HI_S  0

/** SYSTIMER_UNIT0_VALUE_LO_REG register
 *  UNIT0 value, low 32 bits
 */
#define SYSTIMER_UNIT0_VALUE_LO_REG (DR_REG_SYSTIMER_BASE + 0x44)
/** SYSTIMER_TIMER_UNIT0_VALUE_LO : RO; bitpos: [31:0]; default: 0;
 *  Represents UNIT0 read value, low 32 bits.
 */
#define SYSTIMER_TIMER_UNIT0_VALUE_LO    0xFFFFFFFFU
#define SYSTIMER_TIMER_UNIT0_VALUE_LO_M  (SYSTIMER_TIMER_UNIT0_VALUE_LO_V << SYSTIMER_TIMER_UNIT0_VALUE_LO_S)
#define SYSTIMER_TIMER_UNIT0_VALUE_LO_V  0xFFFFFFFFU
#define SYSTIMER_TIMER_UNIT0_VALUE_LO_S  0

/** SYSTIMER_UNIT1_VALUE_HI_REG register
 *  UNIT1 value, high 20 bits
 */
#define SYSTIMER_UNIT1_VALUE_HI_REG (DR_REG_SYSTIMER_BASE + 0x48)
/** SYSTIMER_TIMER_UNIT1_VALUE_HI : RO; bitpos: [19:0]; default: 0;
 *  Represents UNIT1 read value, high 20 bits.
 */
#define SYSTIMER_TIMER_UNIT1_VALUE_HI    0x000FFFFFU
#define SYSTIMER_TIMER_UNIT1_VALUE_HI_M  (SYSTIMER_TIMER_UNIT1_VALUE_HI_V << SYSTIMER_TIMER_UNIT1_VALUE_HI_S)
#define SYSTIMER_TIMER_UNIT1_VALUE_HI_V  0x000FFFFFU
#define SYSTIMER_TIMER_UNIT1_VALUE_HI_S  0

/** SYSTIMER_UNIT1_VALUE_LO_REG register
 *  UNIT1 value, low 32 bits
 */
#define SYSTIMER_UNIT1_VALUE_LO_REG (DR_REG_SYSTIMER_BASE + 0x4c)
/** SYSTIMER_TIMER_UNIT1_VALUE_LO : RO; bitpos: [31:0]; default: 0;
 *  Represents UNIT1 read value, low 32 bits.
 */
#define SYSTIMER_TIMER_UNIT1_VALUE_LO    0xFFFFFFFFU
#define SYSTIMER_TIMER_UNIT1_VALUE_LO_M  (SYSTIMER_TIMER_UNIT1_VALUE_LO_V << SYSTIMER_TIMER_UNIT1_VALUE_LO_S)
#define SYSTIMER_TIMER_UNIT1_VALUE_LO_V  0xFFFFFFFFU
#define SYSTIMER_TIMER_UNIT1_VALUE_LO_S  0

/** SYSTIMER_COMP0_LOAD_REG register
 *  COMP0 synchronization register
 */
#define SYSTIMER_COMP0_LOAD_REG (DR_REG_SYSTIMER_BASE + 0x50)
/** SYSTIMER_TIMER_COMP0_LOAD : WT; bitpos: [0]; default: 0;
 *  Configures whether or not to enable COMP0 synchronization, i.e., reload the alarm
 *  value/period to COMP0.
 *  0: No effect
 *  1: Enable COMP0 synchronization
 */
#define SYSTIMER_TIMER_COMP0_LOAD    (BIT(0))
#define SYSTIMER_TIMER_COMP0_LOAD_M  (SYSTIMER_TIMER_COMP0_LOAD_V << SYSTIMER_TIMER_COMP0_LOAD_S)
#define SYSTIMER_TIMER_COMP0_LOAD_V  0x00000001U
#define SYSTIMER_TIMER_COMP0_LOAD_S  0

/** SYSTIMER_COMP1_LOAD_REG register
 *  COMP1 synchronization register
 */
#define SYSTIMER_COMP1_LOAD_REG (DR_REG_SYSTIMER_BASE + 0x54)
/** SYSTIMER_TIMER_COMP1_LOAD : WT; bitpos: [0]; default: 0;
 *  Configures whether or not to enable COMP1 synchronization, i.e., reload the alarm
 *  value/period to COMP1.
 *  0: No effect
 *  1: Enable COMP1 synchronization
 */
#define SYSTIMER_TIMER_COMP1_LOAD    (BIT(0))
#define SYSTIMER_TIMER_COMP1_LOAD_M  (SYSTIMER_TIMER_COMP1_LOAD_V << SYSTIMER_TIMER_COMP1_LOAD_S)
#define SYSTIMER_TIMER_COMP1_LOAD_V  0x00000001U
#define SYSTIMER_TIMER_COMP1_LOAD_S  0

/** SYSTIMER_COMP2_LOAD_REG register
 *  COMP2 synchronization register
 */
#define SYSTIMER_COMP2_LOAD_REG (DR_REG_SYSTIMER_BASE + 0x58)
/** SYSTIMER_TIMER_COMP2_LOAD : WT; bitpos: [0]; default: 0;
 *  Configures whether or not to enable COMP2 synchronization, i.e., reload the alarm
 *  value/period to COMP2.
 *  0: No effect
 *  1: Enable COMP2 synchronization
 */
#define SYSTIMER_TIMER_COMP2_LOAD    (BIT(0))
#define SYSTIMER_TIMER_COMP2_LOAD_M  (SYSTIMER_TIMER_COMP2_LOAD_V << SYSTIMER_TIMER_COMP2_LOAD_S)
#define SYSTIMER_TIMER_COMP2_LOAD_V  0x00000001U
#define SYSTIMER_TIMER_COMP2_LOAD_S  0

/** SYSTIMER_UNIT0_LOAD_REG register
 *  UNIT0 synchronization register
 */
#define SYSTIMER_UNIT0_LOAD_REG (DR_REG_SYSTIMER_BASE + 0x5c)
/** SYSTIMER_TIMER_UNIT0_LOAD : WT; bitpos: [0]; default: 0;
 *  Configures whether or not to reload the value of UNIT0, i.e., reloads the values of
 *  SYSTIMER_TIMER_UNIT0_VALUE_HI and SYSTIMER_TIMER_UNIT0_VALUE_LO to UNIT0.
 *  0: No effect
 *  1: Reload the value of UNIT0
 */
#define SYSTIMER_TIMER_UNIT0_LOAD    (BIT(0))
#define SYSTIMER_TIMER_UNIT0_LOAD_M  (SYSTIMER_TIMER_UNIT0_LOAD_V << SYSTIMER_TIMER_UNIT0_LOAD_S)
#define SYSTIMER_TIMER_UNIT0_LOAD_V  0x00000001U
#define SYSTIMER_TIMER_UNIT0_LOAD_S  0

/** SYSTIMER_UNIT1_LOAD_REG register
 *  UNIT1 synchronization register
 */
#define SYSTIMER_UNIT1_LOAD_REG (DR_REG_SYSTIMER_BASE + 0x60)
/** SYSTIMER_TIMER_UNIT1_LOAD : WT; bitpos: [0]; default: 0;
 *  Configures whether or not to reload the value of UNIT1, i.e., reload the values of
 *  SYSTIMER_TIMER_UNIT1_VALUE_HI and SYSTIMER_TIMER_UNIT1_VALUE_LO to UNIT1.
 *  0: No effect
 *  1: Reload the value of UNIT1
 */
#define SYSTIMER_TIMER_UNIT1_LOAD    (BIT(0))
#define SYSTIMER_TIMER_UNIT1_LOAD_M  (SYSTIMER_TIMER_UNIT1_LOAD_V << SYSTIMER_TIMER_UNIT1_LOAD_S)
#define SYSTIMER_TIMER_UNIT1_LOAD_V  0x00000001U
#define SYSTIMER_TIMER_UNIT1_LOAD_S  0

/** SYSTIMER_INT_ENA_REG register
 *  Interrupt enable register of system timer
 */
#define SYSTIMER_INT_ENA_REG (DR_REG_SYSTIMER_BASE + 0x64)
/** SYSTIMER_TARGET0_INT_ENA : R/W; bitpos: [0]; default: 0;
 *  Write 1 to enable SYSTIMER_TARGET0_INT.
 */
#define SYSTIMER_TARGET0_INT_ENA    (BIT(0))
#define SYSTIMER_TARGET0_INT_ENA_M  (SYSTIMER_TARGET0_INT_ENA_V << SYSTIMER_TARGET0_INT_ENA_S)
#define SYSTIMER_TARGET0_INT_ENA_V  0x00000001U
#define SYSTIMER_TARGET0_INT_ENA_S  0
/** SYSTIMER_TARGET1_INT_ENA : R/W; bitpos: [1]; default: 0;
 *  Write 1 to enable SYSTIMER_TARGET1_INT.
 */
#define SYSTIMER_TARGET1_INT_ENA    (BIT(1))
#define SYSTIMER_TARGET1_INT_ENA_M  (SYSTIMER_TARGET1_INT_ENA_V << SYSTIMER_TARGET1_INT_ENA_S)
#define SYSTIMER_TARGET1_INT_ENA_V  0x00000001U
#define SYSTIMER_TARGET1_INT_ENA_S  1
/** SYSTIMER_TARGET2_INT_ENA : R/W; bitpos: [2]; default: 0;
 *  Write 1 to enable SYSTIMER_TARGET2_INT.
 */
#define SYSTIMER_TARGET2_INT_ENA    (BIT(2))
#define SYSTIMER_TARGET2_INT_ENA_M  (SYSTIMER_TARGET2_INT_ENA_V << SYSTIMER_TARGET2_INT_ENA_S)
#define SYSTIMER_TARGET2_INT_ENA_V  0x00000001U
#define SYSTIMER_TARGET2_INT_ENA_S  2

/** SYSTIMER_INT_RAW_REG register
 *  Interrupt raw register of system timer
 */
#define SYSTIMER_INT_RAW_REG (DR_REG_SYSTIMER_BASE + 0x68)
/** SYSTIMER_TARGET0_INT_RAW : R/WTC/SS; bitpos: [0]; default: 0;
 *  The raw interrupt status of SYSTIMER_TARGET0_INT.
 */
#define SYSTIMER_TARGET0_INT_RAW    (BIT(0))
#define SYSTIMER_TARGET0_INT_RAW_M  (SYSTIMER_TARGET0_INT_RAW_V << SYSTIMER_TARGET0_INT_RAW_S)
#define SYSTIMER_TARGET0_INT_RAW_V  0x00000001U
#define SYSTIMER_TARGET0_INT_RAW_S  0
/** SYSTIMER_TARGET1_INT_RAW : R/WTC/SS; bitpos: [1]; default: 0;
 *  The raw interrupt status of SYSTIMER_TARGET1_INT.
 */
#define SYSTIMER_TARGET1_INT_RAW    (BIT(1))
#define SYSTIMER_TARGET1_INT_RAW_M  (SYSTIMER_TARGET1_INT_RAW_V << SYSTIMER_TARGET1_INT_RAW_S)
#define SYSTIMER_TARGET1_INT_RAW_V  0x00000001U
#define SYSTIMER_TARGET1_INT_RAW_S  1
/** SYSTIMER_TARGET2_INT_RAW : R/WTC/SS; bitpos: [2]; default: 0;
 *  The raw interrupt status of SYSTIMER_TARGET2_INT.
 */
#define SYSTIMER_TARGET2_INT_RAW    (BIT(2))
#define SYSTIMER_TARGET2_INT_RAW_M  (SYSTIMER_TARGET2_INT_RAW_V << SYSTIMER_TARGET2_INT_RAW_S)
#define SYSTIMER_TARGET2_INT_RAW_V  0x00000001U
#define SYSTIMER_TARGET2_INT_RAW_S  2

/** SYSTIMER_INT_CLR_REG register
 *  Interrupt clear register of system timer
 */
#define SYSTIMER_INT_CLR_REG (DR_REG_SYSTIMER_BASE + 0x6c)
/** SYSTIMER_TARGET0_INT_CLR : WT; bitpos: [0]; default: 0;
 *  Write 1 to clear SYSTIMER_TARGET0_INT.
 */
#define SYSTIMER_TARGET0_INT_CLR    (BIT(0))
#define SYSTIMER_TARGET0_INT_CLR_M  (SYSTIMER_TARGET0_INT_CLR_V << SYSTIMER_TARGET0_INT_CLR_S)
#define SYSTIMER_TARGET0_INT_CLR_V  0x00000001U
#define SYSTIMER_TARGET0_INT_CLR_S  0
/** SYSTIMER_TARGET1_INT_CLR : WT; bitpos: [1]; default: 0;
 *  Write 1 to clear SYSTIMER_TARGET1_INT.
 */
#define SYSTIMER_TARGET1_INT_CLR    (BIT(1))
#define SYSTIMER_TARGET1_INT_CLR_M  (SYSTIMER_TARGET1_INT_CLR_V << SYSTIMER_TARGET1_INT_CLR_S)
#define SYSTIMER_TARGET1_INT_CLR_V  0x00000001U
#define SYSTIMER_TARGET1_INT_CLR_S  1
/** SYSTIMER_TARGET2_INT_CLR : WT; bitpos: [2]; default: 0;
 *  Write 1 to clear SYSTIMER_TARGET2_INT.
 */
#define SYSTIMER_TARGET2_INT_CLR    (BIT(2))
#define SYSTIMER_TARGET2_INT_CLR_M  (SYSTIMER_TARGET2_INT_CLR_V << SYSTIMER_TARGET2_INT_CLR_S)
#define SYSTIMER_TARGET2_INT_CLR_V  0x00000001U
#define SYSTIMER_TARGET2_INT_CLR_S  2

/** SYSTIMER_INT_ST_REG register
 *  Interrupt status register of system timer
 */
#define SYSTIMER_INT_ST_REG (DR_REG_SYSTIMER_BASE + 0x70)
/** SYSTIMER_TARGET0_INT_ST : RO; bitpos: [0]; default: 0;
 *  The interrupt status of SYSTIMER_TARGET0_INT.
 */
#define SYSTIMER_TARGET0_INT_ST    (BIT(0))
#define SYSTIMER_TARGET0_INT_ST_M  (SYSTIMER_TARGET0_INT_ST_V << SYSTIMER_TARGET0_INT_ST_S)
#define SYSTIMER_TARGET0_INT_ST_V  0x00000001U
#define SYSTIMER_TARGET0_INT_ST_S  0
/** SYSTIMER_TARGET1_INT_ST : RO; bitpos: [1]; default: 0;
 *  The interrupt status of SYSTIMER_TARGET1_INT.
 */
#define SYSTIMER_TARGET1_INT_ST    (BIT(1))
#define SYSTIMER_TARGET1_INT_ST_M  (SYSTIMER_TARGET1_INT_ST_V << SYSTIMER_TARGET1_INT_ST_S)
#define SYSTIMER_TARGET1_INT_ST_V  0x00000001U
#define SYSTIMER_TARGET1_INT_ST_S  1
/** SYSTIMER_TARGET2_INT_ST : RO; bitpos: [2]; default: 0;
 *  The interrupt status of SYSTIMER_TARGET2_INT.
 */
#define SYSTIMER_TARGET2_INT_ST    (BIT(2))
#define SYSTIMER_TARGET2_INT_ST_M  (SYSTIMER_TARGET2_INT_ST_V << SYSTIMER_TARGET2_INT_ST_S)
#define SYSTIMER_TARGET2_INT_ST_V  0x00000001U
#define SYSTIMER_TARGET2_INT_ST_S  2

/** SYSTIMER_REAL_TARGET0_LO_REG register
 *  Actual target value of COMP0, low 32 bits
 */
#define SYSTIMER_REAL_TARGET0_LO_REG (DR_REG_SYSTIMER_BASE + 0x74)
/** SYSTIMER_TARGET0_LO_RO : RO; bitpos: [31:0]; default: 0;
 *  Represents the actual target value of COMP0, low 32 bits.
 */
#define SYSTIMER_TARGET0_LO_RO    0xFFFFFFFFU
#define SYSTIMER_TARGET0_LO_RO_M  (SYSTIMER_TARGET0_LO_RO_V << SYSTIMER_TARGET0_LO_RO_S)
#define SYSTIMER_TARGET0_LO_RO_V  0xFFFFFFFFU
#define SYSTIMER_TARGET0_LO_RO_S  0

/** SYSTIMER_REAL_TARGET0_HI_REG register
 *  Actual target value of COMP0, high 20 bits
 */
#define SYSTIMER_REAL_TARGET0_HI_REG (DR_REG_SYSTIMER_BASE + 0x78)
/** SYSTIMER_TARGET0_HI_RO : RO; bitpos: [19:0]; default: 0;
 *  Represents the actual target value of COMP0, high 20 bits.
 */
#define SYSTIMER_TARGET0_HI_RO    0x000FFFFFU
#define SYSTIMER_TARGET0_HI_RO_M  (SYSTIMER_TARGET0_HI_RO_V << SYSTIMER_TARGET0_HI_RO_S)
#define SYSTIMER_TARGET0_HI_RO_V  0x000FFFFFU
#define SYSTIMER_TARGET0_HI_RO_S  0

/** SYSTIMER_REAL_TARGET1_LO_REG register
 *  Actual target value of COMP1, low 32 bits
 */
#define SYSTIMER_REAL_TARGET1_LO_REG (DR_REG_SYSTIMER_BASE + 0x7c)
/** SYSTIMER_TARGET1_LO_RO : RO; bitpos: [31:0]; default: 0;
 *  Represents the actual target value of COMP1, low 32 bits.
 */
#define SYSTIMER_TARGET1_LO_RO    0xFFFFFFFFU
#define SYSTIMER_TARGET1_LO_RO_M  (SYSTIMER_TARGET1_LO_RO_V << SYSTIMER_TARGET1_LO_RO_S)
#define SYSTIMER_TARGET1_LO_RO_V  0xFFFFFFFFU
#define SYSTIMER_TARGET1_LO_RO_S  0

/** SYSTIMER_REAL_TARGET1_HI_REG register
 *  Actual target value of COMP1, high 20 bits
 */
#define SYSTIMER_REAL_TARGET1_HI_REG (DR_REG_SYSTIMER_BASE + 0x80)
/** SYSTIMER_TARGET1_HI_RO : RO; bitpos: [19:0]; default: 0;
 *  Represents the actual target value of COMP1, high 20 bits.
 */
#define SYSTIMER_TARGET1_HI_RO    0x000FFFFFU
#define SYSTIMER_TARGET1_HI_RO_M  (SYSTIMER_TARGET1_HI_RO_V << SYSTIMER_TARGET1_HI_RO_S)
#define SYSTIMER_TARGET1_HI_RO_V  0x000FFFFFU
#define SYSTIMER_TARGET1_HI_RO_S  0

/** SYSTIMER_REAL_TARGET2_LO_REG register
 *  Actual target value of COMP2, low 32 bits
 */
#define SYSTIMER_REAL_TARGET2_LO_REG (DR_REG_SYSTIMER_BASE + 0x84)
/** SYSTIMER_TARGET2_LO_RO : RO; bitpos: [31:0]; default: 0;
 *  Represents the actual target value of COMP2, low 32 bits.
 */
#define SYSTIMER_TARGET2_LO_RO    0xFFFFFFFFU
#define SYSTIMER_TARGET2_LO_RO_M  (SYSTIMER_TARGET2_LO_RO_V << SYSTIMER_TARGET2_LO_RO_S)
#define SYSTIMER_TARGET2_LO_RO_V  0xFFFFFFFFU
#define SYSTIMER_TARGET2_LO_RO_S  0

/** SYSTIMER_REAL_TARGET2_HI_REG register
 *  Actual target value of COMP2, high 20 bits
 */
#define SYSTIMER_REAL_TARGET2_HI_REG (DR_REG_SYSTIMER_BASE + 0x88)
/** SYSTIMER_TARGET2_HI_RO : RO; bitpos: [19:0]; default: 0;
 *  Represents the actual target value of COMP2, high 20 bits.
 */
#define SYSTIMER_TARGET2_HI_RO    0x000FFFFFU
#define SYSTIMER_TARGET2_HI_RO_M  (SYSTIMER_TARGET2_HI_RO_V << SYSTIMER_TARGET2_HI_RO_S)
#define SYSTIMER_TARGET2_HI_RO_V  0x000FFFFFU
#define SYSTIMER_TARGET2_HI_RO_S  0

/** SYSTIMER_DATE_REG register
 *  Version control register
 */
#define SYSTIMER_DATE_REG (DR_REG_SYSTIMER_BASE + 0xfc)
/** SYSTIMER_DATE : R/W; bitpos: [31:0]; default: 36774432;
 *  Version control register.
 */
#define SYSTIMER_DATE    0xFFFFFFFFU
#define SYSTIMER_DATE_M  (SYSTIMER_DATE_V << SYSTIMER_DATE_S)
#define SYSTIMER_DATE_V  0xFFFFFFFFU
#define SYSTIMER_DATE_S  0

#ifdef __cplusplus
}
#endif
