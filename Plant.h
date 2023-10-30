#ifndef PLANT_H
#define PLANT_H
#include <string>
class Soil;
class Seed;

class Plant{
protected:
	//Descriptor of the hydration state
	std::string m_hydration{};
	//Descriptor of the plant type
	std::string m_type{};
	//Boolean for plant life status, true is alive
	bool m_status{};
	//Variables for water content by unit and size of plant.
	int m_water{}, m_size{};
	//Soil associated with the plant
	Soil* m_soil;
	//Seed associated with the plant
	Seed* m_seed;

public:
	//constructor, destructor
	Plant(Soil* soil, Seed* seed);
	~Plant();
	//getters
	int getPlantWater();
	int getPlantSize();
	std::string getPlantHydration();
	std::string getPlantType();
	bool getPlantStatus();
	Soil* getPlantSoil();
	Seed* getPlantSeed();
	//setters
	void setPlantWater(int amount);
	void setPlantSize(int size);
	void setPlantHydration(std::string level);
	void setPlantType(std::string type);
	void setPlantStatus(bool status);
	void setPlantSoil(Soil* soil);
	void setPlantSeed(Seed* seed);
	//Takes water from soil to plant, adjusting water level in both
	void drink(Soil* soilPtr);
};

#endif
