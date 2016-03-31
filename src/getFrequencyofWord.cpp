/*

Problem : Return the Count of how many times the word occurred in given string in two ways
Way1: Not using Recursion
Way2:Using Recursion [Optional]

Input : "Hello HelloAgain HelloAGAINAGAIN commonItsHelloagain","Hello"
Output : 4

Note: Dont modify original str or word,Just return count ,Spaces can also be part of words like "ab cd" in "ab cd ab cd" returns 2
*/

#include <stdlib.h>

int count_word_in_str_way_1(char *str, char *word){
	int i,count=0,k=0,check=0;
	int len;
	for (len = 0; word[len] != '\0'; len++);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != word[k])
			k = 0;

		if (str[i] == word[k])
			k++;

		if (word[k] == '\0')
		{
			count++;
			i = i - k + 1;
			k = 0;
			check = 0;
		}
	}
	return count;
}



//recursion

int word_count(char *str,char *word,int len,int w_index,int s_index,int count)
{
	int check;
	if (str[s_index] != word[w_index])
		w_index = 0;

	if (str[s_index] = word[w_index])
	{
		check++;
		w_index++;
	}

	if (check == w_index)
	{
		count++;
		s_index -= w_index;
		w_index = 0;
	}
	if (len == 0)
		return count;

	word_count(str, word, len--, w_index, s_index++, count);
}

int count_word_int_str_way_2_recursion(char *str, char *word){
	int len,count;
	for (len = 0; str[len] != '\0'; len++);
	count = word_count(str, word, len, 0, 0, 0);

	return count;
}

