#include "PointerOperator.h"

void PointerExample()
{
	// sizeof()
	printf("������ ���� ����\n\n");
	int number1 = 0;
	int* number1Ptr = &number1;

	double doubleNumber1 = 1.0;
	double* doubleNumber1Ptr = &doubleNumber1;

	printf("Int �������� ũ�� : %d\n", sizeof(number1));
	printf("double �������� ũ�� : %d\n", sizeof(doubleNumber1));
	// ������ ũ�Ⱑ 4
	// �ּ��� ũ��� ��� �ɱ�
	printf("Int �ּ��� ũ�� : %d\n", sizeof(number1Ptr));
	printf("double �ּ��� ũ�� : %d\n", sizeof(doubleNumber1Ptr));

	// x86 �ּ��� ũ�� ���� : 4����Ʈ
	// x64 �ּ��� ũ�� ���� : 8����Ʈ
	// �ּҴ� ũ�Ⱑ �����ϴ�. �����Ǿ� �ִ�. ���� �Ҵ�

	// �ּ� ��ü�� ���ϱ� vs �ּҸ� �����ؼ� ���ϱ�
	// ������ ����ϴµ�, ��ǻ�Ͱ� ��򰡿� ����ϰ� �ֽ��ϴ�. �ּҶ�� �̸����� ����ϰ� �ִ�.
	// ������ �̸����� ���� ������ �� �ְ�, �ּҷκ��� ���� ������ ���� �ֽ��ϴ�.

	// �ּ� ���·� �������� ��� (���� ���)	- ���α׷��� ����ǰų�, ���� �޸𸮸� �����ϱ� ������ ��� �����ϴ�.	- ��(Heep) ����
	// ������ �̸����� �������� ���(�� ���)	- () �ڵ� ������ ������ ������ �޸𸮰� �����˴ϴ�.					- ����(stack) ����

	// ��� �ڵ带 �׻� �����ϸ� �ȵɱ�
	// ���� ������ ���� ����ŭ ������Ű�� �ڵ带 �ۼ��ϰ� �ʹ�
	// ����Ǿ�� �� ������ : ���� ����
	// �ѹ� ����ϰ� ����� ���� ������ : ���� ������ �����ϰ� ���� ����ġ

	// ��� �ڵ带 �� ���� ����ϰ� ������ ���ϸ�?
	// GameScore �����ͷ� �����ؼ� �����ϴ� ����� ������ �� ���� �ȴ�.

	// call by value, call by reference �����ؼ� ����ؾ��ϴ� ����

	printf("number1Ptr�� ���� ��� : %d\n", (*doubleNumber1Ptr) + 1);
	
	// �ּҸ� ���غ���.

	printf("�ּҸ� ����غ���\n");
	printf("���� �ּ� : %p\n", number1Ptr);
	// �ּҸ� ���ϸ� ��� �ɱ�? �迭, ������
	number1Ptr = number1Ptr + 1;
	printf("���� �ּ� : %p\n", number1Ptr);

	printf("double �ּ� : %p\n", doubleNumber1Ptr);
	doubleNumber1Ptr = doubleNumber1Ptr + 1;
	printf("double �ּ� : %p\n", doubleNumber1Ptr);
	// �ּҸ� ���ϸ�, �ּ��� ���� ������ �ִ� ũ�⸸ŭ �����Ѵ�.
	// �迭�� �������� ���� (�߿�)

}
