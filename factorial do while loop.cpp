#include<stdio.h>

int main(){

	int i=1;
	int n , fact=1;

	printf("Enter Numbers : ");
	scanf("%d",&n);

	do{
		fact = fact*i;
		i++;
	}while(i<=n);
		printf("%d\n",fact);


	return 0;
}
