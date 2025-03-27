#include "Player.h"

void GetPlayerName(Player player)
{
	printf("%s", player.name);
}

void SetPlayerName(Player* playerPtr)
{
	char* inputName = malloc(sizeof(inputName));
	scanf_s("%s", inputName,10);	// '\0'

	(*playerPtr).name = inputName;
}

void SetPlayerInput(Player* playerPtr)
{
	// 플레이어의 입력을 판별한다. 4방향 return
	// 방향 eunm 0 : 왼쪽, 1 : 오른쪽, 2 : 위쪽, 3 : 아래쪽
	// eunm값
	
	if (_kbhit)
	{
		if (GetAsyncKeyState(VK_LEFT))
		{
			(*playerPtr).pos.X -= 1;
		}
		else if (GetAsyncKeyState(VK_RIGHT))
		{
			(*playerPtr).pos.X += 1;
		}
		else if (GetAsyncKeyState(VK_UP))
		{
			(*playerPtr).pos.Y -= 1;
		}
		else if (GetAsyncKeyState(VK_DOWN))
		{
			(*playerPtr).pos.Y += 1;
		}
	}

	(*playerPtr).pos.X += 1;
	(*playerPtr).pos.Y += 1;
}

void SelectColor(COLOR color)
{
	switch (color)
	{
	case RED:
		printf("RED입니다.");
		break;
	case GREEN:
		printf("GREEN입니다.");
		break;
	case BLUE:
		printf("BLUE입니다.");
		break;
	}
}

void ShowPlayerInfo(Player* playerPtr)
{
	// 이름, 좌표, 종족

	if (playerPtr == NULL)
	{
		return;
	}
	GetPlayerName(*playerPtr);
}
