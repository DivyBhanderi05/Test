#include<stdio.h>
main(){
	int a,b,c,d;
	printf("Enter A : ");
	scanf("%d",&a);
	printf("Enter B : ");
	scanf("%d",&b);
	printf("Enter C : ");
	scanf("%d",&c);
	printf("Enter D : ");
	scanf("%d",&d);
	
	if(a<b){
		if(b<c){
			if(c<d){
				printf("D is Max");
			}
			else{
				printf("C is Max");
			}
		}
		else{
			if(b<d){
				printf("D is Max");
			}
			else{
				printf("B is Max");
			}
		}
	}
	else{
		if(a<c){
			if(c<d){
				printf("D is Max");
			}
			else{
				printf("C is Max");
			}
		}
		else{
			if(a<d){
				printf("D is Max");
			}
			else{
				printf("A is Max");
			}
		}
	}
}
