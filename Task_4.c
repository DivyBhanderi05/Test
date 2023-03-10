#include<stdio.h>
main(){
	
	int i,j,a[3][3],sum = 0;
	
	printf("Entere the elements of the matrix : ");
	for(i=0 ; i<3 ; i++){
		for(j=0 ; j<3 ; j++){
			printf("Element [%d][%d] : ",i,j);
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
	for(i=0 ; i<3 ; i++){
			sum = sum + a[i][i];
			}
		
	printf("The Sum of diagonl elements is %d",sum);	
	}
	
	
