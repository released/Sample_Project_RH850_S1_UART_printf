# Sample_Project_RH850_S1_UART_printf
Sample_Project_RH850_S1_UART_printf

update @ 2025/04/29

1. base on EVM : Y-ASK-RH850F1KM-S1-V3 , initial below function

- TAUJ0_0 : timer interval for 1ms interrupt

- UART : RLIN3 (TX > P10_10 , RX > P10_9) , for printf and receive from keyboard

- LED : LED18 > P0_14 , LED17 > P8_5 , toggle per 1000ms
 
2. below is log message :

press 1 ~ 5 (although function not implement under loop) , to printf message 

![image](https://github.com/released/Sample_Project_RH850_S1_UART_printf/blob/main/log.jpg)


