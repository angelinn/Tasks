#include <cstring>

bool ABCheck(const char* str)
{
	int stringSize = strlen(str);

	for(int i=0; i <= stringSize-1; ++i)
		if(str[i] == 'a')
			if(str[i+4] == 'b')
				return true;

	return false;
}