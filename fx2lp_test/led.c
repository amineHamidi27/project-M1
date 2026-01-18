#include "fx2regs.h"
#include "fx2macros.h"
#include "delay.h"

void main(void)
{
    OEA = 0x03;       // PA0 & PA1 output
    IOA |= 0x03;      // LEDs off

    // USB initialization
    CPUCS = 0x00;     // 48 MHz clock
    delay(300);       // required after certain register writes
    REVCTL = 0x03;    // enable USB pull-up (signals host)

    while (1)
    {
        IOA ^= 0x01;  // toggle PA0
        IOA ^= 0x02;  // toggle PA1

        for (volatile int i = 0; i < 50000; i++); // crude delay ~1s
    }
}
