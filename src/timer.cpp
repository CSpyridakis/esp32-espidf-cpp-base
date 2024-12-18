#include "timer.hpp"
#include "dummy_header.hpp"

int timer = 0;

void print_timer() {
    printf("%d\n", value(timer));
    vTaskDelay(1000/ portTICK_PERIOD_MS);
    timer++;
}