#include <stdio.h>
#include <Windows.h>

int main() {

	/*
		continue
		 �������� �ݺ������� ���� �ݺ��׿� �Ѿ�� �ڵ�
		 (���� �ڵ带 ���۽�Ű�� �ʰ� ���� �ݺ� ����)

		break
		 switch, for, while���� ���
		 break���� ���� ����� ��� ����
	*/

	//int value = 0;

	//while (value < 10) {
	//	++value;
	//	if (value % 7 == 0) {
	//		puts("jump!!");
	//		continue;
	//	}
	//	printf("%d\n", value);
	//}

	//for (int out = 1; out <= 3; out++) {
	//	printf("%d ȸ�� : ", out);
	//	for (int in = 1; in <= 10; in++) {
	//		printf("%d ", in);
	//		if (in == 5) {
	//			break;
	//		} 
	//	}
	//puts("");
	//}

	/*
		���� ������
		 if ~ else������ ������ ���� �ڵ带 ����� ��
		 if ~ else�� ��ü�Ͽ� ��� ������ ������
		 
		 (���ǽ�) ? �ڵ� 1 : �ڵ� 2;
		 ������ ���̸� �ڵ� 1 ����, �����̸� �ڵ� 2 ����
	*/

	//int data, abs = 0;

	//printf("���� �Է� : "); scanf_s("%d", &data);

	//if (data > 0)
	//	abs = data;
	//else
	//	abs = -1 * data;

	//abs = (data > 0) ? data : -1 * data;

	//printf("���밪 : %d\n", abs);

	/*
		_sleep(����)
		Windowws.h ����� ���Ե� �Լ�
		�ڵ� ���࿡ ������ �Է��� ����
		���ڴ� 1�� 0.001��(1/1000��)�� �ǹ�
		(ex. _sleep(1000) -> delay 1��)
	*/

	//int i = 1;

	//while (1) {
	//	printf("%2d\r", i);
	//	_sleep(1000);
	//	if (i == 10)
	//		break;
	//	i++;
	//}

	//for (int star = 0; star < 10; star++) {
	//	putchar('*');
	//	Sleep(1000);	// == _sleep(1000) �ڵ�� ����
	//}
	//puts("");

	//while (1) {
	//	for (int i = 0; i < 10; i++)
	//		putchar('*');
	//		printf("\r");
	//		Sleep(1000);
	//		for (int i = 0; i < 10; i++)
	//			putchar(' ');
	//		printf("\r");
	//		Sleep(1000);	
	//}

	//while (1) {
	//	for (int i = 0; i < 10; i++) {
	//		putchar('*');
	//		_sleep(200);
	//	}
	//	_sleep(1000);
	//	printf("\r");
	//	for (int i = 0; i < 10; i++)
	//		putchar(' ');
	//	printf("\r");
	//	_sleep(1000);
	//}

	//while (1) {
	//	for (int i = 0; i < 10; i++) {
	//		putchar('*');
	//		_sleep(100);
	//	}
	//	printf("\r");
	//	for (int s = 0; s < 10; s++) {
	//		putchar(' ');
	//		_sleep(100);
	//	}
	//	printf("\r");
	//}

	//while (1) {
	//	for (int i = 0; i < 20; i++) {
	//		if (i % 2 == 1) {
	//			putchar('*');
	//		}
	//		else {
	//			putchar(' ');
	//		}
	//	}
	//		_sleep(1000);
	//		printf("\r");
	//	
	//	for (int s = 0; s < 20; s++) {
	//		if (s % 2 == 0) {
	//			putchar('*');
	//		}
	//		else {
	//			putchar(' ');
	//		}
	//	}
	//		_sleep(1000);
	//		printf("\r");
	//}
}