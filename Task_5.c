#include<stdio.h>
main(){
	int i,n,fd,ld;
	printf("Enter a Number : ");
	scanf("%d",&n);
	
	ld = n%10;
	
	while(n>=10){
		n=n/10;
	}
	fd=n;
	printf("Sum : %d",fd+ld);
}
