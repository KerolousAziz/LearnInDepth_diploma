/*
 * main.c
 *
 *  Created on: Oct 8, 2021
 *      Author: kerolous Aziz
 */
#include "stdio.h"
#define print(...) printf(__VA_ARGS__);fflush(stdin);fflush(stdout);
#define scan(...) scanf(__VA_ARGS__);fflush(stdin);fflush(stdout);


//int prime (int a ,int b);
int main (void)
{
	int m;
	int* Pm=&m;
	while (1)
	{
		printf ("enter the value of m :");
		scan  ("%d",&m);
		print ("address of m = %d , value of m = %d ",Pm,*Pm);
		print ("\n");
		print ("again :\n");
	}
}
