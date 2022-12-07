#pragma once
#include <iostream>
#include "Animal.h"
class Cow : public Animal
{
public:
	Cow(); //constuctor for cow object declared in header

	virtual void speak(void); //virtual function for allowing dynamic dispatch

};

