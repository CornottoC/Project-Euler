#pragma once
#include <vector>
#include <string>
class simpleEuler22
{
public:
	simpleEuler22();
	~simpleEuler22();
	//reads file into vector and sorts it
	void readFileAndPopulate(std::string file = "name");
	int nameValue(std::string);
	void totVecValue();
	void lookForName(std::string);
private:
	std::vector <std::string> nameVector;
};

