#include<stdio.h>
main(){
	
	int n;
	printf("Enter The number : ");
	scanf("%d",&n);
	
	if(n%15==0){
		printf("The number is divisible by both 3 and 5");
	}
	else{
		printf("the number is not divisible by 3 and 5");
	}
}
