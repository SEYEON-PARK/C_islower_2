#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char a = 'a';

	if (islower(a) == 0)
		printf("대문자입니다.\n");
	else
		printf("소문자입니다.\n");

	return 0;
}