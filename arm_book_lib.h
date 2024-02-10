//=====[#include guards - begin]===============================================

#ifndef _ARM_BOOK_LIB_H_
#define _ARM_BOOK_LIB_H_

//=====[Libraries]=============================================================

#include <mbed.h>

//=====[Declaration of public defines]=========================================

#define DUTY_MIN 0.025
#define DUTY_MAX 0.125
#define delay(ms)      thread_sleep_for( ms )
//=====[#include guards - end]=================================================

#endif // _ARM_BOOK_LIB_H_