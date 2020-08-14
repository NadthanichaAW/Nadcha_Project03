#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int x;
	scanf("%d", &x);
	if (x % 3 != 0 && x % 5 != 0 && x % 7 != 0)
	{
		printf("0");
	}
	else if (x % 5 == 0 && x % 7 == 0 && x % 3 == 0)
	{
		printf("7");
	}
	else if (x % 3 == 0)
	{
		if (x % 3 == 0 && x % 5 == 0)
		{
			printf("3");
		}
		else if (x % 3 == 0 && x % 7 == 0)
		{
			printf("5");
		}
		else
			printf("1");
	}
	else if (x % 5 == 0)
	{
		if (x % 5 == 0 && x % 7 == 0)
		{
			printf("6");
		}
		else
			printf("2");
	}
	else if (x % 7 == 0)
	{
		printf("4");
	}

	return 0;
}