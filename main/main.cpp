#include <stdio.h>
#include <inttypes.h>
#include "sdkconfig.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

// #include "dummy_class.hpp"
#include "dummy_header.hpp"

extern "C" {
    void app_main(void) {
        printf("Hello\n");
        printf("Header %d\n", DUMMY_HEADER_VERSION);

        int timer = 0;
        while(true){
            printf("%d\n", timer);
            vTaskDelay(1000/ portTICK_PERIOD_MS);
            // timer++;
            // timer = DummyClass::add_nums(timer, 1);
        }
    }
}