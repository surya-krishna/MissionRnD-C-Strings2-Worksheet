/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>

char * get_last_word(char * str){
	int i = 0,last_sp=0;
	char *word;
	if (str==NULL)
	    return NULL;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			last_sp = i;
		}
	}
	word = (char*)malloc(sizeof(char)*(i - last_sp));
	for (i = last_sp; str[i] != '\0'; i++)
		word[i - last_sp] = str[i];
}
