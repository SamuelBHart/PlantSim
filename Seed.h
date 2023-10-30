#ifndef SEED_H
#define SEED_H
#include <string>
#include <vector>

class Seed
{
protected:
	std::string m_type{};
	std::vector<std::string> m_typesVector;
public:
	//constructor
	Seed();
	//destructor
	~Seed();
	//get the type
	std::string getType();
	//get the types vector
	std::vector<std::string> getTypesVector();
	//set the type
	void setType(std::string type);
	//sets the types array
	void setTypesVector();
	//selects type of seed randomly
	std::string typeSelector();
};

#endif