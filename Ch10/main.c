/*
* �ܼ� ���� �����
* - ������ ���, ����ü ���
* - 2���� �迭 �̹��� ǥ��
* 
* ���������� �����, Ư�� ��ġ�� �����ϸ� ���� ���������� �̵��Ѵ�.
* �ܼ� ȭ�� ���� UIâ�� ������ִ� ����� �Լ��� �����غ���.
*/

#include "ConsoleGame.h"
#include "Stage.h"

/*
* �÷��̾ Stage1 Ż�ⱸ(@) ��ġ�� �����ϸ�, ���� ȭ���� ����� stage2 �׸���.
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

	// �÷��̾��� ��ġ ǥ��
	GotoXY(10, 10);
	printf("��");

	// ���������� ���Ե� ���ڸ� ����ϴ� ����
	COORD tempPos = { 2,1 };
	char tempChar = ReturnValueFromStage(Stage1, tempPos);
	printf("���������� Ư����ǥ ���� �� : %c\n", tempChar);

	// �÷��̾��� ���� ��ġ�� Ư�� ������ ���
	if (CanMoveStage(Stage1, tempPos, '@'))	// CanMoveStage?
	{
		system("cls");					// ��ü ȭ���� �����.
		ShowStage(Stage2, stagePos2);	// ������ ���������� ����Ѵ�.
		GotoXY(10+50, 10);				// Ŀ�� ��ġ�� �̵��Ѵ�.
		printf("��");					// �÷��̾� ���ڸ� ����Ѵ�.
	}

	// �÷��̾��� ��ġ ǥ��
	while (true)
	{

	}
}