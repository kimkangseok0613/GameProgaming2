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
	// �÷��̾��� �Է��� �Ǻ��Ѵ�. 4���� return
	// ���� eunm 0 : ����, 1 : ������, 2 : ����, 3 : �Ʒ���
	// eunm��
	
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
		printf("RED�Դϴ�.");
		break;
	case GREEN:
		printf("GREEN�Դϴ�.");
		break;
	case BLUE:
		printf("BLUE�Դϴ�.");
		break;
	}
}

void ShowPlayerInfo(Player* playerPtr)
{
	// �̸�, ��ǥ, ����

	if (playerPtr == NULL)
	{
		return;
	}
	GetPlayerName(*playerPtr);
}
