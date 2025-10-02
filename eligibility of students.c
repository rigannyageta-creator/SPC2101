//simple programme to show eligible students
/*
name:Rigan Nyageta
reg no:PA106/G/28833/25
description:programme to show eligible students
*/

#include<stdio.h>

int main() 
{
	char name;
	int attendance;
	int marks;
	printf("enter your name:");
	scanf("%a",&name);
	printf("enter your attendance:");
	scanf("%a",&attendance);
	printf("enter your marks:");
	scanf("%d",&marks);
	
	if(attendance >=75&&marks >=40)
	{
         ("printfyou are eligible");
	}
	
	else
	{
	printf("you are not eligible");
	}
	
	return 0;
}
