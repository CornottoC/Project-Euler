#pragma once
#include <string>
#include <vector>
class simpleEuler17
{
public:
	simpleEuler17();
	~simpleEuler17();
	void populateWordAndLength();
private:
	std::vector<std::string> words;
	std::vector<int> wordsLenght;
};

