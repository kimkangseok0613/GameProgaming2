#include "lecture.h"

void ShowLecture()
{
	printf("���� ���� 1\n");
	int num1 = 10;
	int* numPtr = &num1;
	printf("���� ��� : %d\n\n", num1);
	printf("�ּҸ� ��� : %p\n", numPtr);

	printf("���� �ǽ� 1\n");

	int numA = 5;
	int numB = 6;
	printf("numA�� �� : %d, numB�� �� : %d\n", numA, numB);
	Swap(&numA, &numB);
	printf("numA�� �� : %d, numB�� �� : %d\n", numA, numB);

	//IncreaseScore(&GameScore, 10);
	//IncreaseTemp(GameScore, 10);
	//printf("���� ���� : %d", GameScore);

	printf("���� �ǽ� 2\n");
	
	// ���� 3���� �����غ�����
	float weight = 1.5f;
	int weaponLv = 1;
	int baseAP = 10;

	// ���� ���ݷ��� ������Ű�� �Լ�
	// ���� �Լ��� ����
	printf("����ġ : %f, ���� : %d, �⺻ ���ݷ� : %d", weight, weaponLv, baseAP);
	UpgradeWeapon(&weaponLv, baseAP, &weight);
	printf("����ġ : %f, ���� : %d, �⺻ ���ݷ� : %d", weight, weaponLv, baseAP);

	// ����
	// �Լ��� �̿��ؼ� ���� �����Ѵ�. �ּҸ� �̿��ؼ� ���� ������ �� �ִ�.
	// ���� �ּҸ� ����ұ�? 1. �ܺ��� ���� �����ؾ� �� �� 2. �����;� �� ������ Ÿ���� �ʹ� Ŭ�� �ּҸ����� ������ �� �ִ�.(�迭, ����ü)

	// �������� ������ ������Ű�� �Լ�
	int item;
	
	// �÷��̾��� ��ǥ�� �̵���Ű�� �Լ��� ��������
}


void Swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void IncreaseScore(int* score, int points)
{
	*score += points;
}

void IncreaseTemp(int score, int points)
{
	score += points;
}

void UpgradeWeapon(int* weaponLv, int baseAP, float* weight)
{
	// ������ 1 ������Ų��.
	// ����ġ�� Ư�� �������� �����Ѵ�.

	*weaponLv += 1;
	if (*weaponLv %5==0)
	{
		*weight = *weight * 1.5f;
	}
	printf("���� ���� ���ݷ� : %f\n", (*weaponLv) * (*weight) + baseAP);
}
