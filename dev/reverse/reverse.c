/****************************************************
Shows a simple example to reverse three chars
****************************************************/
#include <stdio.h>

char char_1;  /*the first charachter*/
char char_2;  /*the second charachter*/
char char_3;  /*the thrid charachter */

int main ()
{
	char_1 = 'A';
	char_2 = 'B';
	char_3 = 'C';

	printf("The chars in normal order are %c%c%c\n", char_1, char_2, char_3);
	printf("The chars in reverse are %c%c%c\n", char_3, char_2, char_1);

	return(0);
}
