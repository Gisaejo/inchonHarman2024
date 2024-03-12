#include <stdio.h>
#include <conio.h>

int test01(); // 
void test02(int a);

main()
{
	//twst01();
	test02(1);
}

int test01();
void test02(int a)
{
	char ca[] = "Hello"; // ca[0]:'H' ... ca [4]:'o' ca[5]:\0
	for (int i = 0; i < 10; i++) // 0 ~ 5
	{
		printf("ca[%d] : %c (%02x)\n", i, ca[i], ca[i]);
	}
	ca[2] -= 1;
	ca[3] -= 1;
	for (int i = 0; i < 10; i++) // 0 ~ 5
	{
		printf("ca[%d] : %c (%02x)\n", i, ca[i], ca[i]);
	}
}