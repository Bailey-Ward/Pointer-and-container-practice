#pragma once
#include <iostream>
#include "cow.h"
class Frisian: public Cow
{
public:
	Frisian(); //constuctor for frisian object declared in header

	virtual void speak(void); //virtual function for allowing dynamic dispatch
};

