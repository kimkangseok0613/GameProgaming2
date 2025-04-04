#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define RANKFILEPATH "Rank.txt"
#define MAXPLAYER 10
#define MAXLENGTH 50

typedef struct {
	int order;
	int score;
	char name[50];
}Rank;

void FileSaveTemp();

void FileSave(const char* fileName, Rank rank[], int count);

void FileLoadTemp();

int LoadRank(const char* fileName, Rank rank[]); // 메모장에 저장된 count를 불러오는 함수

void PrintRanking(Rank rank[], int count); // count수 만큼 랭킹을 출력하는 함수

void AddRank(Rank rank[], int* order, const char* name, int  score);

void AddRankData(Rank rank[], int* order);

void DeleteRankData(Rank rank[], int* order, int count);

int FindMaxIndex(Rank rank[], int size);

// scanf 숫자를 지정해준다. 1번 랭킹 등록 2번 랭킹 보기 3번 프로그램 종료