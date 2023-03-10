#include<stdio.h>

main(){
	float bill,n,surcharge;
	
	printf("Enter the units of Electricity used : ");
	scanf("%f",&n);
	
	if(n<=50){
		bill = n*(0.5);
	}
	
	else if(n<=150){
		bill = 25 + (n-50)*(0.75);
	}
	
	else if(n<=250){
		bill = 100 + (n-150)*(1.20);
	}
	
	else(n>250);{
		bill = 220 + (n-250)*(1.50);
	}
	surcharge = bill*0.2;
	bill = bill+surcharge;
	printf("Bill = %f",bill);
	

}
