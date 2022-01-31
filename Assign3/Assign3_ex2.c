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
/*********************** average array ***************************/
/*********************************************************************/
int main (void)
{
	int n,sum=0,av;

	print ("enter how many number you will enter = ");
	scan ("%d",&n);
	int a[n];
	for (int i=0;i<n;i++)
	{
		print ("enter number %d = ",i);
		scan ("%d",&a[i]);
	}
	for (int i=0;i<n;i++)
		{
			sum = sum + a[i];
		}
	av = sum / n ;
	print ("%d",av);

	return 0;
}
