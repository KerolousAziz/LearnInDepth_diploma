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
	int  num1,num2,ans;
	char cal;
	while (1)
	{

		print("Enter the calculation type :\n");
		scan("%c",&cal);
		switch (cal)
		{
		case ('+') :
    	{
			print ("enter the first number  :");
			scan  ("%d",&num1);
			print ("enter the second number  :");
			scan  ("%d",&num2);
			ans = num1 + num2 ;
			print ("the answer = %d \n ",ans);
    	}
		break ;
		case ('-') :
    	   {
			print ("enter the first number  :");
			scan  ("%d",&num1);
			print ("enter the second number  :");
			scan  ("%d",&num2);
			ans = num1 - num2 ;
			print ("the answer = %d \n ",ans);
    	   }
		break ;
		case ('*') :
    	 {
			print ("enter the first number  :");
			scan  ("%d",&num1);
			print ("enter the second number  :");
			scan  ("%d",&num2);
			ans = num1 * num2 ;
			print ("the answer = %d \n",ans);
    	 }
		break ;
		case ('/') :
    	 {
			print ("enter the first number  :");
			scan  ("%d",&num1);
			print ("enter the second number  :");
			scan  ("%d",&num2);
			ans = num1 / num2 ;
			print ("the answer = %d \n",ans);
    	 }
		break;


		default : ;
		break ;

		}
	}
	return 0;
}
