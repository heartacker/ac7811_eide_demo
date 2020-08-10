#include "system_ac78xx.h"
#include "ac78xx.h"
#include "ac78xx_uart.h"
#include "ac78xx_debugout.h"
#include "ac78xx_adc.h"
#include "ac78xx_timer.h"

uint32_t cnt = 0;
int main(int argc, char const *argv[])
{
    InitDelay();
    InitDebug();
    printf("Hello World\n");
    printf("Welcome to the VSCode\n");
    printf("Welcome to the EIDE\n");
    ADC_Type adcx;
    ADC_InitType adcConfig;
    ADC_Init(&adcx, &adcConfig);
    while (1)
    {
        while (cnt--==0)
        {
            printf("time\n");
        }
    }
}
