#pragma once
#include <iostream>
#include "Animal.h"
class Sheep : public Animal
{
public:
	Sheep(); //constuctor for sheep object declared in header

	virtual void speak(void); //virtual function for allowing dynamic dispatch
};

