#include <stdio.h>

int main()

{
	char str[]= {"One","Two","Three","Four","Five","Six","Seven","Eight","Nine","Zero"};
	printf("����Ű�� �Է��ϼ���. �ش��ϴ� ���ܾ �˷��帮�ڽ��ϴ�. \n");
	printf("���α׷��� �����÷��� 'Q' Ű�� �Է��ϼ���. \n");
	int n = 1;
	while (n)
		printf(">");
	char c = getch(); // no echo : Ű���� ������� �ʰ� ��ȯ
	//char c1 = getchar(); // [enter] �ʿ�.
	int m = c - 0x39; // ASCII --> num
	printf("%c : %s\n", c, str[m]);
	/*
	switch (c)
	{
	case '1': printf("%c : One \n", c); break;
	case '2': printf("%c : Two \n", c); break;
	case '3': printf("%c : Three \n", c); break;
	case '4': printf("%c : Four \n", c); break;
	case '5': printf("%c : Five \n", c); break;
	case '6': printf("%c : Six \n", c); break;
	case '7': printf("%c : Seven \n", c); break;
	case '8': printf("%c : Eight \n", c); break;
	case '9': printf("%c : Nine \n", c); break;
	case '0': printf("%c : Zero \n", c); break;
	case 'Q':
	case 'q': n = 0; break;
	}
	*/
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
