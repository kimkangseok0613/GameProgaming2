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

// COORD x, y 정수로 표현한 구조체 (좌표)
// (1, 2) + (3, 4) = (4, 6)

// COORD pos1;
// COORD pos2;	pos1 + pos2 = (pos1의 x접근해서 pos2의 x와 더한다)

COORD PlusCOORD(COORD pos1, COORD pos2);

// (주소로 지정, 변수로 지정)
// 지역 변수 -  {} 중괄호 안에 선언한 변수 지역변수 '}'
// 