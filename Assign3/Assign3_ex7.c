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
/*********************** The length of string ************************/
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

	for (int i = 0 ; i<100 ; i++ )
    {
      if (str1[i]==0)
        break;
      else y++;
    }
printf ("%d",y);


	return 0;
}




                                                                                                                  