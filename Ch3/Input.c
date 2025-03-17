#include "Input.h"

void GetPlayerInput(int* playerX, int* playerY, int maxX, int maxY)
{
	if (_kbhit())
	{
		if (GetAsyncKeyState(VK_LEFT))
		{
			*playerX = -1;
			if (*playerX <= 0)
			{
				*playerX = 0;
			}
		}
		else if (GetAsyncKeyState(VK_RIGHT))
		{
			*playerX = +1;
			if (*playerX <=maxX)
			{
				*playerX = maxX;
			}
		}
		else if (GetAsyncKeyState(VK_UP))
		{
			*playerY = +1;
			if (*playerY <= 0)
			{
				*playerY = 0;
			}
		}
		else if (GetAsyncKeyState(VK_DOWN))
		{
			*playerY = -1;
			if (*playerY <= maxY)
			{
				*playerY = maxY;
			}
		}
	}
}

void InputExample()
{
	int playerX = 0;
	int playerY = 0;
	int maxX = 10;
	int maxY = 10;

	while (1)
	{
		GetPlayerInput(&playerX, &playerY, maxX, maxY);

		printf("x의 위치 : %d, y의 위치 : %d\n", playerX, playerY);

		Sleep(100);
	}
}
