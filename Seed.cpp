#include "Seed.h"
#include <random>

//constructor
Seed::Seed() {
	setType(typeSelector());
	setTypesVector();
}
//destructor
Seed::~Seed() = default;
//gets the type
std::string Seed::getType() {
	return m_type;
}
//gets the types vector
std::vector<std::string> Seed::getTypesVector() {
	return m_typesVector;
}
//sets the type
void Seed::setType(std::string type) {
	m_type = type;
}
//sets the type vector
void Seed::setTypesVector() {
	std::vector<std::string> vector(4);
	m_typesVector = vector;
	for (int i = 0; i < vector.size(); i++) {
		m_typesVector.push_back("Plant");
	}
}
//picks the type of seed randomly
std::string Seed::typeSelector() {
	std::random_device rd; // obtain a random number from hardware
	std::mt19937 gen(rd()); // seed the generator
	std::uniform_int_distribution<> distr(1, 4); // define the range
	int num = distr(gen);
	std::string type = m_typesVector[num];
	return type;
}