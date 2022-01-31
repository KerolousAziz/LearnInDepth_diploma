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
/*********************** Transpose of array ***************************/
/*********************************************************************/
int main (void)
{
	int n,m;
	print ("enter the rows = ");
	scan ("%d",&n);
	print ("enter the column = ");
	scan ("%d",&m);
	int a[n][m],b[m][n];
	// scan first matrix
	for (int i=0;i<n;i++)
		for (int j=0;j<m;j++)
		{
			print ("enter a%d%d = ",i,j);
			scan ("%d",&a[i][j]);

		}

	// print first matrix
	for (int i=0;i<n;i++)
	{
		print ("\n");

		for (int j=0;j<m;j++)
		{
			print ("a%d%d = %d     ",i,j,a[i][j]);

		}
	}
	print ("\n");
	print ("\n");


	/** the transpose *****/

	for (int i=0;i<m;i++)
	{
		for (int j=0;j<n;j++)
		{
			b[i][j] = a[j][i];
		}
	}

	for (int i=0;i<m;i++)
	{
		print ("\n");

		for (int j=0;j<n;j++)
		{
			print ("a%d%d = %d     ",i,j,b[i][j]);

		}
	}
	print ("\n");
	print ("\n");




	return 0;
}
