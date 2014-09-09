#include <cstring>

bool ABCheck(const char* str)
{
	int stringSize = strlen(str);

	for(int i=0; i <= stringSize-1; ++i)
		if(str[i] == 'a')
			if(i+4 <= stringSize-1 && str[i+4] == 'b')
				return true;

	return false;
}