/****************************************************
Basic example using an array to find an average
of 5 numbers.

Note: this is not as dynamic as it could be and is
just for illustration purposes
****************************************************/

#include <stdio.h>

float data[5];  /*array to hold numbers*/
float total;    /*the total of all values in array*/
float average;  /*the computed average of numbers*/

int main()
{
	data[0] = 3.14;
	data[1] = 42.42;
	data[2] = 13.14;
	data[3] = 100.4;
	data[4] = 99.99;

	total = data[0] + data[1] + data[2] + data[3] + data[4];
	average = total / 5.0;

	printf("The total is %f and the average is %f\n", total, average);

	return(0);
}
