#ifndef SOIL_H
#define SOIL_H
#include <string>
class Seed;
class Plant;

class Soil {
 private:
	 //amount of water in the soil and the capacity
	 int m_water{}; 
	 static const int m_waterMax{ 9 };
	 //hydration state
	 std::string m_hydration{};
	 

public:
	//constructors
	Soil();
	~Soil();
	//getters
	int getSoilWater();
	std::string getSoilHydration();
	//setters
	void setSoilWater(int amount);
	void setSoilHydration(std::string level);
	//increments member water level by 1 unit or if full, returns full message to user
	void waterSoil();
	//Plants the seed, instantiating the plant
	Plant* plantSeed(Seed* seed);
};

#endif


