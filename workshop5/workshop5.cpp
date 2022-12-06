#include <iostream>
#include <vector>
#include <string>


class Animal
{
public:
	virtual void speak(void) = 0;
};

class Sheep : public Animal
{
public:
	void speak(void) {
		std::cout << "Sheep says: \t\tbaa!" << std::endl;
	}
};

class Cow : public Animal
{
public:
	void speak(void) {
		std::cout << "Cow says: \t\tmoo!" << std::endl;
	}
};

class Frisian : public Cow
{
public:
	void speak(void) {
		std::cout << "Frisian Cow says: \tmoo (in black and white)!" << std::endl;
	}
};


int main()
{
	Animal* cow = new Cow();
	Animal* fris = new Frisian();
	Animal* sheep = new Sheep();
	std::vector<Animal*> container;
	char choice;
	bool start = false;

	while (!start) {
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

	for (int a = 0; a < container.size(); a++)
	{
		container[a]->speak();
	}
}


