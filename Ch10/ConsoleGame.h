#pragma once

#include <stdio.h>		// printf, scanf
#include <stdlib.h>		// rand
#include <stdbool.h>	// true, false
#include <Windows.h>	// GetAsync, system("cls")
#include <conio.h>		// _getch()
#include <time.h>		// 시간 변수 사용
#include "Stage.h"

// 2차원 배열 주소로 가져오려면 어떤 형태로 선언해야하는가?>
// char (*stage)[가로의 길이]

//typedef struct _POS
//{
//	int x;
//	int y;
//}POS;

void GotoXY(int x, int y);

void ShowStage(char(*stage)[STAGE_WIDTH + 1], COORD pos);

// 플레이어의 좌표, Stage안에 문자의 값('@')

//
char ReturnValueFromStage(char(*stage)[STAGE_WIDTH + 1], COORD pos);

char ReturnValueFromStage(STAGE* stage);
// 다음 스테이지로 이동이 가능한가요?
BOOL CanMoveStage(char(*stage)[STAGE_WIDTH + 1], COORD playerPos, char exitCharacter);
// 이동하세요
void NextStage(char(*stage)[STAGE_WIDTH + 1],COORD stagePos);