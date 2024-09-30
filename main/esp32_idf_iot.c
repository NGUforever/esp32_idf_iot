#include <stdio.h>
#include "driver/gpio.h"

void gpio_hal_config(void)
{
    gpio_config_t gpio_param;

    gpio_param.mode = GPIO_MODE_OUTPUT;
    gpio_param.pull_down_en = GPIO_PULLDOWN_DISABLE;
    gpio_param.pull_up_en = GPIO_PULLUP_ENABLE;
    gpio_param.intr_type = GPIO_INTR_DISABLE;
    gpio_param.pin_bit_mask = 1 << GPIO_NUM_2;
    gpio_config(&gpio_param);
}

int app_main(void)
{
    printf("hello world\n");
    gpio_hal_config();
    return 0;
}