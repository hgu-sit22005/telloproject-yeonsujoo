#pragma once

#include "TelloPro.h"
#include <cstring>

class Takeoff: public TelloPro
{
public:
	Takeoff();
	Takeoff(int _value);

public:
	double get_delay();
};