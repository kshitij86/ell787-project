/*
 * SPDX-FileCopyrightText: 2010-2022 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: CC0-1.0
 */

#include<stdio.h>
#include "esp32_module.h"

void app_main(void)
{
    printf("Welcome to the Indoor Environment Monitoring System and Smart Clock!\n");
    esp32_post_test(); //The Power-On Self Test for the esp32 microcontroller
    fflush(stdout);
}
