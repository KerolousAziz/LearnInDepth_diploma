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
/*********************** Insert in  arrays ***************************/
/*********************************************************************/
int main (void)
{
	int n=0,x=0,c=0;
	print ("enter the number of the array : ");
	scan ("%d",&n);
	int arr1[n];
    int arr2[n];


	for (int i=0 ;i<n;i++)
	{
		print ("element %d in the array  ",i);
		scan ("%d",&arr1[i]);
	}
	for (int i=0 ; i<n ; i++)
	{
	    arr2[i] = arr1[i] ;
	 printf("%d\n",arr2[i]);
	}

	print ("enter the element to insert the element : ");
	scan ("%d",&c);
	print ("the element to insert the element : %d \n" ,c);
	print ("enter the loction to insert the element : ");
	scan ("%d",&x);
	print ("the location to insert the element : %d \n" ,x);


	for (int i=0 ; i<n ; i++ )
	{
	 if (i==x)
	 {
		 arr2[i]=c;
	 }
	}
	for (int i=0 ; i<n ; i++)
	{
	 printf("%d\n",arr2[i]);
	}

}




