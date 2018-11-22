#include"Chess.h"

void menu()
{
	printf("***************************\n");
	printf("****   Welcome Chess   ****\n");
	printf("***************************\n");
	printf("****  1.play   0.exit  ****\n");
	printf("***************************\n");
}


void test()
{
	int input = 0;
	scanf("&d", &input);
	do
	{
		menu();
		switch (input)
		{
		case 1:
			Game();
			break;
		case 0:
			printf("Exit!!!\n");
			break;
		default:
			printf("Please enter again:\n");
			break;
		}

	} while (input);
}

int main()
{
	test();
	return 0;
}