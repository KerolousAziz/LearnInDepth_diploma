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
/*********************** search in  arrays ***************************/
/*********************************************************************/
int main (void)
{
	int n,x,c=0;
	print ("enter the number of the array : ");
	scan ("%d",&n);
	int arr1 [n] ;
	for (int i=0 ;i<n;i++)
	{
		print ("element %d in the array  ",i);
		scan ("%d",&arr1[i]);
	}
	print ("enter the number to search : ");
	scan ("%d",&x);
	for (int i=0 ;i<n;i++)
	{
		if (arr1[i]==x)
		{
			print ("the element found in location : %d ",i);
			c=1;

		}

	}
	if (c!=1)
		print ("not found !!");

}




