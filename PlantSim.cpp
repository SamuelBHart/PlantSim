#include<iostream>
#include<fstream>
#include "Plant.h"
#include "Soil.h"
#include "Seed.h"

Soil user_soil;
Seed user_seed;
std::string user_input;

Soil dig() {
	Soil theSoil = Soil();
	std::cout << "The soil has been instantiated";
	return theSoil;
}
Seed forage() {
	Seed theSeed = Seed();
	std::cout << "The seed has been instantiated";
	return theSeed;
}

int main() {
	while (user_input != "exit") {
		user_soil = dig();
		user_seed = forage();
		std::cin >> user_input;
	}
	return 0;
}

