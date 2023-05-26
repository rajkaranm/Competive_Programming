#include <stdio.h>
#include <string.h>


char result[20];

int smallest(char **strs, int strsSize)
{
	char *temp;
	for (int i = 0; i < strsSize - 1; ++i)
	{
		if (strlen(strs[i]) >= strlen(strs[i+1]))
		{
			temp = strs[i+1];
		}
	}
	return strlen(temp);
}

char *longestCommonPrefix(char **strs, int strsSize)
{

	for (int i = 0; i < smallest(strs, strsSize); ++i)
	{
		char current = *(strs[i]+i);
		
        for (int j = 1; j < strsSize; j++)
        {
            if (*(strs[j]+i) != current)
            {
                return result;
            }
        }
        strncat(result, &current, 1);
	}
    return result;
}



int main()
{
	char *string_database[3] = {"car", "hero", "zea"};

    char *p = longestCommonPrefix(string_database, 3);

    printf("%s\n", result);

	return 0;
}
