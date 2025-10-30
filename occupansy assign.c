//GROUP B ASSIGNMENT
//NAME:RIGAN NYAGETA 
//REG NO:PA106/G/28833/25
/*ROOM OCCUPANCY*/
#include <stdio.h>

int main(){
	int f,r,occupancy[5][10],sum;
	srand(time(0));
	
    for(f = 0;f < 5;f++){ 	
            printf("floor%d\n",f+1);
		       for (r = 0; r < 10; r++){
          printf("     room%d:",r+1);
        if(occupancy[5][10]=rand()%2){
         sum=sum+1;
		 printf("occupied\n");}
		else{
		 printf("vacant\n");}
		
    }
	}
	printf("\ntotal number of occupird %d \n",sum);
	
  return 0;
}
