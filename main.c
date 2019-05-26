#include <stdio.h>
#include <stdint.h>
#include <mem.h>

int8_t	is_unique_symbols(const char *str)
{
	int8_t buff[256] = {0};

	if (!str || !*str)
		return (0);
	while (*str)
	{
		buff[*str]++;
		if (buff[*str++] > 1)
			return (0);
	}
	return (1);
}

int main()
{
	int8_t buff[256] = {0};

	char *str_1 = "abcdefg ";	//	true
	char *str_2 = "abcafg";		//	false
	char *str_3 = " Try   ";	//	false
	char *str_4 = " ";			//	true
	char *str_5 = "";			//	false

	is_unique_symbols(str_1) ? printf("true\n") : printf("false\n");
	return 0;
}