/*
file   : common.h
author : shentq
version: V1.1
date   : 2016/4/6

Copyright 2015 shentq. All Rights Reserved.

Copyright Notice
No part of this software may be used for any commercial activities by any form or means, without the prior written consent of shentq.

Disclaimer
This specification is preliminary and is subject to change at any time without notice. shentq assumes no responsibility for any errors contained herein.
*/
#ifndef __EBOX_COMMON_H
#define __EBOX_COMMON_H

#include "ebox_core.h"                  
#include "ebox_gpio.h"

#define EBOX_VERSION "16.04.19"

#define EOK         0
#define EWAIT       1
#define EBUSY       2
#define ETIMEOUT    3
#define EPARA       4
#define E2LONG      5
#define EOTHER      128

////////�궨��/////////////////////////////////


#define true 0x1
#define false 0x0

#define HIGH 0x1
#define LOW  0x0


#define LSB_FIRST 0
#define MSB_FIRST 1

#define PI 3.1415926535898




void        ADC1_init(void);

uint16_t	analog_read(Gpio *pin);
uint16_t	analog_read_voltage(Gpio *pin);

void        shift_out(Gpio *data_pin, Gpio *clock_pin, uint8_t bit_order, uint8_t val);
uint8_t		shift_in(Gpio *data_pin, Gpio *clock_pin, uint8_t bit_order);

void        random_seed(uint16_t seed);
uint16_t    random();
uint16_t    random(uint16_t max);
uint16_t    random(uint16_t min, uint16_t max);



#endif