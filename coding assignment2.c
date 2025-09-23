//group B CODING ASSIGNMENT 2
//Name:RIGAN NYAGETA
//Adm no:PA106/G/28833/25
/*PROGRAMME TO PROMPT THE USERS TO ENTER
1)THEM HEIGHT
2)THEM ID-NUMBER
3)THEM BANK ACCOUNT BALANCE
*/
#include <stdio.h>

int main()
{
	int Height;
	int ID_number;
	int Bank_account_balance;
	
	printf("enter your Height:\n");
	scanf("%d",&Height);
	printf("enter your ID_NUMBER:\n");
	scanf("%d",&ID_number);
	printf("enter your Bank account balance:\n");
	scanf("%d",&Bank_account_balance);
	
	printf("The user of:\n");
	
	printf("height:%d:\n",Height);
	printf("ID number:%d\n",ID_number);
	
	printf("is recognised by the system\n");
	
	printf("your account balance is:%d",Bank_account_balance);
	return 0;
}
