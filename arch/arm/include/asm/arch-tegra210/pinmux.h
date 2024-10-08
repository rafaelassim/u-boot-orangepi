/* SPDX-License-Identifier: GPL-2.0+ */
/*
 * Copyright (c) 2015, NVIDIA CORPORATION. All rights reserved.
 */

#ifndef _TEGRA210_PINMUX_H_
#define _TEGRA210_PINMUX_H_

enum pmux_pingrp {
	PMUX_PINGRP_SDMMC1_CLK_PM0,
	PMUX_PINGRP_SDMMC1_CMD_PM1,
	PMUX_PINGRP_SDMMC1_DAT3_PM2,
	PMUX_PINGRP_SDMMC1_DAT2_PM3,
	PMUX_PINGRP_SDMMC1_DAT1_PM4,
	PMUX_PINGRP_SDMMC1_DAT0_PM5,
	PMUX_PINGRP_SDMMC3_CLK_PP0 = (0x1c / 4),
	PMUX_PINGRP_SDMMC3_CMD_PP1,
	PMUX_PINGRP_SDMMC3_DAT0_PP5,
	PMUX_PINGRP_SDMMC3_DAT1_PP4,
	PMUX_PINGRP_SDMMC3_DAT2_PP3,
	PMUX_PINGRP_SDMMC3_DAT3_PP2,
	PMUX_PINGRP_PEX_L0_RST_N_PA0 = (0x38 / 4),
	PMUX_PINGRP_PEX_L0_CLKREQ_N_PA1,
	PMUX_PINGRP_PEX_WAKE_N_PA2,
	PMUX_PINGRP_PEX_L1_RST_N_PA3,
	PMUX_PINGRP_PEX_L1_CLKREQ_N_PA4,
	PMUX_PINGRP_SATA_LED_ACTIVE_PA5,
	PMUX_PINGRP_SPI1_MOSI_PC0,
	PMUX_PINGRP_SPI1_MISO_PC1,
	PMUX_PINGRP_SPI1_SCK_PC2,
	PMUX_PINGRP_SPI1_CS0_PC3,
	PMUX_PINGRP_SPI1_CS1_PC4,
	PMUX_PINGRP_SPI2_MOSI_PB4,
	PMUX_PINGRP_SPI2_MISO_PB5,
	PMUX_PINGRP_SPI2_SCK_PB6,
	PMUX_PINGRP_SPI2_CS0_PB7,
	PMUX_PINGRP_SPI2_CS1_PDD0,
	PMUX_PINGRP_SPI4_MOSI_PC7,
	PMUX_PINGRP_SPI4_MISO_PD0,
	PMUX_PINGRP_SPI4_SCK_PC5,
	PMUX_PINGRP_SPI4_CS0_PC6,
	PMUX_PINGRP_QSPI_SCK_PEE0,
	PMUX_PINGRP_QSPI_CS_N_PEE1,
	PMUX_PINGRP_QSPI_IO0_PEE2,
	PMUX_PINGRP_QSPI_IO1_PEE3,
	PMUX_PINGRP_QSPI_IO2_PEE4,
	PMUX_PINGRP_QSPI_IO3_PEE5,
	PMUX_PINGRP_DMIC1_CLK_PE0 = (0xa4 / 4),
	PMUX_PINGRP_DMIC1_DAT_PE1,
	PMUX_PINGRP_DMIC2_CLK_PE2,
	PMUX_PINGRP_DMIC2_DAT_PE3,
	PMUX_PINGRP_DMIC3_CLK_PE4,
	PMUX_PINGRP_DMIC3_DAT_PE5,
	PMUX_PINGRP_GEN1_I2C_SCL_PJ1,
	PMUX_PINGRP_GEN1_I2C_SDA_PJ0,
	PMUX_PINGRP_GEN2_I2C_SCL_PJ2,
	PMUX_PINGRP_GEN2_I2C_SDA_PJ3,
	PMUX_PINGRP_GEN3_I2C_SCL_PF0,
	PMUX_PINGRP_GEN3_I2C_SDA_PF1,
	PMUX_PINGRP_CAM_I2C_SCL_PS2,
	PMUX_PINGRP_CAM_I2C_SDA_PS3,
	PMUX_PINGRP_PWR_I2C_SCL_PY3,
	PMUX_PINGRP_PWR_I2C_SDA_PY4,
	PMUX_PINGRP_UART1_TX_PU0,
	PMUX_PINGRP_UART1_RX_PU1,
	PMUX_PINGRP_UART1_RTS_PU2,
	PMUX_PINGRP_UART1_CTS_PU3,
	PMUX_PINGRP_UART2_TX_PG0,
	PMUX_PINGRP_UART2_RX_PG1,
	PMUX_PINGRP_UART2_RTS_PG2,
	PMUX_PINGRP_UART2_CTS_PG3,
	PMUX_PINGRP_UART3_TX_PD1,
	PMUX_PINGRP_UART3_RX_PD2,
	PMUX_PINGRP_UART3_RTS_PD3,
	PMUX_PINGRP_UART3_CTS_PD4,
	PMUX_PINGRP_UART4_TX_PI4,
	PMUX_PINGRP_UART4_RX_PI5,
	PMUX_PINGRP_UART4_RTS_PI6,
	PMUX_PINGRP_UART4_CTS_PI7,
	PMUX_PINGRP_DAP1_FS_PB0,
	PMUX_PINGRP_DAP1_DIN_PB1,
	PMUX_PINGRP_DAP1_DOUT_PB2,
	PMUX_PINGRP_DAP1_SCLK_PB3,
	PMUX_PINGRP_DAP2_FS_PAA0,
	PMUX_PINGRP_DAP2_DIN_PAA2,
	PMUX_PINGRP_DAP2_DOUT_PAA3,
	PMUX_PINGRP_DAP2_SCLK_PAA1,
	PMUX_PINGRP_DAP4_FS_PJ4,
	PMUX_PINGRP_DAP4_DIN_PJ5,
	PMUX_PINGRP_DAP4_DOUT_PJ6,
	PMUX_PINGRP_DAP4_SCLK_PJ7,
	PMUX_PINGRP_CAM1_MCLK_PS0,
	PMUX_PINGRP_CAM2_MCLK_PS1,
	PMUX_PINGRP_JTAG_RTCK,
	PMUX_PINGRP_CLK_32K_IN,
	PMUX_PINGRP_CLK_32K_OUT_PY5,
	PMUX_PINGRP_BATT_BCL,
	PMUX_PINGRP_CLK_REQ,
	PMUX_PINGRP_CPU_PWR_REQ,
	PMUX_PINGRP_PWR_INT_N,
	PMUX_PINGRP_SHUTDOWN,
	PMUX_PINGRP_CORE_PWR_REQ,
	PMUX_PINGRP_AUD_MCLK_PBB0,
	PMUX_PINGRP_DVFS_PWM_PBB1,
	PMUX_PINGRP_DVFS_CLK_PBB2,
	PMUX_PINGRP_GPIO_X1_AUD_PBB3,
	PMUX_PINGRP_GPIO_X3_AUD_PBB4,
	PMUX_PINGRP_PCC7,
	PMUX_PINGRP_HDMI_CEC_PCC0,
	PMUX_PINGRP_HDMI_INT_DP_HPD_PCC1,
	PMUX_PINGRP_SPDIF_OUT_PCC2,
	PMUX_PINGRP_SPDIF_IN_PCC3,
	PMUX_PINGRP_USB_VBUS_EN0_PCC4,
	PMUX_PINGRP_USB_VBUS_EN1_PCC5,
	PMUX_PINGRP_DP_HPD0_PCC6,
	PMUX_PINGRP_WIFI_EN_PH0,
	PMUX_PINGRP_WIFI_RST_PH1,
	PMUX_PINGRP_WIFI_WAKE_AP_PH2,
	PMUX_PINGRP_AP_WAKE_BT_PH3,
	PMUX_PINGRP_BT_RST_PH4,
	PMUX_PINGRP_BT_WAKE_AP_PH5,
	PMUX_PINGRP_AP_WAKE_NFC_PH7,
	PMUX_PINGRP_NFC_EN_PI0,
	PMUX_PINGRP_NFC_INT_PI1,
	PMUX_PINGRP_GPS_EN_PI2,
	PMUX_PINGRP_GPS_RST_PI3,
	PMUX_PINGRP_CAM_RST_PS4,
	PMUX_PINGRP_CAM_AF_EN_PS5,
	PMUX_PINGRP_CAM_FLASH_EN_PS6,
	PMUX_PINGRP_CAM1_PWDN_PS7,
	PMUX_PINGRP_CAM2_PWDN_PT0,
	PMUX_PINGRP_CAM1_STROBE_PT1,
	PMUX_PINGRP_LCD_TE_PY2,
	PMUX_PINGRP_LCD_BL_PWM_PV0,
	PMUX_PINGRP_LCD_BL_EN_PV1,
	PMUX_PINGRP_LCD_RST_PV2,
	PMUX_PINGRP_LCD_GPIO1_PV3,
	PMUX_PINGRP_LCD_GPIO2_PV4,
	PMUX_PINGRP_AP_READY_PV5,
	PMUX_PINGRP_TOUCH_RST_PV6,
	PMUX_PINGRP_TOUCH_CLK_PV7,
	PMUX_PINGRP_MODEM_WAKE_AP_PX0,
	PMUX_PINGRP_TOUCH_INT_PX1,
	PMUX_PINGRP_MOTION_INT_PX2,
	PMUX_PINGRP_ALS_PROX_INT_PX3,
	PMUX_PINGRP_TEMP_ALERT_PX4,
	PMUX_PINGRP_BUTTON_POWER_ON_PX5,
	PMUX_PINGRP_BUTTON_VOL_UP_PX6,
	PMUX_PINGRP_BUTTON_VOL_DOWN_PX7,
	PMUX_PINGRP_BUTTON_SLIDE_SW_PY0,
	PMUX_PINGRP_BUTTON_HOME_PY1,
	PMUX_PINGRP_PA6,
	PMUX_PINGRP_PE6,
	PMUX_PINGRP_PE7,
	PMUX_PINGRP_PH6,
	PMUX_PINGRP_PK0,
	PMUX_PINGRP_PK1,
	PMUX_PINGRP_PK2,
	PMUX_PINGRP_PK3,
	PMUX_PINGRP_PK4,
	PMUX_PINGRP_PK5,
	PMUX_PINGRP_PK6,
	PMUX_PINGRP_PK7,
	PMUX_PINGRP_PL0,
	PMUX_PINGRP_PL1,
	PMUX_PINGRP_PZ0,
	PMUX_PINGRP_PZ1,
	PMUX_PINGRP_PZ2,
	PMUX_PINGRP_PZ3,
	PMUX_PINGRP_PZ4,
	PMUX_PINGRP_PZ5,
	PMUX_PINGRP_COUNT,
};

enum pmux_drvgrp {
	PMUX_DRVGRP_ALS_PROX_INT = (0x10 / 4),
	PMUX_DRVGRP_AP_READY,
	PMUX_DRVGRP_AP_WAKE_BT,
	PMUX_DRVGRP_AP_WAKE_NFC,
	PMUX_DRVGRP_AUD_MCLK,
	PMUX_DRVGRP_BATT_BCL,
	PMUX_DRVGRP_BT_RST,
	PMUX_DRVGRP_BT_WAKE_AP,
	PMUX_DRVGRP_BUTTON_HOME,
	PMUX_DRVGRP_BUTTON_POWER_ON,
	PMUX_DRVGRP_BUTTON_SLIDE_SW,
	PMUX_DRVGRP_BUTTON_VOL_DOWN,
	PMUX_DRVGRP_BUTTON_VOL_UP,
	PMUX_DRVGRP_CAM1_MCLK,
	PMUX_DRVGRP_CAM1_PWDN,
	PMUX_DRVGRP_CAM1_STROBE,
	PMUX_DRVGRP_CAM2_MCLK,
	PMUX_DRVGRP_CAM2_PWDN,
	PMUX_DRVGRP_CAM_AF_EN,
	PMUX_DRVGRP_CAM_FLASH_EN,
	PMUX_DRVGRP_CAM_I2C_SCL,
	PMUX_DRVGRP_CAM_I2C_SDA,
	PMUX_DRVGRP_CAM_RST,
	PMUX_DRVGRP_CLK_32K_IN,
	PMUX_DRVGRP_CLK_32K_OUT,
	PMUX_DRVGRP_CLK_REQ,
	PMUX_DRVGRP_CORE_PWR_REQ,
	PMUX_DRVGRP_CPU_PWR_REQ,
	PMUX_DRVGRP_DAP1_DIN,
	PMUX_DRVGRP_DAP1_DOUT,
	PMUX_DRVGRP_DAP1_FS,
	PMUX_DRVGRP_DAP1_SCLK,
	PMUX_DRVGRP_DAP2_DIN,
	PMUX_DRVGRP_DAP2_DOUT,
	PMUX_DRVGRP_DAP2_FS,
	PMUX_DRVGRP_DAP2_SCLK,
	PMUX_DRVGRP_DAP4_DIN,
	PMUX_DRVGRP_DAP4_DOUT,
	PMUX_DRVGRP_DAP4_FS,
	PMUX_DRVGRP_DAP4_SCLK,
	PMUX_DRVGRP_DMIC1_CLK,
	PMUX_DRVGRP_DMIC1_DAT,
	PMUX_DRVGRP_DMIC2_CLK,
	PMUX_DRVGRP_DMIC2_DAT,
	PMUX_DRVGRP_DMIC3_CLK,
	PMUX_DRVGRP_DMIC3_DAT,
	PMUX_DRVGRP_DP_HPD0,
	PMUX_DRVGRP_DVFS_CLK,
	PMUX_DRVGRP_DVFS_PWM,
	PMUX_DRVGRP_GEN1_I2C_SCL,
	PMUX_DRVGRP_GEN1_I2C_SDA,
	PMUX_DRVGRP_GEN2_I2C_SCL,
	PMUX_DRVGRP_GEN2_I2C_SDA,
	PMUX_DRVGRP_GEN3_I2C_SCL,
	PMUX_DRVGRP_GEN3_I2C_SDA,
	PMUX_DRVGRP_PA6,
	PMUX_DRVGRP_PCC7,
	PMUX_DRVGRP_PE6,
	PMUX_DRVGRP_PE7,
	PMUX_DRVGRP_PH6,
	PMUX_DRVGRP_PK0,
	PMUX_DRVGRP_PK1,
	PMUX_DRVGRP_PK2,
	PMUX_DRVGRP_PK3,
	PMUX_DRVGRP_PK4,
	PMUX_DRVGRP_PK5,
	PMUX_DRVGRP_PK6,
	PMUX_DRVGRP_PK7,
	PMUX_DRVGRP_PL0,
	PMUX_DRVGRP_PL1,
	PMUX_DRVGRP_PZ0,
	PMUX_DRVGRP_PZ1,
	PMUX_DRVGRP_PZ2,
	PMUX_DRVGRP_PZ3,
	PMUX_DRVGRP_PZ4,
	PMUX_DRVGRP_PZ5,
	PMUX_DRVGRP_GPIO_X1_AUD,
	PMUX_DRVGRP_GPIO_X3_AUD,
	PMUX_DRVGRP_GPS_EN,
	PMUX_DRVGRP_GPS_RST,
	PMUX_DRVGRP_HDMI_CEC,
	PMUX_DRVGRP_HDMI_INT_DP_HPD,
	PMUX_DRVGRP_JTAG_RTCK,
	PMUX_DRVGRP_LCD_BL_EN,
	PMUX_DRVGRP_LCD_BL_PWM,
	PMUX_DRVGRP_LCD_GPIO1,
	PMUX_DRVGRP_LCD_GPIO2,
	PMUX_DRVGRP_LCD_RST,
	PMUX_DRVGRP_LCD_TE,
	PMUX_DRVGRP_MODEM_WAKE_AP,
	PMUX_DRVGRP_MOTION_INT,
	PMUX_DRVGRP_NFC_EN,
	PMUX_DRVGRP_NFC_INT,
	PMUX_DRVGRP_PEX_L0_CLKREQ_N,
	PMUX_DRVGRP_PEX_L0_RST_N,
	PMUX_DRVGRP_PEX_L1_CLKREQ_N,
	PMUX_DRVGRP_PEX_L1_RST_N,
	PMUX_DRVGRP_PEX_WAKE_N,
	PMUX_DRVGRP_PWR_I2C_SCL,
	PMUX_DRVGRP_PWR_I2C_SDA,
	PMUX_DRVGRP_PWR_INT_N,
	PMUX_DRVGRP_QSPI_SCK = (0x1bc / 4),
	PMUX_DRVGRP_SATA_LED_ACTIVE,
	PMUX_DRVGRP_SDMMC1,
	PMUX_DRVGRP_SDMMC2,
	PMUX_DRVGRP_SDMMC3 = (0x1dc / 4),
	PMUX_DRVGRP_SDMMC4,
	PMUX_DRVGRP_SHUTDOWN = (0x1f4 / 4),
	PMUX_DRVGRP_SPDIF_IN,
	PMUX_DRVGRP_SPDIF_OUT,
	PMUX_DRVGRP_SPI1_CS0,
	PMUX_DRVGRP_SPI1_CS1,
	PMUX_DRVGRP_SPI1_MISO,
	PMUX_DRVGRP_SPI1_MOSI,
	PMUX_DRVGRP_SPI1_SCK,
	PMUX_DRVGRP_SPI2_CS0,
	PMUX_DRVGRP_SPI2_CS1,
	PMUX_DRVGRP_SPI2_MISO,
	PMUX_DRVGRP_SPI2_MOSI,
	PMUX_DRVGRP_SPI2_SCK,
	PMUX_DRVGRP_SPI4_CS0,
	PMUX_DRVGRP_SPI4_MISO,
	PMUX_DRVGRP_SPI4_MOSI,
	PMUX_DRVGRP_SPI4_SCK,
	PMUX_DRVGRP_TEMP_ALERT,
	PMUX_DRVGRP_TOUCH_CLK,
	PMUX_DRVGRP_TOUCH_INT,
	PMUX_DRVGRP_TOUCH_RST,
	PMUX_DRVGRP_UART1_CTS,
	PMUX_DRVGRP_UART1_RTS,
	PMUX_DRVGRP_UART1_RX,
	PMUX_DRVGRP_UART1_TX,
	PMUX_DRVGRP_UART2_CTS,
	PMUX_DRVGRP_UART2_RTS,
	PMUX_DRVGRP_UART2_RX,
	PMUX_DRVGRP_UART2_TX,
	PMUX_DRVGRP_UART3_CTS,
	PMUX_DRVGRP_UART3_RTS,
	PMUX_DRVGRP_UART3_RX,
	PMUX_DRVGRP_UART3_TX,
	PMUX_DRVGRP_UART4_CTS,
	PMUX_DRVGRP_UART4_RTS,
	PMUX_DRVGRP_UART4_RX,
	PMUX_DRVGRP_UART4_TX,
	PMUX_DRVGRP_USB_VBUS_EN0,
	PMUX_DRVGRP_USB_VBUS_EN1,
	PMUX_DRVGRP_WIFI_EN,
	PMUX_DRVGRP_WIFI_RST,
	PMUX_DRVGRP_WIFI_WAKE_AP,
	PMUX_DRVGRP_COUNT,
};

enum pmux_func {
	PMUX_FUNC_DEFAULT,
	PMUX_FUNC_AUD,
	PMUX_FUNC_BCL,
	PMUX_FUNC_BLINK,
	PMUX_FUNC_CCLA,
	PMUX_FUNC_CEC,
	PMUX_FUNC_CLDVFS,
	PMUX_FUNC_CLK,
	PMUX_FUNC_CORE,
	PMUX_FUNC_CPU,
	PMUX_FUNC_DISPLAYA,
	PMUX_FUNC_DISPLAYB,
	PMUX_FUNC_DMIC1,
	PMUX_FUNC_DMIC2,
	PMUX_FUNC_DMIC3,
	PMUX_FUNC_DP,
	PMUX_FUNC_DTV,
	PMUX_FUNC_EXTPERIPH3,
	PMUX_FUNC_I2C1,
	PMUX_FUNC_I2C2,
	PMUX_FUNC_I2C3,
	PMUX_FUNC_I2CPMU,
	PMUX_FUNC_I2CVI,
	PMUX_FUNC_I2S1,
	PMUX_FUNC_I2S2,
	PMUX_FUNC_I2S3,
	PMUX_FUNC_I2S4A,
	PMUX_FUNC_I2S4B,
	PMUX_FUNC_I2S5A,
	PMUX_FUNC_I2S5B,
	PMUX_FUNC_IQC0,
	PMUX_FUNC_IQC1,
	PMUX_FUNC_JTAG,
	PMUX_FUNC_PE,
	PMUX_FUNC_PE0,
	PMUX_FUNC_PE1,
	PMUX_FUNC_PMI,
	PMUX_FUNC_PWM0,
	PMUX_FUNC_PWM1,
	PMUX_FUNC_PWM2,
	PMUX_FUNC_PWM3,
	PMUX_FUNC_QSPI,
	PMUX_FUNC_SATA,
	PMUX_FUNC_SDMMC1,
	PMUX_FUNC_SDMMC3,
	PMUX_FUNC_SHUTDOWN,
	PMUX_FUNC_SOC,
	PMUX_FUNC_SOR0,
	PMUX_FUNC_SOR1,
	PMUX_FUNC_SPDIF,
	PMUX_FUNC_SPI1,
	PMUX_FUNC_SPI2,
	PMUX_FUNC_SPI3,
	PMUX_FUNC_SPI4,
	PMUX_FUNC_SYS,
	PMUX_FUNC_TOUCH,
	PMUX_FUNC_UART,
	PMUX_FUNC_UARTA,
	PMUX_FUNC_UARTB,
	PMUX_FUNC_UARTC,
	PMUX_FUNC_UARTD,
	PMUX_FUNC_USB,
	PMUX_FUNC_VGP1,
	PMUX_FUNC_VGP2,
	PMUX_FUNC_VGP3,
	PMUX_FUNC_VGP4,
	PMUX_FUNC_VGP5,
	PMUX_FUNC_VGP6,
	PMUX_FUNC_VIMCLK,
	PMUX_FUNC_VIMCLK2,
	PMUX_FUNC_RSVD0,
	PMUX_FUNC_RSVD1,
	PMUX_FUNC_RSVD2,
	PMUX_FUNC_RSVD3,
	PMUX_FUNC_COUNT,
};

static const char * const tegra_pinctrl_to_pingrp[] = {
	[PMUX_PINGRP_SDMMC1_CLK_PM0] = "sdmmc1_clk_pm0",
	[PMUX_PINGRP_SDMMC1_CMD_PM1] = "sdmmc1_cmd_pm1",
	[PMUX_PINGRP_SDMMC1_DAT3_PM2] = "sdmmc1_dat3_pm2",
	[PMUX_PINGRP_SDMMC1_DAT2_PM3] = "sdmmc1_dat2_pm3",
	[PMUX_PINGRP_SDMMC1_DAT1_PM4] = "sdmmc1_dat1_pm4",
	[PMUX_PINGRP_SDMMC1_DAT0_PM5] = "sdmmc1_dat0_pm5",
	[PMUX_PINGRP_SDMMC3_CLK_PP0] = "sdmmc3_clk_pp0",
	[PMUX_PINGRP_SDMMC3_CMD_PP1] = "sdmmc3_cmd_pp1",
	[PMUX_PINGRP_SDMMC3_DAT0_PP5] = "sdmmc3_dat0_pp5",
	[PMUX_PINGRP_SDMMC3_DAT1_PP4] = "sdmmc3_dat1_pp4",
	[PMUX_PINGRP_SDMMC3_DAT2_PP3] = "sdmmc3_dat2_pp3",
	[PMUX_PINGRP_SDMMC3_DAT3_PP2] = "sdmmc3_dat3_pp2",
	[PMUX_PINGRP_PEX_L0_RST_N_PA0] = "pex_l0_rst_n_pa0",
	[PMUX_PINGRP_PEX_L0_CLKREQ_N_PA1] = "pex_l0_clkreq_n_pa1",
	[PMUX_PINGRP_PEX_WAKE_N_PA2] = "pex_wake_n_pa2",
	[PMUX_PINGRP_PEX_L1_RST_N_PA3] = "pex_l1_rst_n_pa3",
	[PMUX_PINGRP_PEX_L1_CLKREQ_N_PA4] = "pex_l1_clkreq_n_pa4",
	[PMUX_PINGRP_SATA_LED_ACTIVE_PA5] = "sata_led_active_pa5",
	[PMUX_PINGRP_SPI1_MOSI_PC0] = "spi1_mosi_pc0",
	[PMUX_PINGRP_SPI1_MISO_PC1] = "spi1_miso_pc1",
	[PMUX_PINGRP_SPI1_SCK_PC2] = "spi1_sck_pc2",
	[PMUX_PINGRP_SPI1_CS0_PC3] = "spi1_cs0_pc3",
	[PMUX_PINGRP_SPI1_CS1_PC4] = "spi1_cs1_pc4",
	[PMUX_PINGRP_SPI2_MOSI_PB4] = "spi2_mosi_pb4",
	[PMUX_PINGRP_SPI2_MISO_PB5] = "spi2_miso_pb5",
	[PMUX_PINGRP_SPI2_SCK_PB6] = "spi2_sck_pb6",
	[PMUX_PINGRP_SPI2_CS0_PB7] = "spi2_cs0_pb7",
	[PMUX_PINGRP_SPI2_CS1_PDD0] = "spi2_cs1_pdd0",
	[PMUX_PINGRP_SPI4_MOSI_PC7] = "spi4_mosi_pc7",
	[PMUX_PINGRP_SPI4_MISO_PD0] = "spi4_miso_pd0",
	[PMUX_PINGRP_SPI4_SCK_PC5] = "spi4_sck_pc5",
	[PMUX_PINGRP_SPI4_CS0_PC6] = "spi4_cs0_pc6",
	[PMUX_PINGRP_QSPI_SCK_PEE0] = "qspi_sck_pee0",
	[PMUX_PINGRP_QSPI_CS_N_PEE1] = "qspi_cs_n_pee1",
	[PMUX_PINGRP_QSPI_IO0_PEE2] = "qspi_io0_pee2",
	[PMUX_PINGRP_QSPI_IO1_PEE3] = "qspi_io1_pee3",
	[PMUX_PINGRP_QSPI_IO2_PEE4] = "qspi_io2_pee4",
	[PMUX_PINGRP_QSPI_IO3_PEE5] = "qspi_io3_pee5",
	[PMUX_PINGRP_DMIC1_CLK_PE0] = "dmic1_clk_pe0",
	[PMUX_PINGRP_DMIC1_DAT_PE1] = "dmic1_dat_pe1",
	[PMUX_PINGRP_DMIC2_CLK_PE2] = "dmic2_clk_pe2",
	[PMUX_PINGRP_DMIC2_DAT_PE3] = "dmic2_dat_pe3",
	[PMUX_PINGRP_DMIC3_CLK_PE4] = "dmic3_clk_pe4",
	[PMUX_PINGRP_DMIC3_DAT_PE5] = "dmic3_dat_pe5",
	[PMUX_PINGRP_GEN1_I2C_SCL_PJ1] = "gen1_i2c_scl_pj1",
	[PMUX_PINGRP_GEN1_I2C_SDA_PJ0] = "gen1_i2c_sda_pj0",
	[PMUX_PINGRP_GEN2_I2C_SCL_PJ2] = "gen2_i2c_scl_pj2",
	[PMUX_PINGRP_GEN2_I2C_SDA_PJ3] = "gen2_i2c_sda_pj3",
	[PMUX_PINGRP_GEN3_I2C_SCL_PF0] = "gen3_i2c_scl_pf0",
	[PMUX_PINGRP_GEN3_I2C_SDA_PF1] = "gen3_i2c_sda_pf1",
	[PMUX_PINGRP_CAM_I2C_SCL_PS2] = "cam_i2c_scl_ps2",
	[PMUX_PINGRP_CAM_I2C_SDA_PS3] = "cam_i2c_sda_ps3",
	[PMUX_PINGRP_PWR_I2C_SCL_PY3] = "pwr_i2c_scl_py3",
	[PMUX_PINGRP_PWR_I2C_SDA_PY4] = "pwr_i2c_sda_py4",
	[PMUX_PINGRP_UART1_TX_PU0] = "uart1_tx_pu0",
	[PMUX_PINGRP_UART1_RX_PU1] = "uart1_rx_pu1",
	[PMUX_PINGRP_UART1_RTS_PU2] = "uart1_rts_pu2",
	[PMUX_PINGRP_UART1_CTS_PU3] = "uart1_cts_pu3",
	[PMUX_PINGRP_UART2_TX_PG0] = "uart2_tx_pg0",
	[PMUX_PINGRP_UART2_RX_PG1] = "uart2_rx_pg1",
	[PMUX_PINGRP_UART2_RTS_PG2] = "uart2_rts_pg2",
	[PMUX_PINGRP_UART2_CTS_PG3] = "uart2_cts_pg3",
	[PMUX_PINGRP_UART3_TX_PD1] = "uart3_tx_pd1",
	[PMUX_PINGRP_UART3_RX_PD2] = "uart3_rx_pd2",
	[PMUX_PINGRP_UART3_RTS_PD3] = "uart3_rts_pd3",
	[PMUX_PINGRP_UART3_CTS_PD4] = "uart3_cts_pd4",
	[PMUX_PINGRP_UART4_TX_PI4] = "uart4_tx_pi4",
	[PMUX_PINGRP_UART4_RX_PI5] = "uart4_rx_pi5",
	[PMUX_PINGRP_UART4_RTS_PI6] = "uart4_rts_pi6",
	[PMUX_PINGRP_UART4_CTS_PI7] = "uart4_cts_pi7",
	[PMUX_PINGRP_DAP1_FS_PB0] = "dap1_fs_pb0",
	[PMUX_PINGRP_DAP1_DIN_PB1] = "dap1_din_pb1",
	[PMUX_PINGRP_DAP1_DOUT_PB2] = "dap1_dout_pb2",
	[PMUX_PINGRP_DAP1_SCLK_PB3] = "dap1_sclk_pb3",
	[PMUX_PINGRP_DAP2_FS_PAA0] = "dap2_fs_paa0",
	[PMUX_PINGRP_DAP2_DIN_PAA2] = "dap2_din_paa2",
	[PMUX_PINGRP_DAP2_DOUT_PAA3] = "dap2_dout_paa3",
	[PMUX_PINGRP_DAP2_SCLK_PAA1] = "dap2_sclk_paa1",
	[PMUX_PINGRP_DAP4_FS_PJ4] = "dap4_fs_pj4",
	[PMUX_PINGRP_DAP4_DIN_PJ5] = "dap4_din_pj5",
	[PMUX_PINGRP_DAP4_DOUT_PJ6] = "dap4_dout_pj6",
	[PMUX_PINGRP_DAP4_SCLK_PJ7] = "dap4_sclk_pj7",
	[PMUX_PINGRP_CAM1_MCLK_PS0] = "cam1_mclk_ps0",
	[PMUX_PINGRP_CAM2_MCLK_PS1] = "cam2_mclk_ps1",
	[PMUX_PINGRP_JTAG_RTCK] = "jtag_rtck",
	[PMUX_PINGRP_CLK_32K_IN] = "clk_32k_in",
	[PMUX_PINGRP_CLK_32K_OUT_PY5] = "clk_32k_out_py5",
	[PMUX_PINGRP_BATT_BCL] = "batt_bcl",
	[PMUX_PINGRP_CLK_REQ] = "clk_req",
	[PMUX_PINGRP_CPU_PWR_REQ] = "cpu_pwr_req",
	[PMUX_PINGRP_PWR_INT_N] = "pwr_int_n",
	[PMUX_PINGRP_SHUTDOWN] = "shutdown",
	[PMUX_PINGRP_CORE_PWR_REQ] = "core_pwr_req",
	[PMUX_PINGRP_AUD_MCLK_PBB0] = "aud_mclk_pbb0",
	[PMUX_PINGRP_DVFS_PWM_PBB1] = "dvfs_pwm_pbb1",
	[PMUX_PINGRP_DVFS_CLK_PBB2] = "dvfs_clk_pbb2",
	[PMUX_PINGRP_GPIO_X1_AUD_PBB3] = "gpio_x1_aud_pbb3",
	[PMUX_PINGRP_GPIO_X3_AUD_PBB4] = "gpio_x3_aud_pbb4",
	[PMUX_PINGRP_PCC7] = "pcc7",
	[PMUX_PINGRP_HDMI_CEC_PCC0] = "hdmi_cec_pcc0",
	[PMUX_PINGRP_HDMI_INT_DP_HPD_PCC1] = "hdmi_int_dp_hpd_pcc1",
	[PMUX_PINGRP_SPDIF_OUT_PCC2] = "spdif_out_pcc2",
	[PMUX_PINGRP_SPDIF_IN_PCC3] = "spdif_in_pcc3",
	[PMUX_PINGRP_USB_VBUS_EN0_PCC4] = "usb_vbus_en0_pcc4",
	[PMUX_PINGRP_USB_VBUS_EN1_PCC5] = "usb_vbus_en1_pcc5",
	[PMUX_PINGRP_DP_HPD0_PCC6] = "dp_hpd0_pcc6",
	[PMUX_PINGRP_WIFI_EN_PH0] = "wifi_en_ph0",
	[PMUX_PINGRP_WIFI_RST_PH1] = "wifi_rst_ph1",
	[PMUX_PINGRP_WIFI_WAKE_AP_PH2] = "wifi_wake_ap_ph2",
	[PMUX_PINGRP_AP_WAKE_BT_PH3] = "ap_wake_bt_ph3",
	[PMUX_PINGRP_BT_RST_PH4] = "bt_rst_ph4",
	[PMUX_PINGRP_BT_WAKE_AP_PH5] = "bt_wake_ap_ph5",
	[PMUX_PINGRP_AP_WAKE_NFC_PH7] = "ap_wake_nfc_ph7",
	[PMUX_PINGRP_NFC_EN_PI0] = "nfc_en_pi0",
	[PMUX_PINGRP_NFC_INT_PI1] = "nfc_int_pi1",
	[PMUX_PINGRP_GPS_EN_PI2] = "gps_en_pi2",
	[PMUX_PINGRP_GPS_RST_PI3] = "gps_rst_pi3",
	[PMUX_PINGRP_CAM_RST_PS4] = "cam_rst_ps4",
	[PMUX_PINGRP_CAM_AF_EN_PS5] = "cam_af_en_ps5",
	[PMUX_PINGRP_CAM_FLASH_EN_PS6] = "cam_flash_en_ps6",
	[PMUX_PINGRP_CAM1_PWDN_PS7] = "cam1_pwdn_ps7",
	[PMUX_PINGRP_CAM2_PWDN_PT0] = "cam2_pwdn_pt0",
	[PMUX_PINGRP_CAM1_STROBE_PT1] = "cam1_strobe_pt1",
	[PMUX_PINGRP_LCD_TE_PY2] = "lcd_te_py2",
	[PMUX_PINGRP_LCD_BL_PWM_PV0] = "lcd_bl_pwm_pv0",
	[PMUX_PINGRP_LCD_BL_EN_PV1] = "lcd_bl_en_pv1",
	[PMUX_PINGRP_LCD_RST_PV2] = "lcd_rst_pv2",
	[PMUX_PINGRP_LCD_GPIO1_PV3] = "lcd_gpio1_pv3",
	[PMUX_PINGRP_LCD_GPIO2_PV4] = "lcd_gpio2_pv4",
	[PMUX_PINGRP_AP_READY_PV5] = "ap_ready_pv5",
	[PMUX_PINGRP_TOUCH_RST_PV6] = "touch_rst_pv6",
	[PMUX_PINGRP_TOUCH_CLK_PV7] = "touch_clk_pv7",
	[PMUX_PINGRP_MODEM_WAKE_AP_PX0] = "modem_wake_ap_px0",
	[PMUX_PINGRP_TOUCH_INT_PX1] = "touch_int_px1",
	[PMUX_PINGRP_MOTION_INT_PX2] = "motion_int_px2",
	[PMUX_PINGRP_ALS_PROX_INT_PX3] = "als_prox_int_px3",
	[PMUX_PINGRP_TEMP_ALERT_PX4] = "temp_alert_px4",
	[PMUX_PINGRP_BUTTON_POWER_ON_PX5] = "button_power_on_px5",
	[PMUX_PINGRP_BUTTON_VOL_UP_PX6] = "button_vol_up_px6",
	[PMUX_PINGRP_BUTTON_VOL_DOWN_PX7] = "button_vol_down_px7",
	[PMUX_PINGRP_BUTTON_SLIDE_SW_PY0] = "button_slide_sw_py0",
	[PMUX_PINGRP_BUTTON_HOME_PY1] = "button_home_py1",
	[PMUX_PINGRP_PA6] = "pa6",
	[PMUX_PINGRP_PE6] = "pe6",
	[PMUX_PINGRP_PE7] = "pe7",
	[PMUX_PINGRP_PH6] = "ph6",
	[PMUX_PINGRP_PK0] = "pk0",
	[PMUX_PINGRP_PK1] = "pk1",
	[PMUX_PINGRP_PK2] = "pk2",
	[PMUX_PINGRP_PK3] = "pk3",
	[PMUX_PINGRP_PK4] = "pk4",
	[PMUX_PINGRP_PK5] = "pk5",
	[PMUX_PINGRP_PK6] = "pk6",
	[PMUX_PINGRP_PK7] = "pk7",
	[PMUX_PINGRP_PL0] = "pl0",
	[PMUX_PINGRP_PL1] = "pl1",
	[PMUX_PINGRP_PZ0] = "pz0",
	[PMUX_PINGRP_PZ1] = "pz1",
	[PMUX_PINGRP_PZ2] = "pz2",
	[PMUX_PINGRP_PZ3] = "pz3",
	[PMUX_PINGRP_PZ4] = "pz4",
	[PMUX_PINGRP_PZ5] = "pz5",
};

static const char * const tegra_pinctrl_to_drvgrp[] = {
	[PMUX_DRVGRP_ALS_PROX_INT] = "als_prox_int",
	[PMUX_DRVGRP_AP_READY] = "ap_ready",
	[PMUX_DRVGRP_AP_WAKE_BT] = "ap_wake_bt",
	[PMUX_DRVGRP_AP_WAKE_NFC] = "ap_wake_nfc",
	[PMUX_DRVGRP_AUD_MCLK] = "aud_mclk",
	[PMUX_DRVGRP_BATT_BCL] = "batt_bcl",
	[PMUX_DRVGRP_BT_RST] = "bt_rst",
	[PMUX_DRVGRP_BT_WAKE_AP] = "bt_wake_ap",
	[PMUX_DRVGRP_BUTTON_HOME] = "button_home",
	[PMUX_DRVGRP_BUTTON_POWER_ON] = "button_power_on",
	[PMUX_DRVGRP_BUTTON_SLIDE_SW] = "button_slide_sw",
	[PMUX_DRVGRP_BUTTON_VOL_DOWN] = "button_vol_down",
	[PMUX_DRVGRP_BUTTON_VOL_UP] = "button_vol_up",
	[PMUX_DRVGRP_CAM1_MCLK] = "cam1_mclk",
	[PMUX_DRVGRP_CAM1_PWDN] = "cam1_pwdn",
	[PMUX_DRVGRP_CAM1_STROBE] = "cam1_strobe",
	[PMUX_DRVGRP_CAM2_MCLK] = "cam2_mclk",
	[PMUX_DRVGRP_CAM2_PWDN] = "cam2_pwdn",
	[PMUX_DRVGRP_CAM_AF_EN] = "cam_af_en",
	[PMUX_DRVGRP_CAM_FLASH_EN] = "cam_flash_en",
	[PMUX_DRVGRP_CAM_I2C_SCL] = "cam_i2c_scl",
	[PMUX_DRVGRP_CAM_I2C_SDA] = "cam_i2c_sda",
	[PMUX_DRVGRP_CAM_RST] = "cam_rst",
	[PMUX_DRVGRP_CLK_32K_IN] = "clk_32k_in",
	[PMUX_DRVGRP_CLK_32K_OUT] = "clk_32k_out",
	[PMUX_DRVGRP_CLK_REQ] = "clk_req",
	[PMUX_DRVGRP_CORE_PWR_REQ] = "core_pwr_req",
	[PMUX_DRVGRP_CPU_PWR_REQ] = "cpu_pwr_req",
	[PMUX_DRVGRP_DAP1_DIN] = "dap1_din",
	[PMUX_DRVGRP_DAP1_DOUT] = "dap1_dout",
	[PMUX_DRVGRP_DAP1_FS] = "dap1_fs",
	[PMUX_DRVGRP_DAP1_SCLK] = "dap1_sclk",
	[PMUX_DRVGRP_DAP2_DIN] = "dap2_din",
	[PMUX_DRVGRP_DAP2_DOUT] = "dap2_dout",
	[PMUX_DRVGRP_DAP2_FS] = "dap2_fs",
	[PMUX_DRVGRP_DAP2_SCLK] = "dap2_sclk",
	[PMUX_DRVGRP_DAP4_DIN] = "dap4_din",
	[PMUX_DRVGRP_DAP4_DOUT] = "dap4_dout",
	[PMUX_DRVGRP_DAP4_FS] = "dap4_fs",
	[PMUX_DRVGRP_DAP4_SCLK] = "dap4_sclk",
	[PMUX_DRVGRP_DMIC1_CLK] = "dmic1_clk",
	[PMUX_DRVGRP_DMIC1_DAT] = "dmic1_dat",
	[PMUX_DRVGRP_DMIC2_CLK] = "dmic2_clk",
	[PMUX_DRVGRP_DMIC2_DAT] = "dmic2_dat",
	[PMUX_DRVGRP_DMIC3_CLK] = "dmic3_clk",
	[PMUX_DRVGRP_DMIC3_DAT] = "dmic3_dat",
	[PMUX_DRVGRP_DP_HPD0] = "dp_hpd0",
	[PMUX_DRVGRP_DVFS_CLK] = "dvfs_clk",
	[PMUX_DRVGRP_DVFS_PWM] = "dvfs_pwm",
	[PMUX_DRVGRP_GEN1_I2C_SCL] = "gen1_i2c_scl",
	[PMUX_DRVGRP_GEN1_I2C_SDA] = "gen1_i2c_sda",
	[PMUX_DRVGRP_GEN2_I2C_SCL] = "gen2_i2c_scl",
	[PMUX_DRVGRP_GEN2_I2C_SDA] = "gen2_i2c_sda",
	[PMUX_DRVGRP_GEN3_I2C_SCL] = "gen3_i2c_scl",
	[PMUX_DRVGRP_GEN3_I2C_SDA] = "gen3_i2c_sda",
	[PMUX_DRVGRP_PA6] = "pa6",
	[PMUX_DRVGRP_PCC7] = "pcc7",
	[PMUX_DRVGRP_PE6] = "pe6",
	[PMUX_DRVGRP_PE7] = "pe7",
	[PMUX_DRVGRP_PH6] = "ph6",
	[PMUX_DRVGRP_PK0] = "pk0",
	[PMUX_DRVGRP_PK1] = "pk1",
	[PMUX_DRVGRP_PK2] = "pk2",
	[PMUX_DRVGRP_PK3] = "pk3",
	[PMUX_DRVGRP_PK4] = "pk4",
	[PMUX_DRVGRP_PK5] = "pk5",
	[PMUX_DRVGRP_PK6] = "pk6",
	[PMUX_DRVGRP_PK7] = "pk7",
	[PMUX_DRVGRP_PL0] = "pl0",
	[PMUX_DRVGRP_PL1] = "pl1",
	[PMUX_DRVGRP_PZ0] = "pz0",
	[PMUX_DRVGRP_PZ1] = "pz1",
	[PMUX_DRVGRP_PZ2] = "pz2",
	[PMUX_DRVGRP_PZ3] = "pz3",
	[PMUX_DRVGRP_PZ4] = "pz4",
	[PMUX_DRVGRP_PZ5] = "pz5",
	[PMUX_DRVGRP_GPIO_X1_AUD] = "gpio_x1_aud",
	[PMUX_DRVGRP_GPIO_X3_AUD] = "gpio_x3_aud",
	[PMUX_DRVGRP_GPS_EN] = "gps_en",
	[PMUX_DRVGRP_GPS_RST] = "gps_rst",
	[PMUX_DRVGRP_HDMI_CEC] = "hdmi_cec",
	[PMUX_DRVGRP_HDMI_INT_DP_HPD] = "hdmi_int_dp_hpd",
	[PMUX_DRVGRP_JTAG_RTCK] = "jtag_rtck",
	[PMUX_DRVGRP_LCD_BL_EN] = "lcd_bl_en",
	[PMUX_DRVGRP_LCD_BL_PWM] = "lcd_bl_pwm",
	[PMUX_DRVGRP_LCD_GPIO1] = "lcd_gpio1",
	[PMUX_DRVGRP_LCD_GPIO2] = "lcd_gpio2",
	[PMUX_DRVGRP_LCD_RST] = "lcd_rst",
	[PMUX_DRVGRP_LCD_TE] = "lcd_te",
	[PMUX_DRVGRP_MODEM_WAKE_AP] = "modem_wake_ap",
	[PMUX_DRVGRP_MOTION_INT] = "motion_int",
	[PMUX_DRVGRP_NFC_EN] = "nfc_en",
	[PMUX_DRVGRP_NFC_INT] = "nfc_int",
	[PMUX_DRVGRP_PEX_L0_CLKREQ_N] = "pex_l0_clkreq_n",
	[PMUX_DRVGRP_PEX_L0_RST_N] = "pex_l0_rst_n",
	[PMUX_DRVGRP_PEX_L1_CLKREQ_N] = "pex_l1_clkreq_n",
	[PMUX_DRVGRP_PEX_L1_RST_N] = "pex_l1_rst_n",
	[PMUX_DRVGRP_PEX_WAKE_N] = "pex_wake_n",
	[PMUX_DRVGRP_PWR_I2C_SCL] = "pwr_i2c_scl",
	[PMUX_DRVGRP_PWR_I2C_SDA] = "pwr_i2c_sda",
	[PMUX_DRVGRP_PWR_INT_N] = "pwr_int_n",
	[PMUX_DRVGRP_QSPI_SCK] = "qspi_sck",
	[PMUX_DRVGRP_SATA_LED_ACTIVE] = "sata_led_active",
	[PMUX_DRVGRP_SDMMC1] = "sdmmc1",
	[PMUX_DRVGRP_SDMMC2] = "sdmmc2",
	[PMUX_DRVGRP_SDMMC3] = "sdmmc3",
	[PMUX_DRVGRP_SDMMC4] = "sdmmc4",
	[PMUX_DRVGRP_SHUTDOWN] = "shutdown",
	[PMUX_DRVGRP_SPDIF_IN] = "spdif_in",
	[PMUX_DRVGRP_SPDIF_OUT] = "spdif_out",
	[PMUX_DRVGRP_SPI1_CS0] = "spi1_cs0",
	[PMUX_DRVGRP_SPI1_CS1] = "spi1_cs1",
	[PMUX_DRVGRP_SPI1_MISO] = "spi1_miso",
	[PMUX_DRVGRP_SPI1_MOSI] = "spi1_mosi",
	[PMUX_DRVGRP_SPI1_SCK] = "spi1_sck",
	[PMUX_DRVGRP_SPI2_CS0] = "spi2_cs0",
	[PMUX_DRVGRP_SPI2_CS1] = "spi2_cs1",
	[PMUX_DRVGRP_SPI2_MISO] = "spi2_miso",
	[PMUX_DRVGRP_SPI2_MOSI] = "spi2_mosi",
	[PMUX_DRVGRP_SPI2_SCK] = "spi2_sck",
	[PMUX_DRVGRP_SPI4_CS0] = "spi4_cs0",
	[PMUX_DRVGRP_SPI4_MISO] = "spi4_miso",
	[PMUX_DRVGRP_SPI4_MOSI] = "spi4_mosi",
	[PMUX_DRVGRP_SPI4_SCK] = "spi4_sck",
	[PMUX_DRVGRP_TEMP_ALERT] = "temp_alert",
	[PMUX_DRVGRP_TOUCH_CLK] = "touch_clk",
	[PMUX_DRVGRP_TOUCH_INT] = "touch_int",
	[PMUX_DRVGRP_TOUCH_RST] = "touch_rst",
	[PMUX_DRVGRP_UART1_CTS] = "uart1_cts",
	[PMUX_DRVGRP_UART1_RTS] = "uart1_rts",
	[PMUX_DRVGRP_UART1_RX] = "uart1_rx",
	[PMUX_DRVGRP_UART1_TX] = "uart1_tx",
	[PMUX_DRVGRP_UART2_CTS] = "uart2_cts",
	[PMUX_DRVGRP_UART2_RTS] = "uart2_rts",
	[PMUX_DRVGRP_UART2_RX] = "uart2_rx",
	[PMUX_DRVGRP_UART2_TX] = "uart2_tx",
	[PMUX_DRVGRP_UART3_CTS] = "uart3_cts",
	[PMUX_DRVGRP_UART3_RTS] = "uart3_rts",
	[PMUX_DRVGRP_UART3_RX] = "uart3_rx",
	[PMUX_DRVGRP_UART3_TX] = "uart3_tx",
	[PMUX_DRVGRP_UART4_CTS] = "uart4_cts",
	[PMUX_DRVGRP_UART4_RTS] = "uart4_rts",
	[PMUX_DRVGRP_UART4_RX] = "uart4_rx",
	[PMUX_DRVGRP_UART4_TX] = "uart4_tx",
	[PMUX_DRVGRP_USB_VBUS_EN0] = "usb_vbus_en0",
	[PMUX_DRVGRP_USB_VBUS_EN1] = "usb_vbus_en1",
	[PMUX_DRVGRP_WIFI_EN] = "wifi_en",
	[PMUX_DRVGRP_WIFI_RST] = "wifi_rst",
	[PMUX_DRVGRP_WIFI_WAKE_AP] = "wifi_wake_ap",
};

static const char * const tegra_pinctrl_to_func[] = {
	[PMUX_FUNC_DEFAULT] = "default",
	[PMUX_FUNC_AUD] = "aud",
	[PMUX_FUNC_BCL] = "bcl",
	[PMUX_FUNC_BLINK] = "blink",
	[PMUX_FUNC_CCLA] = "ccla",
	[PMUX_FUNC_CEC] = "cec",
	[PMUX_FUNC_CLDVFS] = "cldvfs",
	[PMUX_FUNC_CLK] = "clk",
	[PMUX_FUNC_CORE] = "core",
	[PMUX_FUNC_CPU] = "cpu",
	[PMUX_FUNC_DISPLAYA] = "displaya",
	[PMUX_FUNC_DISPLAYB] = "displayb",
	[PMUX_FUNC_DMIC1] = "dmic1",
	[PMUX_FUNC_DMIC2] = "dmic2",
	[PMUX_FUNC_DMIC3] = "dmic3",
	[PMUX_FUNC_DP] = "dp",
	[PMUX_FUNC_DTV] = "dtv",
	[PMUX_FUNC_EXTPERIPH3] = "extperiph3",
	[PMUX_FUNC_I2C1] = "i2c1",
	[PMUX_FUNC_I2C2] = "i2c2",
	[PMUX_FUNC_I2C3] = "i2c3",
	[PMUX_FUNC_I2CPMU] = "i2cpmu",
	[PMUX_FUNC_I2CVI] = "i2cvi",
	[PMUX_FUNC_I2S1] = "i2s1",
	[PMUX_FUNC_I2S2] = "i2s2",
	[PMUX_FUNC_I2S3] = "i2s3",
	[PMUX_FUNC_I2S4A] = "i2s4a",
	[PMUX_FUNC_I2S4B] = "i2s4b",
	[PMUX_FUNC_I2S5A] = "i2s5a",
	[PMUX_FUNC_I2S5B] = "i2s5b",
	[PMUX_FUNC_IQC0] = "iqc0",
	[PMUX_FUNC_IQC1] = "iqc1",
	[PMUX_FUNC_JTAG] = "jtag",
	[PMUX_FUNC_PE] = "pe",
	[PMUX_FUNC_PE0] = "pe0",
	[PMUX_FUNC_PE1] = "pe1",
	[PMUX_FUNC_PMI] = "pmi",
	[PMUX_FUNC_PWM0] = "pwm0",
	[PMUX_FUNC_PWM1] = "pwm1",
	[PMUX_FUNC_PWM2] = "pwm2",
	[PMUX_FUNC_PWM3] = "pwm3",
	[PMUX_FUNC_QSPI] = "qspi",
	[PMUX_FUNC_SATA] = "sata",
	[PMUX_FUNC_SDMMC1] = "sdmmc1",
	[PMUX_FUNC_SDMMC3] = "sdmmc3",
	[PMUX_FUNC_SHUTDOWN] = "shutdown",
	[PMUX_FUNC_SOC] = "soc",
	[PMUX_FUNC_SOR0] = "sor0",
	[PMUX_FUNC_SOR1] = "sor1",
	[PMUX_FUNC_SPDIF] = "spdif",
	[PMUX_FUNC_SPI1] = "spi1",
	[PMUX_FUNC_SPI2] = "spi2",
	[PMUX_FUNC_SPI3] = "spi3",
	[PMUX_FUNC_SPI4] = "spi4",
	[PMUX_FUNC_SYS] = "sys",
	[PMUX_FUNC_TOUCH] = "touch",
	[PMUX_FUNC_UART] = "uart",
	[PMUX_FUNC_UARTA] = "uarta",
	[PMUX_FUNC_UARTB] = "uartb",
	[PMUX_FUNC_UARTC] = "uartc",
	[PMUX_FUNC_UARTD] = "uartd",
	[PMUX_FUNC_USB] = "usb",
	[PMUX_FUNC_VGP1] = "vgp1",
	[PMUX_FUNC_VGP2] = "vgp2",
	[PMUX_FUNC_VGP3] = "vgp3",
	[PMUX_FUNC_VGP4] = "vgp4",
	[PMUX_FUNC_VGP5] = "vgp5",
	[PMUX_FUNC_VGP6] = "vgp6",
	[PMUX_FUNC_VIMCLK] = "vimclk",
	[PMUX_FUNC_VIMCLK2] = "vimclk2",
	[PMUX_FUNC_RSVD0] = "rsvd0",
	[PMUX_FUNC_RSVD1] = "rsvd1",
	[PMUX_FUNC_RSVD2] = "rsvd2",
	[PMUX_FUNC_RSVD3] = "rsvd3",
};

#define TEGRA_PMX_SOC_DRV_GROUP_BASE_REG 0x8d4
#define TEGRA_PMX_SOC_HAS_IO_CLAMPING
#define TEGRA_PMX_SOC_HAS_DRVGRPS
#define TEGRA_PMX_PINS_HAVE_E_INPUT
#define TEGRA_PMX_PINS_HAVE_LOCK
#define TEGRA_PMX_PINS_HAVE_OD
#define TEGRA_PMX_PINS_HAVE_E_IO_HV
#include <asm/arch-tegra/pinmux.h>

#endif /* _TEGRA210_PINMUX_H_ */
