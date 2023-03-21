#include <stdio.h>
#include "pico/stdlib.h"

int main() {
    int counter = 0;
    stdio_init_all();
    while (true) {
        printf("Hello, world! %d\n", counter++);
        sleep_ms(1000);
    }
    return 0;
}
