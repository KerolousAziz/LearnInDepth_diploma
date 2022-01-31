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
/*********************** sum of two arrays ***************************/
/*********************************************************************/
int main (void)
{
	
    int a[2][2],b[2][2],mul[2][2];
    /* scan first matrix*/
    for (int i=0;i<2;i++)
        for (int j=0;j<2;j++)
    {
        print ("enter a%d%d = ",i,j);
        scan ("%d",&a[i][j]);

    }

    /* print first matrix*/
     for (int i=0;i<2;i++)
        {
        print ("\n");

        for (int j=0;j<2;j++)
    {
        print ("a%d%d = %d     ",i,j,a[i][j]);

    }
        }
        print ("\n");
        print ("\n");

   /* scan second matrix*/
    for (int i=0;i<2;i++)
        for (int j=0;j<2;j++)
    {
        print ("enter b%d%d = ",i,j);
        scan ("%d",&b[i][j]);

    }
/* print second matrix */
     for (int i=0;i<2;i++)
     {
      print ("\n");


        for (int j=0;j<2;j++)
    {
        print ("b%d%d = %d    ",i,j,b[i][j]);

    }
     }
     print ("\n");
     /***multipying**/
     for (int i=0;i<2;i++)
             for (int j=0;j<2;j++)
         {
            	mul[i][j]=a[i][j]+b[i][j];

         }
       /* printing ans */
     for (int i=0;i<2;i++)
          {
           print ("\n");


             for (int j=0;j<2;j++)
         {
             print ("mul%d%d = %d    ",i,j,mul[i][j]);

         }
          }
          print ("\n");
	return 0;
}
