/*
* 파일 입출력
* 1. fopen() - fclose() - FILE
* 2. 저장 fputc, fputs // fprintf()
* 3. 로드 fgetc, fgets // fscanf()
* 4. 구조체를 이용해서 데이터를 저장하고 싶다.
*/

#include "rank.h"

int main()
{
	printf("1. 파일을 저장하는 함수 구현\n");
	FileSaveTemp();
	printf("2. 파일을 읽어오는 함수 구현\n");
	FileLoadTemp();
	printf("3. 랭크 구조체를 구현\n");

	Rank ranks[MAXPLAYER];
	int order = 0;
	AddRank(ranks, &order, "Bear", 100);
	AddRank(ranks, &order, "Candy", 150);
	AddRank(ranks, &order, "Dog", 250);
	AddRank(ranks, &order, "Cat", 75);

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

	if (order < MAXPLAYER)
	{
		printf("새로운 플레이어의 이름을 입력하세요 :\n");
		char newName[MAXLENGTH];
		int newScore;
	
		scanf("%49s", newName);
		printf("점수를 입력하세요 : \n");
		scanf("%d", &newScore);

		AddRank(ranks, &order, newName, newScore);
	}

	PrintRanking(ranks, order);

	FileSave(RANKFILEPATH, ranks, order);
}