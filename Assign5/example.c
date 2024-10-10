/*
 * main.c
 *
 *  Created on: jan 1,2022
 *      Author: kerolous Aziz
 */

#include "stdio.h"
#include "string.h"
#include "conio.h"


struct Sstudent
{
	char name[6];
	int roll;
	int mark;
}stud1;

int main ()
{
    printf("enter the student name :\n ");
    scanf("%s",&stud1.name);
    printf("enter the student roll :\n ");
    scanf("%d",&stud1.roll);
    printf("enter the student mark :\n ");
    scanf("%d",&stud1.mark);
    printf("student name : %s \n");
    printf("student roll : %d \n");
    printf("student marks : %d \n");


	return 0;
}
