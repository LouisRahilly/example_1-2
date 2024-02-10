#include "mbed.h"
#include "arm_book_lib.h"

#define DUTY_MIN 0.03
#define DUTY_MAX 0.115
#define periodt 0.02
#define wait 2000

PwmOut servo(PF_9);

int main()
{
    servo.write(DUTY_MIN);
    servo.period(periodt);
    while(true){
        servo.write(DUTY_MIN);
        delay( wait );
        servo.write(DUTY_MAX);
        delay( wait );
    }

}