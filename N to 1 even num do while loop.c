#include<stdio.h>

int main(){
	int n,i=1;
	
	printf("Enter value : ");
	scanf("%d",&n);
	
	do{
		if(n%2==0){
			printf("\n Even number=%d",n);
			
		}
		n--;
	}
	while(n>i);
	
	
	
	
	
	return 0;
}
