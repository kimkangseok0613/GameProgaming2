#include "ConsoleGame.h"

void GotoXY(int x, int y)	// 콘솔창의 x, y 좌표로 커서의 위치를 이동시킨다.
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void ShowStage(char(*stage)[STAGE_WIDTH + 1], COORD pos)
{
	for (int i = 0; i < STAGE_HEIGHT; i++)
	{
		GotoXY(pos.X, pos.Y + i);
		printf("%s", stage[i]);
	}
}

char ReturnValueFromStage(char(*stage)[STAGE_WIDTH + 1], COORD pos)
{
	char  returnValue = ' ';

	returnValue = stage[pos.Y][pos.X];

	return returnValue;
}

BOOL CanMoveStage(char(*stage)[STAGE_WIDTH + 1], COORD playerPos, char exitCharacter)
{
	char stageChar = ReturnValueFromStage(stage, playerPos);

	if (stageChar == exitCharacter)
	{
		printf("다음 스테이지로 이동합니다.\n");
		return true;
	}
	else
	{
		printf("이동할 수 없습니다.\n");
		return false;
	}
}

void NextStage(char(*stage)[STAGE_WIDTH + 1], COORD stagePos)
{

}

COORD PlusCOORD(COORD pos1, COORD pos2)
{
	SHORT newPosx = pos1.X + pos2.X;
	SHORT newPosy = pos1.Y + pos2.Y;

	COORD resultPos = { newPosx, newPosy };

	return resultPos;
}
// 아이템끼리 더한다.
// 스테이지 2개