//
// microprocessor_termproject.c
//
// ATmega128의 레지스터 등이 정의되어 있음
#include <avr/io.h>

#define F_CPU 14645600UL

// _delay_ms() 함수 등이 정의되어 있음
#include <util/delay.h>

// C 언어의 주 실행 함수
int main(void){
	int i;
	long j;

	// 포트 A의 방향 설정, 0 : 입력, 1 : 출력
	// PA7 PA6 PA5 PA4 PA3 PA2 PA1 PA0
	// Out Out Out Out Out Out Out Out
	DDRA = 0B11111111;

	// 포트 C의 방향 설정, 0 : 입력, 1 : 출력
	// PC7 PC6 PC5 PC4 PC3 PC2 PC1 PC0
	// Out Out Out Out Out Out Out Out
	DDRC = 0B11111111;

	// 포트 D의 방향 설정, 0 : 입력, 1 : 출력
	// PD7 PD6 PD5 PD4 PD3 PD2 PD1 PD0
	// Out Out Out Out Out Out Out Out
	DDRD = 0B11111111;

	// while 블록 안의 문장을 무한 반복
	while(1){
		// 오른쪽을 이동하는 반복
		for(i=0;i<22;i++){
			// j를 i만큼 쉬프트한다.
			j=0B00000000000000000000000000000111L<<i;
			// 마스킹 하여 PORTA에 집어 넣는다.
			PORTA=j&0B00000000000000000000000011111111L;
			// 마스킹 하여 PORTC에 집어 넣는다.
			PORTC=(j&0B00000000000000001111111100000000L)>>8;
			// 마스킹 하여 PORTD에 집어 넣는다.
			PORTD=(j&0B00000000111111110000000000000000L)>>16;
			// 일정 시간만큼 딜레이 시킨다.
			_delay_ms(2000);
		}
		// 왼쪽으로 이동하는 반복
		for(i=21;i>0;i--){
			// j를 i만큼 쉬프트한다.
			j=0B00000000000000000000000000000111L<<i;
			// 마스킹 하여 PORTA에 집어 넣는다.
			PORTA=j&0B00000000000000000000000011111111L;
			// 마스킹 하여 PORTC에 집어 넣는다.
			PORTC=(j&0B00000000000000001111111100000000L)>>8;
			// 마스킹 하여 PORTD에 집어 넣는다.
			PORTD=(j&0B00000000111111110000000000000000L)>>16;
			// 일정 시간만큼 딜레이 시킨다.
			_delay_ms(2000);
		}
	}

	// 함수의 형태와 같이 정수형(int)의 값을 반환함
	return 1;
}
