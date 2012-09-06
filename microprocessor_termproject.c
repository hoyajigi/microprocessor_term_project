//
// microprocessor_termproject.c
//
// ATmega128의 레지스터 등이 정의되어 있음
#include <avr/io.h>

// _delay_ms() 함수 등이 정의되어 있음
#include <util/delay.h>

// C 언어의 주 실행 함수
int main(void){


	// 포트 A의 방향 설정, 0 : 입력, 1 : 출력
	// PA7	PA6	PA5	PA4	PA3	PA2	PA1	PA0
	// Out	Out	Out	Out	Out	Out	Out	Out
	DDRA = 0B11111111;

	// 포트 C의 방향 설정, 0 : 입력, 1 : 출력
	// PC7	PC6	PC5	PC4	PC3	PC2	PC1	PC0
	// Out	Out	Out	Out	Out	Out	Out	Out
	DDRC = 0B11111111;

	// while 블록 안의 문장을 무한 반복
	while(1){
	}

	// 함수의 형태와 같이 정수형(int)의 값을 반환함
	return 1;
}
