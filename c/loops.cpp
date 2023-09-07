#include<stdio.h>
int main()
{
	int i = 0;
	while(i <=5){
		printf("%d\n",i);
		i++;
	}
	int j =  0;
	do{
		printf("%d\n",j);
		j++;
	}
	while(j<= 10);
	
	printf("---------\n");
	int k;
	for(k = 0; k <=10;k++)
	{
		if(k % 2 == 0)
		{
			printf("%d\n",k);
		}
	}
	return 0;
}
