#include <atmel_start.h>
#include <util/delay.h>

#define SHIFT_AMOUNT 32
#define SHIFT_MASK ((1 << SHIFT_AMOUNT) - 1)


uint32_t dutyCycle = 0;

int computePi(unsigned int precision) {
	int piValue = 500 << SHIFT_AMOUNT;
	
	for(unsigned int i = 0; i < precision / 2; i++) {
		
	}
	
	return piValue
}

int main() {
	/* Initializes MCU, drivers and middleware */
	atmel_start_init();

	/* Replace with your application code */
	while (1) {
		
		for(int i=0;i<TCA1.SINGLE.PER;i++) {
			dutyCycle = i;
			TCA1.SINGLE.CMP2 = dutyCycle;
			_delay_ms(0.25);
		}
		
		for(int i=TCA1.SINGLE.PER-1;i>=0;i--) {
			dutyCycle = i;
			TCA1.SINGLE.CMP2 = dutyCycle;
			_delay_ms(0.25);
		}
	}
}
