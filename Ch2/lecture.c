#include "lecture.h"

void ShowLecture()
{
	printf("강의 예제 1\n");
	int num1 = 10;
	int* numPtr = &num1;
	printf("값을 출력 : %d\n\n", num1);
	printf("주소를 출력 : %p\n", numPtr);

	printf("강의 실습 1\n");

	int numA = 5;
	int numB = 6;
	printf("numA의 값 : %d, numB의 값 : %d\n", numA, numB);
	Swap(&numA, &numB);
	printf("numA의 값 : %d, numB의 값 : %d\n", numA, numB);

	//IncreaseScore(&GameScore, 10);
	//IncreaseTemp(GameScore, 10);
	//printf("현재 점수 : %d", GameScore);

	printf("강의 실습 2\n");
	
	// 변수 3개를 선언해보세요
	float weight = 1.5f;
	int weaponLv = 1;
	int baseAP = 10;

	// 무기 공격력을 증가시키는 함수
	// 같은 함수로 구현
	printf("가중치 : %f, 레벨 : %d, 기본 공격력 : %d", weight, weaponLv, baseAP);
	UpgradeWeapon(&weaponLv, baseAP, &weight);
	printf("가중치 : %f, 레벨 : %d, 기본 공격력 : %d", weight, weaponLv, baseAP);

	// 정리
	// 함수를 이용해서 값을 변경한다. 주소를 이용해서 값을 변경할 수 있다.
	// 현재 주소를 사용할까? 1. 외부의 값을 변경해야 할 때 2. 가져와야 할 데이터 타입이 너무 클때 주소만으로 가져올 수 있다.(배열, 구조체)

	// 아이템의 갯수를 증가시키는 함수
	int item;
	
	// 플레이어의 좌표를 이동시키는 함수를 만들어보세요
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
	// 레벨을 1 증가시킨다.
	// 가중치를 특정 레벨에서 변경한다.

	*weaponLv += 1;
	if (*weaponLv %5==0)
	{
		*weight = *weight * 1.5f;
	}
	printf("현재 무기 공격력 : %f\n", (*weaponLv) * (*weight) + baseAP);
}
