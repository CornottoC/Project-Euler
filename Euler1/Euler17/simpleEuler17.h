#pragma once
#include <string>
#include <vector>
class simpleEuler17
{
public:
	simpleEuler17();
	~simpleEuler17();
	void populateWordAndLength();
	int calculateSum(int);
	int singles(int);
	int teens(int);
	int underHundred(int);
	int overHundred(int);
private:
	std::vector<std::string> words;
	std::vector<int> wordsLenght;
};

