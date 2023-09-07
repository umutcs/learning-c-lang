#include<stdio.h>
#include<string.h>
int main(){
	
	
	char ad[] = "Umut";
	char soyad[] = "Yurdugul";
	
	printf("%s\n",strupr(ad));
	printf("%s\n",strrev(ad));
	printf("%d\n",strlen(ad));
	
	printf("%d\n",strlen(soyad));
	
	//strcat stringleri birlestirir
	printf("%s\n",strcat(ad,soyad));
	
	//strcpy(degisecekolan,neyledegiscek)
	strcpy(ad,soyad);
	printf("%s\n",ad);
	printf("%s\n",soyad);
	
	return 0;
}
