/*
* 작성일	: 2025.03.17
* 작성자	: 김강석
* 주제	: 메모리의 사용 (동적 할당)
*/

/*
* 포인터 : 주소 다루는 방법
* 포인터 변수 선언 : int* numPtr;
* 포인터 주소로부터 값을 변경 : *numPtr;
* 변수 : int num; &num; 변수에 할당된 주소를 가져올 수 있다.
*/

/*
* 함수 사용 - 매개 인자 위치에 값이 오느냐 주소가 오느냐
* void Function(int A, int B);
* 플레이어의 위치(x, y좌표)값을 설정해주는 함수를 만들어보세요
*/

/*
* 포인터 변수 형태를 선언해본다.
* 동적 할당 예시
* 메모리를 직접 할당해준다.
*/

#include "Input.h"

void SetMemoryAndValue(int amount) // 주소를 하나 받아와서 주소의 값을 amount값으로 변경한다.
{
	int* num1Ptr = NULL;
									// numPtr 메모리 변수 (지역 변수), 주소의 값을 변경한다.
	num1Ptr = malloc(sizeof(int));	// 새로운 주소를 할당

	*num1Ptr = amount;

	printf("할당한 메모리의 주소의 값 : %p\n", num1Ptr);
	printf("할당한 메모리의 값을 호출 : %d\n", *num1Ptr);

	free(num1Ptr); // num1Ptr가 메모리상에 계속 남는다.
}

int main()
{
	printf("ch3\n");

	//InputExample();

	printf("포인터 변수 사용\n");

	int number = 1;
	int* numPtr = &number;

	int* num1Ptr; // 정수 (4바이트 정수 값을 저장하는 형태)
	num1Ptr = malloc(sizeof(int));

	printf("할당한 메모리 주소의 값 : %p\n", num1Ptr);

	// 컴퓨터의 메모리 공간에 값을 저장할 수 있는 주소를 할당했다.
	// 조건문, 특정 상황에서만 코드를 실행
	// 인벤토리 최대 크기 4칸 (정수를 4개 저장)
	// 업그레이드 최대 크기 증가 (저장할 수 있는 정수의 갯수가 늘어난다)

	SetMemoryAndValue(10);

	
}