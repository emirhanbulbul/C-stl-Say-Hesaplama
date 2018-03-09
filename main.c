#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int taban=0;
	int ust=0;
	int sonuc=1;
	int i =1;
	printf("tabani giriniz:");
	scanf("%d",&taban);
	
	printf("ustu giriniz:");
	scanf("%d",&ust);
	
	while(i<=ust){
		i++;
		sonuc=sonuc*taban;
		
	}
	printf("sonuc:%d",sonuc);
	
	return sonuc;
}
