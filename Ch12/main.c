/*
* ���� �����
* 1. fopen() - fclose() - FILE
* 2. ���� fputc, fputs // fprintf()
* 3. �ε� fgetc, fgets // fscanf()
* 4. ����ü�� �̿��ؼ� �����͸� �����ϰ� �ʹ�.
*/

#include "rank.h"
#include <stdlib.h>
#include <conio.h>

int main()
{
	Rank ranks[MAXPLAYER];
	int order = 0;
	AddRank(ranks, &order, "Bear", 100);
	AddRank(ranks, &order, "Candy", 150);
	AddRank(ranks, &order, "Dog", 250);
	AddRank(ranks, &order, "Cat", 75);
	for (int i = 0;i < 10;i++)
	{
		printf("...");
		Sleep(100);
	}

	//int count = 0;
	//count++;
	//ranks[0].order = count;
	//ranks[0].score = 100;
	//strncpy(ranks[0].name,"Bear", MAXLENGTH);
	//count++;
	//ranks[1].order = count;
	//ranks[1].score = 100;
	//strncpy(ranks[1].name, "Candy", MAXLENGTH);

	//order = LoadRank(RANKFILEPATH, ranks);
	printf("...............\n");
	Sleep(1000);
	order = LoadRank(RANKFILEPATH, ranks);
	printf("�ε��� �Ϸ�Ǿ����ϴ�. Ű�� �Է����ּ���.\n");
	_getch();
	system("cls");

	printf("1_��ŷ �߰� 2_��ŷ Ȯ�� 3_���α׷� ���� 4_��ŷ ���� 5_1�� ���� ���");

	while (1)
	{
		int input = 0;
		int firstRank = 0;
		scanf("%d", &input);

		switch (input)
		{
			case 1: AddRankData(ranks, &order); break;
			case 2: PrintRanking(ranks, order); break;
			case 3: FileSave(RANKFILEPATH, ranks, order); return;
			case 4: DeleteRankData(ranks, &order, 0); break;
			case 5: 
				firstRank = FindMaxIndex(ranks, order);
				printf("��ŷ 1���� �̸� : %s, ���� : %d\n", ranks[firstRank].name, ranks[firstRank].score);
				
				
				break;
			default:
				printf("�߸��� �Է��Դϴ�. Ű�� �Է����ּ���.\n");
				_getch();
				system("cls");
				break;
		}
	}
	FileSave(RANKFILEPATH, ranks, order);
}