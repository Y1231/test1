#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	unsigned int counter;//不标明输入的次数 
	int grade;
	int total;
	float average;
	
	total=0;
	average=0;
	
	printf("%s","Enter grade,-1 to end:");
	scanf("%d",&grade);
	
	while(grade!=-1){
		total=total+grade;
		counter=counter+1;//输入值的个数 
		
		printf("%s","Enter grade,-1 to end:");
		scanf("%d",&grade);
	}
	if(counter!=0){
		average=(float) total/counter;
		printf("Class average is %.2f/n",average); 
	}
	else{
		puts("No grade were entered");
	}
	}
	
