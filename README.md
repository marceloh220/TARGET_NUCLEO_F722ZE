# TARGET_NUCLEO_F722ZE
Custom board target to Mbed

This board has no ETH support, need edit the file\
"mbed-os/connectivity/drivers/emac/TARGET_STM/TARGET_STM32F7/stm32f7_eth_conf.c"\
in your project to avoid errors

See example modification in:\
<https://github.com/marceloh220/NUCEO_F722ZE_MBEDOS/blob/main/mbed-os/connectivity/drivers/emac/TARGET_STM/TARGET_STM32F7/stm32f7_eth_conf.c>
