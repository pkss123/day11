#include <stdio.h>
#include <Windows.h>

int main() {

	/*
		continue
		 진행중인 반복문에서 다음 반봅그올 넘어가는 코드
		 (남은 코드를 동작시키지 않고 다음 반복 진행)

		break
		 switch, for, while에서 사용
		 break문에 가장 가까운 제어문 종료
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
	//	printf("%d 회전 : ", out);
	//	for (int in = 1; in <= 10; in++) {
	//		printf("%d ", in);
	//		if (in == 5) {
	//			break;
	//		} 
	//	}
	//puts("");
	//}

	/*
		삼항 연산자
		 if ~ else문에서 간단한 실행 코드를 사용할 때
		 if ~ else를 대체하여 사용 가능한 연산자
		 
		 (조건식) ? 코드 1 : 코드 2;
		 조건이 참이면 코드 1 진행, 거짓이면 코드 2 진행
	*/

	//int data, abs = 0;

	//printf("숫자 입력 : "); scanf_s("%d", &data);

	//if (data > 0)
	//	abs = data;
	//else
	//	abs = -1 * data;

	//abs = (data > 0) ? data : -1 * data;

	//printf("절대값 : %d\n", abs);

	/*
		_sleep(숫자)
		Windowws.h 헤더에 포함된 함수
		코드 진행에 딜레이 입력이 가능
		숫자는 1이 0.001초(1/1000초)를 의미
		(ex. _sleep(1000) -> delay 1초)
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
	//	Sleep(1000);	// == _sleep(1000) 코드와 동일
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