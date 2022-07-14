#include "inc/led.hpp"


int main()
{
    Led led;
    while (true)
    {
        led.Led_toggle();
    }
    
    return 0;
}
