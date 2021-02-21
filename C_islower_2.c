#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char a = 'a'; // 초기화

	if (islower(a) == 0)
		printf("대문자입니다.\n");
	else
		printf("소문자입니다.\n"); // 대문자인지 소문자인지 확인해서 알맞게 출력하기

	return 0;
}
