#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char a = 'a';

	if (islower(a) == 0)
		printf("�빮���Դϴ�.\n");
	else
		printf("�ҹ����Դϴ�.\n");

	return 0;
}