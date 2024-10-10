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
	char arr[28]={"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char* Parr=&arr;
	for (int i=0;i<=27;i++)
	{
		print ("%c ",*Parr);
		Parr++;
	}
}
