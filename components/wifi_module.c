#include <stdio.h>
#include "esp_wifi.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_chip_info.h"
#include "esp_system.h"
#include "esp_mac.h"

#define BORDER "-----------------------------------------------------------\n"
#define ESP32_MAC_READ_SUCCESS "Successfully read the MAC address on chip\n"
#define ESP32_MAC_READ_FAILED "Unsuccessfully read the MAC address on chip\n"

void int_to_hex(int chip_id){
    /* to convert the given integer into a hex format*/
    int x = chip_id;
    int a , b;
    a=x/16;
    b=x%16;
    if(a<10)
    printf("%d", a);
    else printf("%c",'A'+a-10);
    if(b<10)
    printf("%d", b);
    else printf("%c",'A'+b-10);
}

//Expected value - 212::212::218::90::175::104
const uint8_t ESP_MAC_BASE_STORED[] = {212, 212, 218, 90, 175, 104};

bool check_mac(uint8_t* chipid){
    //check with ESP_MAC_BASE_STORED
    for(int i=0; i<6; i++){
        if(chipid[i] != ESP_MAC_BASE_STORED[i]){
            // printf("%d, %d\n", chipid[i], ESP_MAC_BASE_STORED[i]);
            return 0;
        }
    }
    return 1;
}

void wifi_module_post_test(){
    printf(BORDER);
    printf("ESP32 chip Wi-Fi Module POST TEST: \n");
    printf("The output for the esp32 Wi-Fi module POST test is below: \n");
    esp_chip_info_t chip_info;
    esp_chip_info(&chip_info);
    uint8_t chipid[6];
    // enum esp_mac_type_t type;
    esp_err_t err= esp_read_mac(chipid,  ESP_MAC_WIFI_STA);
    if(err == ESP_OK && check_mac(chipid) == 1){
        printf(ESP32_MAC_READ_SUCCESS);
        printf("The MAC address is: \n");
        for(int i=0; i<6; i++){
            int_to_hex(chipid[i]);  
            if(i < 5){
                printf("::");
            }
        }
        printf("\n");
    } else {
        printf(ESP32_MAC_READ_FAILED);
    }
    printf(BORDER);
}