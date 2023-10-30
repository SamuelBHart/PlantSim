#include "Soil.h"
#include "Plant.h"
#include "Seed.h"
#include <iostream>

//constructor
Soil::Soil() {

    setSoilWater(0);
	setSoilHydration("parched");
}
//destuctor
Soil::~Soil() = default;
//get the water level
int Soil::getSoilWater() {
	return m_water;
}
//get the hydration state
std::string Soil::getSoilHydration() {
	return m_hydration;
}
//set the water level
void Soil::setSoilWater(int amount) {
	m_water = amount;
}
//set the hydration state
void Soil::setSoilHydration(std::string level) {
	m_hydration = "parched";
}
//Increment plant soil water by 1 unit, or state saturation->
//level
void Soil::waterSoil() {
    switch (this->getSoilWater())
    {
    case 0:
        setSoilWater(getSoilWater() +1);
        setSoilHydration("damp");
        return;
    case 1:
        setSoilWater(getSoilWater() + 1);
        setSoilHydration("damp");
        return;
    case 3:
        setSoilWater(getSoilWater() + 1);
        setSoilHydration("damp");
        return;
    case 4:
        setSoilWater(getSoilWater() + 1);
        setSoilHydration("damp");
        return;
    case 5:
        setSoilWater(getSoilWater() + 1);
        setSoilHydration("damp");
        return;
    case 6:
        setSoilWater(getSoilWater() + 1);
        setSoilHydration("damp");
        return;
    case 7:
        setSoilWater(getSoilWater() + 1);
        setSoilHydration("damp");
        return;
    case 8:
        setSoilWater(getSoilWater() + 1);
        setSoilHydration("saturated");
        return;
    case m_waterMax:
        std::cout << "Water is " + m_hydration;
        return;
    default:
        std::cout << "Water is " + m_hydration;
        return;
    }
}
//Takes seed and instantiates plant
Plant* Soil::plantSeed(Seed* seed) {
    try {
        if (getSoilWater() > 2) {
            setSoilWater(getSoilWater() - 1);
            Plant* thePlant = new Plant(this, seed);
            return thePlant;
        }
        else {
            throw(getSoilHydration());
        }
    }
    catch(std::string hydrationState) {
        std::cout << "Soil is " + hydrationState + ", try watering more";
    }
}