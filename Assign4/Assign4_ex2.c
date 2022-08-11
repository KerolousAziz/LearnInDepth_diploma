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
//#include<stdio.h>

int factorial(int num);
int main()
{

int i = 0 ;
int y = 0;
int x ;
int fact ;
printf("enter number to get factorial !!: ");
scanf("%d",&x) ;
fact = factorial(x);
printf("factorial of %d = %d",x,fact);

    return 0;
}
int factorial(int num)
{
if (num!=1)
return num*factorial(num-1);
}
