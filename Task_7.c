#include<stdio.h>
main(){
	
	int i,j, a[3][3],sum1,sum2,sum3;
	printf("Enter the elements of mtrix");
	for(i=0 ; i<3 ; i++){
		for(j=0 ; j<3 ; j++){
			printf("element [%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("matrix is \n\n");
	for(i=0 ; i<3 ; i++){
		for(j=0 ; j<3 ; j++){
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	
	for(j=0 ; j<3 ; j++){
		sum1 = sum1+a[0][j];
	}
	printf("Sum of 1st row : %d\n",sum1);
	for(j=0 ; j<3 ; j++){
		sum2 = sum2+a[1][j];
	}
	printf("Sum of 2nd row : %d\n",sum2);
	for(j=0 ; j<3 ; j++){
		sum3 = sum3+a[2][j];
	}
	printf("Sum of 1st row : %d\n",sum3);
}
