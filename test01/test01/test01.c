#include <stdio.h>
#include <conto.h>

int main()

{
	printf("숫자키를 입력하세요. 해당하는 영단어를 알려드리겠습니다. \n");
	printf("프로그램을 끝내시려면 'Q' 키를 입력하세요. \n");
	int n = 1;
	while(n)
	printf(">");
	char c = getch(); // no echo : 키값을 출력하지 않고 반환
	//char c1 = getchar(); // [enter] 필요.
	
	switch (c)
	{
	case '1': printf("%c : One \n", c);
	case '2': printf("%c : Two \n", c);
	case '3': printf("%c : Three \n", c);
	case 'Q':
	case 'q': n = 0; break;
	}
	/*
	if (c == '1')
		printf("%c : One \n",c);

	else if (c == '2')
		printf("%c : Two \n",c);

	else if (c == '3')
		printf("%c : Three \n",c);

	else if (c == '4')
		printf("%c : Four \n",c);

	else if (c == '5')
		printf("%c : Five \n",c);

	else if (c == '6')
		printf("%c : Six \n",c);

	else if (c == '7')
		printf("%c : Seven \n",c);

	else if (c == '8')
		printf("%c : Eight \n",c);

	else if (c == '9')
		printf("%c : Nine \n",c);

	else if (c == '0')
		printf("%c : Zero \n", c);

	else if (c | 0x20 == 'Q' || c== 'q')
		break; // 40H 60H
		*/
}
