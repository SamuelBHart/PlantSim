#include "Plant.h"
#include "Soil.h"
#include "Seed.h"
#include <iostream>

//plant constructor, destructor
Plant::Plant(Soil* soil, Seed* seed) {
	setPlantSize(1);
	setPlantWater(1);
	setPlantHydration("damp");
	setPlantType(seed->getSeedType());
	setPlantStatus(true);
	setPlantSoil(soil);
	setPlantSeed(seed);
}
Plant::~Plant() = default;

//plant member fcns
///getters
int Plant::getPlantSize() {
	return m_size;
}
int Plant::getPlantWater() {
	return m_water;
}
std::string Plant::getPlantHydration() {
	return m_hydration;
}
std::string Plant::getPlantType() {
	return m_type;
}
bool Plant::getPlantStatus() {
	return m_status;
}
Soil* Plant::getPlantSoil() {
	return m_soil;
}
Seed* Plant::getPlantSeed() {
	return m_seed;
}
///setters
void Plant::setPlantSize(int size) {
	m_size = size;
}
void Plant::setPlantWater(int amount) {
	m_water = amount;
}
void Plant::setPlantHydration(std::string level) {
	m_hydration = level;
}
void Plant::setPlantType(std::string type) {
	m_type = type;
}
void Plant::setPlantStatus(bool status) {
	m_status = status;
}
void Plant::setPlantSoil(Soil* soilPtr) {
	m_soil = soilPtr;
}
void Plant::setPlantSeed(Seed* seedPtr) {
	m_seed = seedPtr;
}
//Increments the plant water amount while decrementing the soil water amount
void Plant::drink(Soil* soilPtr) {
	try {
		if (soilPtr->getSoilWater() > 0) {
			getPlantSoil()->setSoilWater(getPlantSoil()->getSoilWater() - 1);
			
		}
		else {
			throw(getPlantSoil()->getSoilHydration());
		}
	}
	catch (std::string soilHydration) {
		std::cout << "The soil is " + soilHydration + ". Try watering!";
	}
}

