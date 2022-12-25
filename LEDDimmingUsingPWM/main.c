#include <atmel_start.h>
#include <util/delay.h>

uint32_t dutyCycle = 0;

int main(void)
{
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
