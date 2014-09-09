#include <cstring>

bool ExOH(const char* str)
{
	char target = 'x';
	int stringSize = strlen(str);

	int timesMet = 0;
	for(int i=0; i <= stringSize-1; ++i)
		if(str[i] == target)
			++timesMet;

	return (stringSize - timesMet) == timesMet;
}