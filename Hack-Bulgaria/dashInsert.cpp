#include <string>

bool isOdd(int number)
{
	return number % 2;
}

std::string dashInsert(int number)
{
	std::string result;
	std::string numberString = std::to_string(number);
	int stringSize = numberString.size();
	char charToInsert = '-';

	result.push_back(numberString[0]);
	for(int i=1; i <= stringSize-1; ++i)
	{
		if(isOdd(numberString[i-1]) && isOdd(numberString[i]))
			result.push_back(charToInsert);

		result.push_back(numberString[i]);
		
	}
	return result;
}