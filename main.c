#include <hidef.h> /* for EnableInterrupts macro */
#include "derivative.h" /* include peripheral declarations */





void main(void) {
  EnableInterrupts;
  /* include your code here */

  SOPT1_COPE = 0;	//Watchdog disabled
 PTBDD = 0x03;
SCIBDL = 0x1A;
SCIC2 = 0x08;
SCID = 0x55;
for(;;)
{
 if (SCIS1_TC == 1)
	{
	SCID = 0x55;
	}
}

















  for(;;) {
    __RESET_WATCHDOG();	/* feeds the dog */
  } /* loop forever */
  /* please make sure that you never leave main */
}
