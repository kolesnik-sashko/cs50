#include "gwindow.h"

int main(void)
{
    Gwindow window = newGwindow(320, 240);
    pause(5000);
    
    closeGwindow(window);
    return 0;
}
