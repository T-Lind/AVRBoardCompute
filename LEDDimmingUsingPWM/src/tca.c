/**
 * \file
 *
 * \brief TCA related functionality implementation.
 *
 (c) 2020 Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms,you may use this software and
    any derivatives exclusively with Microchip products.It is your responsibility
    to comply with third party license terms applicable to your use of third party
    software (including open source software) that may accompany Microchip software.

    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
    WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
    PARTICULAR PURPOSE.

    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
    BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
    FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
    ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
    THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 *
 */

/**
 * \addtogroup doc_driver_tca
 *
 * \section doc_driver_tca_rev Revision History
 * - v0.0.0.1 Initial Commit
 *
 *@{
 */
#include <tca.h>

/**
 * \brief Initialize tca interface
 *
 * \return Initialization status.
 */
int8_t TIMER_0_init()
{

	// TCA1.SINGLE.CMP0 = 0x0; /* Compare Register 0: 0x0 */

	// TCA1.SINGLE.CMP1 = 0x0; /* Compare Register 1: 0x0 */

	// TCA1.SINGLE.CMP2 = 0x0; /* Compare Register 2: 0x0 */

	// TCA1.SINGLE.CNT = 0x0; /* Count: 0x0 */

	TCA1.SINGLE.CTRLB = 0 << TCA_SINGLE_ALUPD_bp            /* Auto Lock Update: disabled */
	                    | 0 << TCA_SINGLE_CMP0EN_bp         /* Compare 0 Enable: disabled */
	                    | 0 << TCA_SINGLE_CMP1EN_bp         /* Compare 1 Enable: disabled */
	                    | 1 << TCA_SINGLE_CMP2EN_bp         /* Compare 2 Enable: enabled */
	                    | TCA_SINGLE_WGMODE_SINGLESLOPE_gc; /*  */

	// TCA1.SINGLE.CTRLC = 0 << TCA_SINGLE_CMP0OV_bp /* Compare 0 Waveform Output Value: disabled */
	//		 | 0 << TCA_SINGLE_CMP1OV_bp /* Compare 1 Waveform Output Value: disabled */
	//		 | 0 << TCA_SINGLE_CMP2OV_bp; /* Compare 2 Waveform Output Value: disabled */

	// TCA1.SINGLE.DBGCTRL = 0 << TCA_SINGLE_DBGRUN_bp; /* Debug Run: disabled */

	// TCA1.SINGLE.EVCTRL = 0 << TCA_SINGLE_CNTAEI_bp /* Count on Event Input A: disabled */
	//		 | 0 << TCA_SINGLE_CNTBEI_bp /* Count on Event Input B: disabled */
	//		 | TCA_SINGLE_EVACTA_CNT_POSEDGE_gc /* Count on positive edge event */
	//		 | TCA_SINGLE_EVACTB_UPDOWN_gc; /* Count on prescaled clock. Event controls count direction. Up-count when
	//event line is 0, down-count when event line is 1. */

	// TCA1.SINGLE.INTCTRL = 0 << TCA_SINGLE_CMP0_bp /* Compare 0 Interrupt: disabled */
	//		 | 0 << TCA_SINGLE_CMP1_bp /* Compare 1 Interrupt: disabled */
	//		 | 0 << TCA_SINGLE_CMP2_bp /* Compare 2 Interrupt: disabled */
	//		 | 0 << TCA_SINGLE_OVF_bp; /* Overflow Interrupt: disabled */

	TCA1.SINGLE.PER = 0xfff; /* Period: 0xfff */

	TCA1.SINGLE.CTRLA = TCA_SINGLE_CLKSEL_DIV1_gc      /* System Clock */
	                    | 1 << TCA_SINGLE_ENABLE_bp    /* Module Enable: enabled */
	                    | 0 << TCA_SINGLE_RUNSTDBY_bp; /* RUN STANDBY: disabled */

	return 0;
}
