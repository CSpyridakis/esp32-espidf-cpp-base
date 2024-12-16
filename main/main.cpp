#include <stdio.h>
#include <inttypes.h>
#include "sdkconfig.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

// #include "dummy_class.hpp"
#include "dummy_header.hpp"
#include "timer.hpp"

extern "C" {
    void app_main(void) {
        printf("Hello\n");
        printf("Header %d\n", DUMMY_HEADER_VERSION);

        while(true){
            print_timer();
        }
    }
}