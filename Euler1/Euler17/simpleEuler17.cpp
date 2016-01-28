#include "stdafx.h"
#include "simpleEuler17.h"
#include <iostream>


simpleEuler17::simpleEuler17()
{
}


simpleEuler17::~simpleEuler17()
{
}

void simpleEuler17::populateWordAndLength()
{

	if (words.size() == 0) {
		words.push_back("Zero");
		words.push_back("One");
		words.push_back("Two");
		words.push_back("Three");
		words.push_back("Four");
		words.push_back("Five");
		words.push_back("Six");
		words.push_back("Seven");
		words.push_back("Eigth");
		words.push_back("Nine");
		words.push_back("Ten");
		words.push_back("Eleven");
		words.push_back("Twelve");
		words.push_back("Thirteen");
		words.push_back("Fourteen");
		words.push_back("Fifteen");
		words.push_back("Sixteen");
		words.push_back("Seventeen");
		words.push_back("Eighteen");
		words.push_back("Nineteen");
		words.push_back("Twenty"); //20
		words.push_back("Thirty");
		words.push_back("Forty");
		words.push_back("Fifty");
		words.push_back("Sixty");
		words.push_back("Seventy");
		words.push_back("Eighty");
		words.push_back("Ninety");
		words.push_back("Hundered"); //28
		words.push_back("And"); //29
	}
	if (wordsLenght.size() == 0) {
		for (int i=0; i < words.size(); i++) {
			wordsLenght.push_back(words[i].length());
			std::cout << words[i] << "\t\t" << wordsLenght[i]<<std::endl;
		}
	}

}

void simpleEuler17::calculate()
{
	int sumOfLetters=0;
	std::string temp;
	std::string teen;
	std::string single;
	for (int i = 1; i <= 1000; i++) {
		if (i < 20) {
			sumOfLetters += singles(i);
		}
		else if (i < 100) {
			temp = std::to_string(i);
			teen = temp[0];
			single = temp[1];
			sumOfLetters += teens(std::stoi(teen));
			sumOfLetters += singles(std::stoi(single));

			
		}
		else
		{
			temp = std::to_string(i);

		}
	}
}

int simpleEuler17::singles(int i)
{
	int tmp = 0;
	switch (i)
	{
	case 1: tmp = wordsLenght[1]; break;
	case 2: tmp = wordsLenght[2]; break;
	case 3: tmp = wordsLenght[3]; break;
	case 4: tmp = wordsLenght[4]; break;
	case 5: tmp = wordsLenght[5]; break;
	case 6: tmp = wordsLenght[6]; break;
	case 7: tmp = wordsLenght[7]; break;
	case 8: tmp = wordsLenght[8]; break;
	case 9: tmp = wordsLenght[9]; break;
	case 10: tmp = wordsLenght[10]; break;
	case 11: tmp = wordsLenght[11]; break;
	case 12: tmp = wordsLenght[12]; break;
	case 13: tmp = wordsLenght[13]; break;
	case 14: tmp = wordsLenght[14]; break;
	case 15: tmp = wordsLenght[15]; break;
	case 16: tmp = wordsLenght[16]; break;
	case 17: tmp = wordsLenght[17]; break;
	case 18: tmp = wordsLenght[18]; break;
	case 19: tmp = wordsLenght[19]; break;
	default:
		break;
	}
	return tmp;
}

int simpleEuler17::teens(int i)
{
	int tmp = 0;
	switch (i)
	{
	case 2: tmp = wordsLenght[20]; break;
	case 3: tmp = wordsLenght[21]; break;
	case 4: tmp = wordsLenght[22]; break;
	case 5: tmp = wordsLenght[23]; break;
	case 6: tmp = wordsLenght[24]; break;
	case 7: tmp = wordsLenght[25]; break;
	case 8: tmp = wordsLenght[26]; break;
	case 9: tmp = wordsLenght[27]; break;
	default:
		break;
	}
	return tmp;
}

int simpleEuler17::hundereds(int i)
{

}

int simpleEuler17::underHundred(int)
{
	int sumOfLettesToreturn = 0;
	std::string temp;
	std::string teen;
	std::string single;
	for (int i = 1; i <= 1000; i++) {
		if (i < 20) {
			sumOfLettesToreturn += singles(i);
		}
		else if (i < 100) {
			temp = std::to_string(i);
			teen = temp[0];
			single = temp[1];
			sumOfLettesToreturn += teens(std::stoi(teen));
			sumOfLettesToreturn += singles(std::stoi(single));


		}
		else
		{
			temp = std::to_string(i);

		}
	}
}
