/**********************************************************
* twice -- Shows basic example of the integer conversion
*	specification with %d
*
* Author: mbiczo
*
* Purpose: Will show basic example of math and ICS
*
* Usage:
*	Execute program for basic output
**********************************************************/
#include <stdio.h>

int term;  /* term used in two expressions */

int main()
{
	term = 3 * 5;
	printf("Twice %d is %d\n", term, 2*term);
	printf("Three times %d is %d\n", term, 3*term);
	return(0);
}