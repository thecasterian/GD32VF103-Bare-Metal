#include <stdint.h>

int main(void) {
    uint32_t a = 0xdeadbeef;

    volatile uint32_t cnt = 0;
    while (1) {
        cnt++;
    }
}
