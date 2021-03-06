#ifndef _ALTERA_HPS_0_H_
#define _ALTERA_HPS_0_H_

/*
 * This file was automatically generated by the swinfo2header utility.
 * 
 * Created from SOPC Builder system 'soc_system' in
 * file './soc_system.sopcinfo'.
 */

/*
 * This file contains macros for module 'hps_0' and devices
 * connected to the following masters:
 *   h2f_axi_master
 *   h2f_lw_axi_master
 * 
 * Do not include this header file and another header file created for a
 * different module or master group at the same time.
 * Doing so may result in duplicate macro names.
 * Instead, use the system header file which has macros with unique names.
 */

/*
 * Macros for device 'onchip_memory2_0', class 'altera_avalon_onchip_memory2'
 * The macros are prefixed with 'ONCHIP_MEMORY2_0_'.
 * The prefix is the slave descriptor.
 */
#define ONCHIP_MEMORY2_0_COMPONENT_TYPE altera_avalon_onchip_memory2
#define ONCHIP_MEMORY2_0_COMPONENT_NAME onchip_memory2_0
#define ONCHIP_MEMORY2_0_BASE 0x0
#define ONCHIP_MEMORY2_0_SPAN 65536
#define ONCHIP_MEMORY2_0_END 0xffff
#define ONCHIP_MEMORY2_0_ALLOW_IN_SYSTEM_MEMORY_CONTENT_EDITOR 0
#define ONCHIP_MEMORY2_0_ALLOW_MRAM_SIM_CONTENTS_ONLY_FILE 0
#define ONCHIP_MEMORY2_0_CONTENTS_INFO ""
#define ONCHIP_MEMORY2_0_DUAL_PORT 0
#define ONCHIP_MEMORY2_0_GUI_RAM_BLOCK_TYPE AUTO
#define ONCHIP_MEMORY2_0_INIT_CONTENTS_FILE soc_system_onchip_memory2_0
#define ONCHIP_MEMORY2_0_INIT_MEM_CONTENT 1
#define ONCHIP_MEMORY2_0_INSTANCE_ID NONE
#define ONCHIP_MEMORY2_0_NON_DEFAULT_INIT_FILE_ENABLED 0
#define ONCHIP_MEMORY2_0_RAM_BLOCK_TYPE AUTO
#define ONCHIP_MEMORY2_0_READ_DURING_WRITE_MODE DONT_CARE
#define ONCHIP_MEMORY2_0_SINGLE_CLOCK_OP 0
#define ONCHIP_MEMORY2_0_SIZE_MULTIPLE 1
#define ONCHIP_MEMORY2_0_SIZE_VALUE 65536
#define ONCHIP_MEMORY2_0_WRITABLE 1
#define ONCHIP_MEMORY2_0_MEMORY_INFO_DAT_SYM_INSTALL_DIR SIM_DIR
#define ONCHIP_MEMORY2_0_MEMORY_INFO_GENERATE_DAT_SYM 1
#define ONCHIP_MEMORY2_0_MEMORY_INFO_GENERATE_HEX 1
#define ONCHIP_MEMORY2_0_MEMORY_INFO_HAS_BYTE_LANE 0
#define ONCHIP_MEMORY2_0_MEMORY_INFO_HEX_INSTALL_DIR QPF_DIR
#define ONCHIP_MEMORY2_0_MEMORY_INFO_MEM_INIT_DATA_WIDTH 64
#define ONCHIP_MEMORY2_0_MEMORY_INFO_MEM_INIT_FILENAME soc_system_onchip_memory2_0

/*
 * Macros for device 'sysid_qsys', class 'altera_avalon_sysid_qsys'
 * The macros are prefixed with 'SYSID_QSYS_'.
 * The prefix is the slave descriptor.
 */
#define SYSID_QSYS_COMPONENT_TYPE altera_avalon_sysid_qsys
#define SYSID_QSYS_COMPONENT_NAME sysid_qsys
#define SYSID_QSYS_BASE 0x10000
#define SYSID_QSYS_SPAN 8
#define SYSID_QSYS_END 0x10007
#define SYSID_QSYS_ID 2899645186
#define SYSID_QSYS_TIMESTAMP 1480316085

/*
 * Macros for device 'led_pio', class 'altera_avalon_pio'
 * The macros are prefixed with 'LED_PIO_'.
 * The prefix is the slave descriptor.
 */
#define LED_PIO_COMPONENT_TYPE altera_avalon_pio
#define LED_PIO_COMPONENT_NAME led_pio
#define LED_PIO_BASE 0x10040
#define LED_PIO_SPAN 32
#define LED_PIO_END 0x1005f
#define LED_PIO_BIT_CLEARING_EDGE_REGISTER 0
#define LED_PIO_BIT_MODIFYING_OUTPUT_REGISTER 0
#define LED_PIO_CAPTURE 0
#define LED_PIO_DATA_WIDTH 8
#define LED_PIO_DO_TEST_BENCH_WIRING 0
#define LED_PIO_DRIVEN_SIM_VALUE 0
#define LED_PIO_EDGE_TYPE NONE
#define LED_PIO_FREQ 50000000
#define LED_PIO_HAS_IN 0
#define LED_PIO_HAS_OUT 1
#define LED_PIO_HAS_TRI 0
#define LED_PIO_IRQ_TYPE NONE
#define LED_PIO_RESET_VALUE 0

/*
 * Macros for device 'dipsw_pio', class 'altera_avalon_pio'
 * The macros are prefixed with 'DIPSW_PIO_'.
 * The prefix is the slave descriptor.
 */
#define DIPSW_PIO_COMPONENT_TYPE altera_avalon_pio
#define DIPSW_PIO_COMPONENT_NAME dipsw_pio
#define DIPSW_PIO_BASE 0x10080
#define DIPSW_PIO_SPAN 32
#define DIPSW_PIO_END 0x1009f
#define DIPSW_PIO_IRQ 0
#define DIPSW_PIO_BIT_CLEARING_EDGE_REGISTER 1
#define DIPSW_PIO_BIT_MODIFYING_OUTPUT_REGISTER 0
#define DIPSW_PIO_CAPTURE 1
#define DIPSW_PIO_DATA_WIDTH 4
#define DIPSW_PIO_DO_TEST_BENCH_WIRING 0
#define DIPSW_PIO_DRIVEN_SIM_VALUE 0
#define DIPSW_PIO_EDGE_TYPE ANY
#define DIPSW_PIO_FREQ 50000000
#define DIPSW_PIO_HAS_IN 1
#define DIPSW_PIO_HAS_OUT 0
#define DIPSW_PIO_HAS_TRI 0
#define DIPSW_PIO_IRQ_TYPE EDGE
#define DIPSW_PIO_RESET_VALUE 0

/*
 * Macros for device 'button_pio', class 'altera_avalon_pio'
 * The macros are prefixed with 'BUTTON_PIO_'.
 * The prefix is the slave descriptor.
 */
#define BUTTON_PIO_COMPONENT_TYPE altera_avalon_pio
#define BUTTON_PIO_COMPONENT_NAME button_pio
#define BUTTON_PIO_BASE 0x100c0
#define BUTTON_PIO_SPAN 32
#define BUTTON_PIO_END 0x100df
#define BUTTON_PIO_IRQ 1
#define BUTTON_PIO_BIT_CLEARING_EDGE_REGISTER 1
#define BUTTON_PIO_BIT_MODIFYING_OUTPUT_REGISTER 0
#define BUTTON_PIO_CAPTURE 1
#define BUTTON_PIO_DATA_WIDTH 4
#define BUTTON_PIO_DO_TEST_BENCH_WIRING 0
#define BUTTON_PIO_DRIVEN_SIM_VALUE 0
#define BUTTON_PIO_EDGE_TYPE FALLING
#define BUTTON_PIO_FREQ 50000000
#define BUTTON_PIO_HAS_IN 1
#define BUTTON_PIO_HAS_OUT 0
#define BUTTON_PIO_HAS_TRI 0
#define BUTTON_PIO_IRQ_TYPE EDGE
#define BUTTON_PIO_RESET_VALUE 0

/*
 * Macros for device 'jtag_uart', class 'altera_avalon_jtag_uart'
 * The macros are prefixed with 'JTAG_UART_'.
 * The prefix is the slave descriptor.
 */
#define JTAG_UART_COMPONENT_TYPE altera_avalon_jtag_uart
#define JTAG_UART_COMPONENT_NAME jtag_uart
#define JTAG_UART_BASE 0x20000
#define JTAG_UART_SPAN 16
#define JTAG_UART_END 0x2000f
#define JTAG_UART_IRQ 2
#define JTAG_UART_READ_DEPTH 64
#define JTAG_UART_READ_THRESHOLD 8
#define JTAG_UART_WRITE_DEPTH 64
#define JTAG_UART_WRITE_THRESHOLD 8

/*
 * Macros for device 'motor_driver_a', class 'pwm_motor_driver'
 * The macros are prefixed with 'MOTOR_DRIVER_A_'.
 * The prefix is the slave descriptor.
 */
#define MOTOR_DRIVER_A_COMPONENT_TYPE pwm_motor_driver
#define MOTOR_DRIVER_A_COMPONENT_NAME motor_driver_a
#define MOTOR_DRIVER_A_BASE 0x40000
#define MOTOR_DRIVER_A_SPAN 1024
#define MOTOR_DRIVER_A_END 0x403ff

/*
 * Macros for device 'motor_driver_b', class 'pwm_motor_driver'
 * The macros are prefixed with 'MOTOR_DRIVER_B_'.
 * The prefix is the slave descriptor.
 */
#define MOTOR_DRIVER_B_COMPONENT_TYPE pwm_motor_driver
#define MOTOR_DRIVER_B_COMPONENT_NAME motor_driver_b
#define MOTOR_DRIVER_B_BASE 0x40400
#define MOTOR_DRIVER_B_SPAN 1024
#define MOTOR_DRIVER_B_END 0x407ff

/*
 * Macros for device 'servo_driver', class 'pwm_motor_driver'
 * The macros are prefixed with 'SERVO_DRIVER_'.
 * The prefix is the slave descriptor.
 */
#define SERVO_DRIVER_COMPONENT_TYPE pwm_motor_driver
#define SERVO_DRIVER_COMPONENT_NAME servo_driver
#define SERVO_DRIVER_BASE 0x40800
#define SERVO_DRIVER_SPAN 1024
#define SERVO_DRIVER_END 0x40bff

/*
 * Macros for device 'camera_data', class 'altera_avalon_onchip_memory2'
 * The macros are prefixed with 'CAMERA_DATA_'.
 * The prefix is the slave descriptor.
 */
#define CAMERA_DATA_COMPONENT_TYPE altera_avalon_onchip_memory2
#define CAMERA_DATA_COMPONENT_NAME camera_data
#define CAMERA_DATA_BASE 0x60000
#define CAMERA_DATA_SPAN 4096
#define CAMERA_DATA_END 0x60fff
#define CAMERA_DATA_ALLOW_IN_SYSTEM_MEMORY_CONTENT_EDITOR 0
#define CAMERA_DATA_ALLOW_MRAM_SIM_CONTENTS_ONLY_FILE 0
#define CAMERA_DATA_CONTENTS_INFO ""
#define CAMERA_DATA_DUAL_PORT 0
#define CAMERA_DATA_GUI_RAM_BLOCK_TYPE AUTO
#define CAMERA_DATA_INIT_CONTENTS_FILE soc_system_camera_data
#define CAMERA_DATA_INIT_MEM_CONTENT 1
#define CAMERA_DATA_INSTANCE_ID NONE
#define CAMERA_DATA_NON_DEFAULT_INIT_FILE_ENABLED 0
#define CAMERA_DATA_RAM_BLOCK_TYPE AUTO
#define CAMERA_DATA_READ_DURING_WRITE_MODE DONT_CARE
#define CAMERA_DATA_SINGLE_CLOCK_OP 0
#define CAMERA_DATA_SIZE_MULTIPLE 1
#define CAMERA_DATA_SIZE_VALUE 4096
#define CAMERA_DATA_WRITABLE 1
#define CAMERA_DATA_MEMORY_INFO_DAT_SYM_INSTALL_DIR SIM_DIR
#define CAMERA_DATA_MEMORY_INFO_GENERATE_DAT_SYM 1
#define CAMERA_DATA_MEMORY_INFO_GENERATE_HEX 1
#define CAMERA_DATA_MEMORY_INFO_HAS_BYTE_LANE 0
#define CAMERA_DATA_MEMORY_INFO_HEX_INSTALL_DIR QPF_DIR
#define CAMERA_DATA_MEMORY_INFO_MEM_INIT_DATA_WIDTH 32
#define CAMERA_DATA_MEMORY_INFO_MEM_INIT_FILENAME soc_system_camera_data

/*
 * Macros for device 'ov7670_camera_0', class 'ov7670_camera'
 * The macros are prefixed with 'OV7670_CAMERA_0_'.
 * The prefix is the slave descriptor.
 */
#define OV7670_CAMERA_0_COMPONENT_TYPE ov7670_camera
#define OV7670_CAMERA_0_COMPONENT_NAME ov7670_camera_0
#define OV7670_CAMERA_0_BASE 0x70000
#define OV7670_CAMERA_0_SPAN 1024
#define OV7670_CAMERA_0_END 0x703ff

/*
 * Macros for device 'modular_sgdma_dispatcher_0_CSR', class 'modular_sgdma_dispatcher'
 * The macros are prefixed with 'MODULAR_SGDMA_DISPATCHER_0_CSR_'.
 * The prefix is the slave descriptor.
 */
#define MODULAR_SGDMA_DISPATCHER_0_CSR_COMPONENT_TYPE modular_sgdma_dispatcher
#define MODULAR_SGDMA_DISPATCHER_0_CSR_COMPONENT_NAME modular_sgdma_dispatcher_0
#define MODULAR_SGDMA_DISPATCHER_0_CSR_BASE 0x80000
#define MODULAR_SGDMA_DISPATCHER_0_CSR_SPAN 32
#define MODULAR_SGDMA_DISPATCHER_0_CSR_END 0x8001f
#define MODULAR_SGDMA_DISPATCHER_0_CSR_IRQ 3
#define MODULAR_SGDMA_DISPATCHER_0_CSR_BURST_ENABLE 0
#define MODULAR_SGDMA_DISPATCHER_0_CSR_BURST_WRAPPING_SUPPORT 0
#define MODULAR_SGDMA_DISPATCHER_0_CSR_DATA_FIFO_DEPTH 32
#define MODULAR_SGDMA_DISPATCHER_0_CSR_DATA_WIDTH 32
#define MODULAR_SGDMA_DISPATCHER_0_CSR_DESCRIPTOR_FIFO_DEPTH 128
#define MODULAR_SGDMA_DISPATCHER_0_CSR_ENHANCED_FEATURES 0
#define MODULAR_SGDMA_DISPATCHER_0_CSR_MAX_BURST_COUNT 2
#define MODULAR_SGDMA_DISPATCHER_0_CSR_MAX_BYTE 1024
#define MODULAR_SGDMA_DISPATCHER_0_CSR_MAX_STRIDE 1
#define MODULAR_SGDMA_DISPATCHER_0_CSR_PROGRAMMABLE_BURST_ENABLE 0
#define MODULAR_SGDMA_DISPATCHER_0_CSR_RESPONSE_FIFO_DEPTH 256
#define MODULAR_SGDMA_DISPATCHER_0_CSR_RESPONSE_PORT 0
#define MODULAR_SGDMA_DISPATCHER_0_CSR_STRIDE_ENABLE 0
#define MODULAR_SGDMA_DISPATCHER_0_CSR_TRANSFER_TYPE Aligned Accesses

/*
 * Macros for device 'modular_sgdma_dispatcher_0_Descriptor_Slave', class 'modular_sgdma_dispatcher'
 * The macros are prefixed with 'MODULAR_SGDMA_DISPATCHER_0_DESCRIPTOR_SLAVE_'.
 * The prefix is the slave descriptor.
 */
#define MODULAR_SGDMA_DISPATCHER_0_DESCRIPTOR_SLAVE_COMPONENT_TYPE modular_sgdma_dispatcher
#define MODULAR_SGDMA_DISPATCHER_0_DESCRIPTOR_SLAVE_COMPONENT_NAME modular_sgdma_dispatcher_0
#define MODULAR_SGDMA_DISPATCHER_0_DESCRIPTOR_SLAVE_BASE 0x81000
#define MODULAR_SGDMA_DISPATCHER_0_DESCRIPTOR_SLAVE_SPAN 16
#define MODULAR_SGDMA_DISPATCHER_0_DESCRIPTOR_SLAVE_END 0x8100f
#define MODULAR_SGDMA_DISPATCHER_0_DESCRIPTOR_SLAVE_BURST_ENABLE 0
#define MODULAR_SGDMA_DISPATCHER_0_DESCRIPTOR_SLAVE_BURST_WRAPPING_SUPPORT 0
#define MODULAR_SGDMA_DISPATCHER_0_DESCRIPTOR_SLAVE_DATA_FIFO_DEPTH 32
#define MODULAR_SGDMA_DISPATCHER_0_DESCRIPTOR_SLAVE_DATA_WIDTH 32
#define MODULAR_SGDMA_DISPATCHER_0_DESCRIPTOR_SLAVE_DESCRIPTOR_FIFO_DEPTH 128
#define MODULAR_SGDMA_DISPATCHER_0_DESCRIPTOR_SLAVE_ENHANCED_FEATURES 0
#define MODULAR_SGDMA_DISPATCHER_0_DESCRIPTOR_SLAVE_MAX_BURST_COUNT 2
#define MODULAR_SGDMA_DISPATCHER_0_DESCRIPTOR_SLAVE_MAX_BYTE 1024
#define MODULAR_SGDMA_DISPATCHER_0_DESCRIPTOR_SLAVE_MAX_STRIDE 1
#define MODULAR_SGDMA_DISPATCHER_0_DESCRIPTOR_SLAVE_PROGRAMMABLE_BURST_ENABLE 0
#define MODULAR_SGDMA_DISPATCHER_0_DESCRIPTOR_SLAVE_RESPONSE_FIFO_DEPTH 256
#define MODULAR_SGDMA_DISPATCHER_0_DESCRIPTOR_SLAVE_RESPONSE_PORT 0
#define MODULAR_SGDMA_DISPATCHER_0_DESCRIPTOR_SLAVE_STRIDE_ENABLE 0
#define MODULAR_SGDMA_DISPATCHER_0_DESCRIPTOR_SLAVE_TRANSFER_TYPE Aligned Accesses

/*
 * Macros for device 'modular_sgdma_dispatcher_0_Response_Slave', class 'modular_sgdma_dispatcher'
 * The macros are prefixed with 'MODULAR_SGDMA_DISPATCHER_0_RESPONSE_SLAVE_'.
 * The prefix is the slave descriptor.
 */
#define MODULAR_SGDMA_DISPATCHER_0_RESPONSE_SLAVE_COMPONENT_TYPE modular_sgdma_dispatcher
#define MODULAR_SGDMA_DISPATCHER_0_RESPONSE_SLAVE_COMPONENT_NAME modular_sgdma_dispatcher_0
#define MODULAR_SGDMA_DISPATCHER_0_RESPONSE_SLAVE_BASE 0x82000
#define MODULAR_SGDMA_DISPATCHER_0_RESPONSE_SLAVE_SPAN 8
#define MODULAR_SGDMA_DISPATCHER_0_RESPONSE_SLAVE_END 0x82007
#define MODULAR_SGDMA_DISPATCHER_0_RESPONSE_SLAVE_BURST_ENABLE 0
#define MODULAR_SGDMA_DISPATCHER_0_RESPONSE_SLAVE_BURST_WRAPPING_SUPPORT 0
#define MODULAR_SGDMA_DISPATCHER_0_RESPONSE_SLAVE_DATA_FIFO_DEPTH 32
#define MODULAR_SGDMA_DISPATCHER_0_RESPONSE_SLAVE_DATA_WIDTH 32
#define MODULAR_SGDMA_DISPATCHER_0_RESPONSE_SLAVE_DESCRIPTOR_FIFO_DEPTH 128
#define MODULAR_SGDMA_DISPATCHER_0_RESPONSE_SLAVE_ENHANCED_FEATURES 0
#define MODULAR_SGDMA_DISPATCHER_0_RESPONSE_SLAVE_MAX_BURST_COUNT 2
#define MODULAR_SGDMA_DISPATCHER_0_RESPONSE_SLAVE_MAX_BYTE 1024
#define MODULAR_SGDMA_DISPATCHER_0_RESPONSE_SLAVE_MAX_STRIDE 1
#define MODULAR_SGDMA_DISPATCHER_0_RESPONSE_SLAVE_PROGRAMMABLE_BURST_ENABLE 0
#define MODULAR_SGDMA_DISPATCHER_0_RESPONSE_SLAVE_RESPONSE_FIFO_DEPTH 256
#define MODULAR_SGDMA_DISPATCHER_0_RESPONSE_SLAVE_RESPONSE_PORT 0
#define MODULAR_SGDMA_DISPATCHER_0_RESPONSE_SLAVE_STRIDE_ENABLE 0
#define MODULAR_SGDMA_DISPATCHER_0_RESPONSE_SLAVE_TRANSFER_TYPE Aligned Accesses


#endif /* _ALTERA_HPS_0_H_ */
