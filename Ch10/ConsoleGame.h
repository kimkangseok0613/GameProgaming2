#pragma once

#include <stdio.h>		// printf, scanf
#include <stdlib.h>		// rand
#include <stdbool.h>	// true, false
#include <Windows.h>	// GetAsync, system("cls")
#include <conio.h>		// _getch()
#include <time.h>		// �ð� ���� ���
#include "Stage.h"

// 2���� �迭 �ּҷ� ���������� � ���·� �����ؾ��ϴ°�?>
// char (*stage)[������ ����]

//typedef struct _POS
//{
//	int x;
//	int y;
//}POS;

void GotoXY(int x, int y);

void ShowStage(char(*stage)[STAGE_WIDTH + 1], COORD pos);

// �÷��̾��� ��ǥ, Stage�ȿ� ������ ��('@')

//
char ReturnValueFromStage(char(*stage)[STAGE_WIDTH + 1], COORD pos);

char ReturnValueFromStage(STAGE* stage);
// ���� ���������� �̵��� �����Ѱ���?
BOOL CanMoveStage(char(*stage)[STAGE_WIDTH + 1], COORD playerPos, char exitCharacter);
// �̵��ϼ���
void NextStage(char(*stage)[STAGE_WIDTH + 1],COORD stagePos);