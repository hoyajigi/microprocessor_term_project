//
// microprocessor_termproject.c
//
// ATmega128�� �������� ���� ���ǵǾ� ����
#include <avr/io.h>

// _delay_ms() �Լ� ���� ���ǵǾ� ����
#include <util/delay.h>

// C ����� �� ���� �Լ�
int main(void){


	// ��Ʈ A�� ���� ����, 0 : �Է�, 1 : ���
	// PA7	PA6	PA5	PA4	PA3	PA2	PA1	PA0
	// Out	Out	Out	Out	Out	Out	Out	Out
	DDRA = 0B11111111;

	// ��Ʈ C�� ���� ����, 0 : �Է�, 1 : ���
	// PC7	PC6	PC5	PC4	PC3	PC2	PC1	PC0
	// Out	Out	Out	Out	Out	Out	Out	Out
	DDRC = 0B11111111;

	// while ��� ���� ������ ���� �ݺ�
	while(1){
	}

	// �Լ��� ���¿� ���� ������(int)�� ���� ��ȯ��
	return 1;
}
