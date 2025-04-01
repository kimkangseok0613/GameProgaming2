#include "rank.h"

void FileSaveTemp()
{
	FILE* fp = fopen(RANKFILEPATH, "w");
	// fputc
	//fputc('a', fp);
	//fputc('\n', fp);
	//fputc('a', fp);
	//fputc('a', fp);

	// fputs - 문자열로 저장한다.
	//fputs("a\naa", fp);

	// fprintf 
	fprintf(fp, "%d %s %d", 1, "Alice", 100);
	fclose(fp);
}

void FileSave(const char* fileName, Rank rank[], int count)
{
	FILE* fPtr = fopen(fileName, "w");

	for (int i = 0;i < count;i++) 
	{
		fprintf(fPtr, "%d %d %s\n", rank[i].order, rank[i].score, rank[i].name);
	}

	fclose(fPtr);
}

void FileLoadTemp()
{
	FILE* fp2 = fopen("Rank.txt", "r");

	if (fp2 == NULL)
	{
		printf("파일 열기 실패\n");
		return;
	}

	//char mstring[12];
	//fgets(mstring, 12, fp2);
	//printf("%s\n", mstring);

	int order = 0;
	int score = 0;
	char name[MAXLENGTH];

	fscanf(fp2, "%d %s %d", &order, name, &score);

	printf("순서 : %d, 이름 : %s, 점수 : %d\n", order, name, score);

	fclose(fp2);
}

int LoadRank(const char* fileName, Rank rank[])
{
	int count = 0;

	FILE* fPtr = fopen(fileName, "r");

	if (fPtr == NULL)
	{
		printf("파일 열기 실패\n");
		return;
	}

	while (fscanf(fPtr, "%d %d %49s", &rank[count].order, &rank[count].score, &rank[count].name) != EOF) //파일이 끝날때 까지 읽어오는 코드
	{
		count++;
	}

	fclose(fPtr);

	return count;
}

void PrintRanking(Rank rank[], int count)
{
	// count횟수만큼 반복하는 코드가 필요하다.
	//printf("%d, %d, %s\n", rank[0].order, rank[0].score, rank[0].name);
	//printf("%d, %d, %s\n", rank[1].order, rank[1].score, rank[1].name);

	// 테두리를 만든다.
	printf("+------+------+------------------+\n");
	printf("| 순서 | 점수 |       이름       |\n");
	printf("+------+------+------------------+\n");
	for (int i = 0;i < count;i++)
	{
		printf("| %-4d | %-4d | %-16s |\n", rank[i].order, rank[i].score, rank[i].name);
	}

	// 테두리를 만든다.
	printf("+------+------+------------------+\n");

}

void AddRank(Rank rank[], int* order, const char* name, int score)
{
	if (*order < MAXPLAYER) 
	{
		rank[*order].order = *order + 1;
		rank[*order].score = score;
		strncpy(rank[*order].name, name, MAXLENGTH - 1);
		rank[*order].name[MAXLENGTH - 1] = '\0';
		(*order)++;
	}
	else
	{
		printf("최다 플레이어 저장수를 초과하였습니다.\n");
	}
}
