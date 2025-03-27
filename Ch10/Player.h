#pragma once

/*
* ������
* enum �̸�;
* �̸��� �����Ѵ�. ���ڿ� �̸��� �����Ų��. const
* 
* ���� :	const int ONE; TWO; THREE; �������� ��ȣ
*		const int ONE; TWO; THREE;
*/

#include "ConsoleGame.h"

typedef enum _RACE
{
	HUMAN,ORC,TROLL
}RACE;

typedef struct _Player
{
	char* name;	// �̸��� �������ų� �����Ѵ�.
	COORD pos;	// �÷��̾��� ��ǥ�� �����ϴ� �Լ�
	RACE race;
}Player;

// ������ �ڸ����� �̿��ؼ� ������ ǥ���Ѵ�.
// 00 0000 0000 (�ĺ���ȣ)(������ ����)(�ε��� ��ȣ)

typedef enum _COLOR
{
	RED, GREEN, BLUE
}COLOR;


void GetPlayerName(Player player);
void SetPlayerName(Player* playerPtr);

void SetPlayerInput(Player* playerPtr);

void SelectColor(COLOR color);

void ShowPlayerInfo(Player* playerPtr);