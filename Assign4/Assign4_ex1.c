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
/*********************** Function for prime number check *************/
/*********************************************************************/
//#include<stdio.h>
int isit_prime (int x);
int st1 , en2 , pri_ind ;
int main ()
{
    printf("this program for checking the number if it's prime number \n ");
    printf("enter the start for the checking numbers :");
    scanf("%d",&st1);
    printf("enter the end of the number to check :");
    scanf("%d",&en2);
    for (int i = st1+1 ; i<en2 ; i++ )
    {
        pri_ind = isit_prime (i);
        if(pri_ind==0)
            printf("found prime : %d \n",i);

    }
    return 0;

}
int isit_prime (int x)
{
  pri_ind = 0;
  for (int j=2 j<=x/2;j++)
    {
    if (x%j==0)
    {
    pri_ind = 1 ;
    break ;
    }

  }
  return pri_ind;
}

