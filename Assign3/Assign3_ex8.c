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
/*********************** The inversion of string ************************/
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
	printf("........the inversion..............\n");
	int len=strlen(str1);
	//printf("%d\n",len);
    char str2[len];

	for (int i = 0 ; i<len ; i++ )
    {
      str2[len-i]=str1[i];

    }

printf ("%s\r\n",str2);


	return 0;
}




