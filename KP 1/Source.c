#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>
#define _USE_MATH_DEFINES
#include<math.h>
#include<locale.h>

#define HEIGHT 6
#define WIDTH 8
#define HUMAN 17

int main() {
	char c, y;
	int number = 1, z = 0, p, u, x = 0;
	float res, sum = 0;
	setlocale(LC_ALL, "RUS");
	int points[HEIGHT][WIDTH] = {
		{100 ,200 ,500 ,700 ,100 ,300 ,400 ,500 },
		{200 ,900 ,120 ,340 ,500 ,120 ,160 ,400 },
		{800 ,800 ,140 ,340 ,500 ,100 ,100 ,500 },
		{120 ,800 ,400 ,320 ,500 ,460 ,700 ,520 },
		{220 ,620 ,120 ,600 ,400 ,420 ,480 ,600 },
		{120 ,540 ,750 ,600 ,750 ,500 ,400 ,420 }
	};
	float arr[WIDTH];
	char *human[HUMAN] = {
		{"������ �������� |"},
		{"������� ������  |"},
		{"������ ����     |"},
		{"������ �������� |"},
		{"�������� �������|"},
		{"��������� ������|"},
	};
	int maxpoint[WIDTH] = { 800,900,750,700,750,500,700,600 };
	while (1) {
		puts("�������� ����� �� ��������������� ������ : \n1)����� ������� �������� �����������\n2)�������������� �������\n3)�������������� ������� ��� ������-���� �������\n4)����� �� ���������");
		scanf("%c", &c);
		getchar();
		switch (c)
		{
		case '1':
			puts("\t\t ������� �������� � '������� �������'");
			puts("  ��������      | ATP| WTA | AO |  GS |  RG |  Wd | US OP| ITF |");
			for (int i = 0; i < HEIGHT; i++)// ���������� �����
			{
				for (int j = 0; j < HUMAN; j++) {
					printf("%c", human[i][j]);//����� ���
				}
				for (z = 0; z < WIDTH; z++) {
					printf("%d   ", points[i][z]);//����� �����
				}puts("\n");

			}
			break;
		case '2':
			puts("\t\t �������������� ������� �������� � '������� �������'");
			puts("  ��������      | ATP| WTA |  AO |  GS |  RG |  Wd | US OP| ITF| ����� �����|");
			for (int i = 0; i < HEIGHT; i++)// ���������� �����
			{
				for (int j = 0; j < HUMAN; j++) {
					printf("%c", human[i][j]);//����� ���
				}
				for (z = 0; z < WIDTH; z++) {
					res = (float)points[i][z] / maxpoint[z];
					printf("%.2f   ", res);//����� �����
					sum = sum + res;

				}
				printf("%.2f", sum);
				puts("\n");
				sum = 0;
			}
			break;
		case'3':
			puts("������� ����� ������� ������� �� ����� �����������");
			puts("| ATP - 1 | WTA - 2 | AO - 3 | GS - 4 | RG - 5 | Wd - 6 | US OP - 7 | ITF - 8 |");
			scanf("%d", &u);
			getchar();
			puts("\t\t �������������� ������� �������� � '������� �������'");
			puts("  ��������      | ATP| WTA |  AO |  GS |  RG |   Wd  | US OP  |  ITF | ����� �����|");
			for (int i = 0; i < HEIGHT; i++)// ���������� �����
			{
				printf("%17s |", human[i]);//����� ���
				for (int j = 0; j < WIDTH; j++) {
					
					res = (float)points[i][j] / maxpoint[j];
					if (j == u) printf("| %6s |", "");
						else printf("| %6.2f |", res);//����� �����
				
				}
				
				puts("\n");
				
			}
			x = 0;
			z = 0;
			break;


		case'4':
			exit(EXIT_SUCCESS);
			break;


		}
	}
}
