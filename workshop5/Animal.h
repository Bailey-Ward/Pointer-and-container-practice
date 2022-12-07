#pragma once
#include <iostream>
class Animal
{
public:
	Animal(); //constuctor for animal object declared in header

	virtual void speak(void); //virtual function for allowing dynamic dispatch
};

