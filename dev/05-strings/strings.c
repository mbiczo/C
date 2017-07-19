/****************************************************
Example of using strings in C along with a few 
standard routines
****************************************************/
#include <string.h>
#include <stdio.h>

char first_name[30];		/*first name of someone*/
char last_name[30];		/*last name of someone*/
char full_name[60];		/*first and last name*/
char first_name_copy[30];	/*copy of first name*/
int length;			/*the length of the string*/
int ret_val;			/*the result from strcmp*/

int main()

{
	/*initialize first name*/
	strcpy(first_name, "James");
	printf("first name is %s\n", first_name);

	/*initialize last name*/
	strcpy(last_name, "Westfield");
	printf("last name is %s\n", last_name);

	/*initialize full name*/
	strcpy(full_name, first_name);

	/*concatenate rest of full name including space*/
	strcat(full_name, " ");
	strcat(full_name, last_name);
	
	length = strlen(full_name);

	printf("the full name is %s\n", full_name);
	printf("the length of the name is %d\n", length);
	
	/*create copy of first name*/
	strcpy(first_name_copy, first_name);

	/*compare copies; 0 if same, otherwise non-zero*/
	ret_val = strcmp(first_name_copy, first_name);
	printf("do the strings match? 0 if true: %d\n", ret_val);

	return(0);		
}

