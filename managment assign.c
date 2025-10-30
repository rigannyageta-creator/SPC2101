//GROUP B CODING ASSIGNMENT
//NAME:RIGAN NYAGETA
//ADMN:PA106/G/28833/25
/*HOTEL MANAGMENT SYSTEM USING ARRAYS TO MONITOR THE REVENUE AND ROOM OCCUPANCY*/

#include<stdio.h>

int main(){
	
int revenue[7],i,total_weekly_revenue=0,average_daily_revenue,occupancy[5][10];
char *days[7]={"monday","tuesday","wednesday","thursday","friday","saturday","sunday"};

for(i=0;i<7;i++){
printf("enter revenue for %s\n",days[i]);
printf("\nenter revenue:");
scanf("%d",&revenue[i]);
total_weekly_revenue=total_weekly_revenue+revenue[i];
}
average_daily_revenue=total_weekly_revenue/7;
printf("the total weekly revenue is:%d\n",total_weekly_revenue);
printf("the average revenue is:%d\n",average_daily_revenue);
	
return 0;
}