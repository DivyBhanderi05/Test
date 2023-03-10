#include<stdio.h>
#include<string.h>

main(){
	char a[50],i,j;
	
	printf("Enter string : ");
	gets(a);
	
	i=strrev(a);
	
	if(strcmp(i,a) == 0){
		printf("String is a Palindrome");
	}
	else{
		printf("String is not a Palindrome");
	}
}
