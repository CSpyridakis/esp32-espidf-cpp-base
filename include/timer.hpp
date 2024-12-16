#ifndef TIMER_HPP
#define TIMER_HPP

#include <stdio.h>
#include <inttypes.h>
#include "sdkconfig.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

#ifdef __cplusplus
extern "C" {
#endif  

void print_timer();

#ifdef __cplusplus
}
#endif  

#endif //TIMER_HPP