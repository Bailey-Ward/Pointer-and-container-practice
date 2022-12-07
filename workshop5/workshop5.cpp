#include <iostream>
#include <vector>
#include <string>
#include "Animal.h"
#include "cow.h"
#include "frisian.h"
#include "sheep.h"


int main()
{
	Animal* cow = new Cow(); //base class pointers for allowing user input to determine which object is initalised 
	Animal* fris = new Frisian();
	Animal* sheep = new Sheep();
	std::vector<Animal*> container; //container vector which holds animal pointer type objects
	char choice;
	bool start = false;

	while (!start) { //while loop with switch/case for menu
	std::cout << "Enter C, F, or S to add Cow, Frisian, Or Sheep to the container" << std::endl;
	std::cout << "Alternatively, press e to exit" << std::endl;
	std::cin >> choice;
		switch (choice) {
			case 'c':
				container.push_back(cow);
				break;

			case 'f':
				container.push_back(fris);
				break;

			case 's':
				container.push_back(sheep);
				break;

			case 'e':
				start = true;
				break;

			default:
				"Invalid Input";
				break;
			}
	}

	for (int a = 0; a < container.size(); a++) //iterates through container and prints when the while loop is exited
	{
		container[a]->speak(); // -> is used because pointers are used
	}
}


