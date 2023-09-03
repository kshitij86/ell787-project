/*
 * SPDX-FileCopyrightText: 2010-2022 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: CC0-1.0
 */

#include <stdio.h>
#include "wifi_module.h"

void app_main(void)
{
    printf("Welcome to the Indoor Environment Monitoring System and Smart Clock!\n");
    wifi_module_post_test();
    fflush(stdout);
}
