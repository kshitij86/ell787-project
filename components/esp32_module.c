#include "esp32_module.h"
#include <stdio.h>
#include <inttypes.h>
#include "sdkconfig.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_chip_info.h"
#include "esp_system.h"

#define BORDER "-----------------------------------------------------------\n"
#define ESP32_MAC_READ_SUCCESS "Successfully read the MAC address on chip\n"
#define ESP32_MAC_READ_FAILED "Unsuccessfully read the MAC address on chip\n"
#define ESP32_CORE_ID_READ_SUCCESS "Successfully read the core id of the CPU core on which this function is running\n"

void esp32_post_test(){
    printf(BORDER);
    printf("ESP32 chip POST TEST: \n");
    printf(ESP32_CORE_ID_READ_SUCCESS);
    int core_id = esp_cpu_get_core_id();
    printf("The CPU core's ID is: %d\n", core_id);
    printf(BORDER);
}