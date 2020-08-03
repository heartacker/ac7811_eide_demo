#include "system_ac78xx.h"
#include "ac78xx.h"
#include "ac78xx_uart.h"
#include "ac78xx_debugout.h"

int main(int argc, char const *argv[])
{
    InitDelay();
    InitDebug();
    printf("Hello World");
    while (1)
    {
        ;
    }
}
