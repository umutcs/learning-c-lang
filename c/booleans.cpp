#include<stdio.h>
#include<stdbool.h>
int main(){
	
	bool greater;
	int ageToVote = 18;
	int myAge = 17;
	
	if(myAge >= ageToVote)
	{
		greater =1;
	}
	else{
		greater = 0;
	}
	printf("%d",greater);
	
	return 0;
}
