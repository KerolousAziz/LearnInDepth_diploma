/*
 * main.c
 *
 *  Created on: Oct 8, 2021
 *      Author: kerolous Aziz
 */
#include "stdio.h"
#define print(...) printf(__VA_ARGS__);fflush(stdin);fflush(stdout);
#define scan(...) scanf(__VA_ARGS__);fflush(stdin);fflush(stdout);
/*********************************************************************/
/*********************** frequency of letter in string ***************/
/*********************************************************************/
int main (void)
{
	char str1[100];
	char x;
	int y=0;
	printf("enter the sentence : \n");
	gets(str1);
	printf("you typed : \n");
	printf("%s\r\n",str1);
	printf("\n");
	printf("enter the letter for finding it's frequency :\n");
	scanf("%c",&x);
	printf("the letter : %c \n",x);
	for (int i = 0 ; i<100 ; i++ )
    {
      if (str1[i]==x)
        y++;
      else continue;
    }
printf ("%d",y);


	return 0;
}




