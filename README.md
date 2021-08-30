# TARGET_NUCLEO_F722ZE
Custom board target to Mbed

This board has no ETH support, need edit the file\
"mbed-os/connectivity/drivers/emac/TARGET_STM/TARGET_STM32F7/stm32f7_eth_conf.c"\
in your project to avoid errors

See example modification in:\
<https://github.com/marceloh220/NUCEO_F722ZE_MBEDOS/blob/main/mbed-os/connectivity/drivers/emac/TARGET_STM/TARGET_STM32F7/stm32f7_eth_conf.c>

This board has no SPI6 support, need edit the file\
"mbed-os/targets/TARGET_STM/TARGET_STM32F7/spi_api.c"
in your project

See example in:\
<https://github.com/marceloh220/NUCEO_F722ZE_MBEDOS/blob/main/mbed-os/targets/TARGET_STM/TARGET_STM32F7/spi_api.c>
