#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<time.h>
#include<math.h>

void main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "Rus");

	int n = 0;
	printf("������� ����� �������: ");
	scanf("%d", &n);

	if (n == 1)
	{
#pragma region 1.	����������, �������� �� ������ ����� ����� ������

		int x = 0;
		x = 1 + rand() % 1000;
		printf("%d\n", x);
		if (x % 2 == 0)
			printf("����� ������\n");
		else
			printf("����� �� ������\n");
#pragma endregion
	}
	else if (n == 2)
	{
#pragma region 2.	�������� �������, ������� �������� ��������, �����  ����� � ������ ���� ��� ����.
		int x = 0;
		x = 1 + rand() % 1000;
		printf("%d\n", x);
		if (x % 2 == 0 || x % 3 == 0)
			printf("true\n");
		else
			printf("false\n");
#pragma endregion 
	}
	else if (n == 3)
	{
#pragma region 3.	�������� �������, ������� �������� ��������, ����� ������ �� �����  � � � ��������.
		int a = 0, b = 0;
		a = 1 + rand() % 1000;
		b = 1 + rand() % 1000;
		printf("%d - %d\n", a, b);
		if (a % 2 == 0 && b % 2 == 0)
			printf("true\n");
		else
			printf("false\n");
#pragma endregion
	}
	else if (n == 4)
	{
#pragma region 4.	��������� �������� ���������� ��������� ��� ��������� ��������� ���������� ���������� X=0, Y=0, Z=1     a.X<Y>Z    b.X>Y     c.	(X>Z)<Y
		int x = 0, y = 0, z = 1;
		if (x<y>z)
			printf("a. - true\n");
		else
			printf("a. - false\n");
		if (x > y)
			printf("b. - true\n");
		else
			printf("b. - false\n");
		if ((x > z) < y)
			printf("c. - true\n");
		else
			printf("c. - false\n");
#pragma endregion
	}
	else if (n == 5)
	{
#pragma region 5.	�������� ���������� ���������, ����������� ������� ����������� �������      a.y = 2tg x;          b.� = 3 / (x - 1).
		int x = 0, y = 0;
		x = 1 + rand() % 100;
		printf("%d\n", x);
		if (y = 2 * tan(x))
			printf("a. true\n");
		else
			printf("a. false\n");
		if (y = 3 / (x - 1))
			printf("b. true\n");
		else
			printf("b. false\n");
#pragma endregion

	}
	else if (n == 6)
	{
#pragma region 6.	��������� �������� ���������� ��������� ��� ��������� ��������� ���������� ���������� �=1, �=0, �=1     a.A<(A>B)<C       b.A<C>(B<C)      c.	(A<B>C)<A

		int a = 1, b = 0, c = 1;
		if (a < (a > b) < c)
			printf("a. - true\n");
		else
			printf("a. - false\n");
		if (a<c>(b < c))
			printf("b. - true\n");
		else
			printf("b. - false\n");
		if ((a<b>c) < a)
			printf("c. - true\n");
		else
			printf("c. - false\n");
#pragma endregion
	}
	else if (n == 7)
	{
#pragma region 7.	�������� ���������� ��������� ������������, ��� ����� � �������� �����������.
		unsigned int a = 0;
		a = 1 + rand() % 2000;
		printf("%d\n", a);
		if (a > 99 && a < 1000)
			printf("A - �������� ����������� ������\n");
		else
			printf("A - �� �������� ����������� ������\n");
#pragma endregion 
	}
	else if (n == 8)
	{
#pragma region 8.	�������� �������, ������� �������� ��������, ����� ������ ���� �� ����� �, � � � ������ 45.

		int a = 0, b = 0, c = 0;
		a = 1 + rand() % 200;
		b = 1 + rand() % 200;
		c = 1 + rand() % 200;
		printf("%d - %d - %d\n", a, b, c);
		if ((a < 45 && b>45 && c > 45) || (b < 45 && a > 45 && c > 45) || (c < 45 && a > 45 && b > 45))
			printf("true\n");
		else
			printf("false\n");
#pragma endregion
	}
	else if (n == 9)
	{
#pragma region 9.	�������� �������, ������� �������� ��������, ����� ����� � �� ������ ���� � ������������ �����

		int a = 0;
		a = 1 + rand() % 1000;
		printf("%d\n", a);
		if ((a % 3 != 0) && (a % 10 == 0))
			printf("true\n");
		else
			printf("false\n");
#pragma endregion
	}
	else if (n == 10)
	{
#pragma region 10.	�������� ���������� ���������, ������� ����������, ����������� �� ����� � ���������  �� -137 �� -51 ��� ��������� �� 123 �� 55.

		int a = 0;
		printf("������� �������� �: ");
		scanf("%d", &a);
		if ((a<-51 && a>-137) || (a < 123 && a>55))
			printf("true\n");
		else
			printf("false\n");
#pragma endregion
	}
}