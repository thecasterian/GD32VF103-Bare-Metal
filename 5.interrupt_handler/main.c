#include "gd32vf103.h"

#define UNIMP

int main(void) {
#if defined(UNIMP)
    __asm__ volatile ("unimp");
#elif defined(ECALL)
    __asm__ volatile ("ecall");
#elif defined(MISALIGN)
    int arr[10];
    *(int *)((char *)arr + 1) = 42;
#else
    #error "Please select the exception source"
#endif

    while (1) {}
}
