
#include<stdio.h>
int main(){
	
	char name[10];
	char surname[10];
	
	printf("Enter your name :");
	scanf("%s",&name);
	printf("Enter your surname : ");
	scanf("%s",&surname);
	
	printf("Hello ");
	printf("%s   ",name);
	printf("%s",surname);
	
	
	return 0;
}
