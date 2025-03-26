#include "ConsoleGame.h"

void GotoXY(int x, int y)	// �ܼ�â�� x, y ��ǥ�� Ŀ���� ��ġ�� �̵���Ų��.
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
		printf("���� ���������� �̵��մϴ�.\n");
		return true;
	}
	else
	{
		printf("�̵��� �� �����ϴ�.\n");
		return false;
	}
}

void NextStage(char(*stage)[STAGE_WIDTH + 1], COORD stagePos)
{

}
