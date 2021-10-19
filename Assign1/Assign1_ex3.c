/*
 * main.c
 *
 *  Created on: Oct 8, 2021
 *      Author: kerolous Aziz
 */
#include "stdio.h"
#define print(...) printf(__VA_ARGS__);fflush(stdin);fflush(stdout);
#define scan(...) scanf(__VA_ARGS__);fflush(stdin);fflush(stdout);
int main (void)
{
	int x,y,z;
	print("Enter two integers:");
	scan("%d",&x);
	scan("%d",&y);
	z=x+y;
	print("Sum:%d\n",z);
	return 0;
}
