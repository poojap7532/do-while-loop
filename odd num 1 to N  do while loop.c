#include<stdio.h>

int main(){
  int n,i=1;
  
  printf("Enter value: ");
  scanf("%d",&n);
  
  do{
  	if(i%2!=0){
  		printf("\n odd number=%d",i);
	  }
	  i++;
	  
  }
  while(i<n);
	
	
	return 0;
}
