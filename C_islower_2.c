#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char a = 'a'; // 초기화

	if (islower(a) == 0)
		printf("대문자입니다.\n");
	else
		printf("소문자입니다.\n");

	return 0;
}
