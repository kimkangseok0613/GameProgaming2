/*
* 콘솔 게임 만들기
* - 포인터 사용, 구조체 사용
* - 2차원 배열 이미지 표현
* 
* 스테이지를 만들고, 특정 위치에 도달하면 다음 스테이지로 이동한다.
* 콘솔 화면 위에 UI창을 출력해주는 기능을 함수로 구현해본다.
*/

#include "ConsoleGame.h"
#include "Stage.h"
#include "Player.h"

/*
* 플레이어가 Stage1 탈출구(@) 위치에 도달하면, 현재 화면을 지우고 stage2 그린다.
*/

int main()
{
	//for (int i = 0;i < STAGE_HEIGHT;i++)
	//{
	//	printf("%s\n", Stage2[i]);
	//}

	COORD stagePos = { 20,0 };
	ShowStage(Stage1, stagePos);

	COORD stagePos2 = { 50,0 };

	// 플레이어의 위치 표현
	GotoXY(10, 10);
	printf("■");

	// 스테이지에 포함된 문자를 출력하는 예시
	COORD tempPos = { 2,1 };
	char tempChar = ReturnValueFromStage(Stage1, tempPos);
	printf("스테이지의 특정좌표 문자 값 : %c\n", tempChar);

	// 2개의 구조체를 덧셈

	COORD tempPos1 = { 0,2 };
	COORD tempPos2 = { 3,4 };

	COORD tempResult = PlusCOORD(tempPos1, tempPos2);
	printf("두 구조체의 덧셈 : { %d,%d }\n",tempResult.X, tempResult.Y);

	Player player;

	SetPlayerName(&player);
	GetPlayerName(player);

	// ENUM 예제
	system("cls");
	COLOR currentcolor = RED;
	SelectColor(currentcolor);

	ShowPlayerInfo(&player);

	// 플레이어의 다음 위치가 특정 문자인 경우
	if (CanMoveStage(Stage1, tempPos, '@'))	// CanMoveStage?
	{
		system("cls");					// 전체 화면을 지운다.
		ShowStage(Stage2, stagePos2);	// 선택한 스테이지를 출력한다.
		GotoXY(10+50, 10);				// 커서 위치를 이동한다.
		printf("■");					// 플레이어 문자를 출력한다.
	}

	// 플레이어의 위치 표현
	while (true)
	{

	}
}