#include <stdio.h>

void bol(int sayi1,int sayi2){
	
	printf("Sayi 1 : \n");
	scanf("%d\n",&sayi1);
	printf("Sayi 2 : \n");
	scanf("%d",&sayi2);
	double bolum;
	if(sayi2 != 0)
	{
		 bolum = sayi1 / sayi2;
		 printf("Bolum : %d\n",bolum);
	}
	else{
		printf("Payda 0 olamaz!!");
	}
	
	
}
void carp(int sayi1,int sayi2){
	
	printf("Sayi 1 : \n");
	scanf("%d",&sayi1);
	printf("Sayi 2 : \n");
	scanf("%d",&sayi2);
	int carpim = sayi1 * sayi2;
	printf("Carpim : %d\n",carpim);
	
	
	
}
void farkAl() {
    int sayi1;
    int sayi2;
    
  /*
  
  
  A function consist of two parts:

Declaration: the function's name, return type, and parameters (if any)
Definition: the body of the function (code to be executed)
  */
    printf("Sayi 1 : ");
    scanf("%d", &sayi1);
    
    printf("Sayi 2 : ");
    scanf("%d", &sayi2);
    
    int fark = sayi1 - sayi2;
    printf("Fark: %d\n", fark); 
}

// Overload dedigimiz olay burda gerceklesiyor
void topla(int sayi1, int sayi2) { //declare etme
    int toplam = sayi1 + sayi2;
    printf("Toplam: %d\n", toplam); //def etme
}


int sum(int k){
	
if(k>0){
	return k + sum(k-1);
}	
else{
	return 0;
}
	
	
	
}
int main() {
	int result = sum(5);
	printf("%d\n",result);
    topla(20, 4); 
    farkAl();    
   carp(5,6);
    bol(5,3);
    return 0;
}

