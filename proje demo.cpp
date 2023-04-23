#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
void oyuN1();
void oyuN2();
void menu();
int main() 
{
int secim;
bool sc=true;
menu();
scanf("%d",&secim);
 
	switch(secim)
	 {
	 
	 case 1: oyuN1(); sc=true; break;
 	case 2: oyuN2();  sc=true ;break;
 	default :printf("! Lutfen gecerli bir tuslama yapiniz \n\n\n!");	
    main();
 }





return 0;

}



//start game1
void oyuN1(){
	int secim,dK;
float hO,nA	;
int P=0;
float thO=0;
 int bA=0;
int bsA=0;
int ybA=0;
printf("*********************** YOU ARE WELCOME ******************\n\n\n");
printf("Oyun basliyor ...\n");
for(int i=1;i<11;i++){
dK=rand()%10+1;
//dK=5;	
//printf("%d\n",dK);
printf("%d . dusman belirdi \t Hangi konuma ates edilsin?  :",i);
scanf("%f",&nA);	

hO=nA-dK;
	if(hO<0){
		hO=hO*-1;
	
	}
	thO=thO+hO;
	printf("%d . atis hata oraniniz:   %f\n",i,hO);
	
	if(hO==0){
		P=P+10;
		bA++;
		printf("TEBRIKLER Basarili atis yaptiniz 10 puan kazandiniz\n");	
	}
	else if(hO<=0.5)
	{
	ybA++;
		P=P+5;
	printf("Cok yaklastiniz 5 puan kazandiniz\n");	
		printf("Dusman konumu  :   %d idi ",dK);
	}
	else{
	
	P=P+0;
	bsA++;
	printf("Basarisiz atis gerceklestirdiniz...\n");
	printf("Dusman konumu  :   %d",dK);
}
	
	
	
	printf("\n\n\n");
}

	printf("\n\n\n");
	printf("10   atistaki Basarisiz atis sayisi    : %d\n",bsA);
printf("10   atistaki Basarili  atis sayisi     :  %d\n",bA); 
printf("10   atistaki  toplam yakin basarili  atis sayisi    %d  \n",ybA); 
printf("10   atistaki  toplam puaniniz  :  %d  \n",P); 
printf("10   atistaki  toplam hata oraniniz %f  \n\n\n\n",thO); 

	
printf("\n\ntekrar oynamak icin  ------->1\n\n");
	printf("menu ye donmek  icin  ------->2\n");
	
	
	
	scanf("%d",&secim);
 
	switch(secim)
	 {
	 
	 case 1: oyuN1();  break;
 	case 2: main();  break;
 	default :printf("! Hatali tuslama yaptiniz menu ye yönlendiriliyorsunuz ... \n\n\n\n\n!");	
    main();
 }
	
	
	


}
//finish game1

//start game2
void oyuN2(){



int dizi[3],sayi,kB,kO,kY,secim;
printf("*********************** YOU ARE WELCOME ******************\n\n\n");
printf("Oyun basliyor ...\n\n");

printf("COMPUTER : Rakamlari birbirinden farkli 3 basamakli random bir sayi uretilmistir \n ");


do{
	dizi[2]=rand()%10;	
	dizi[0]=rand()%10;	
	dizi[1]=rand()%10;	
	


}while(dizi[0]==dizi[1] ||dizi[0]==dizi[2]  || dizi[1]==dizi[2] || dizi[2]==0 );

//	printf ("%d %d %d ",dizi[2],dizi[1],dizi[0]);




for(int i=0;i<10;i++){
	
printf("\n%d . tahmininizi girininiz ----------> ",(i+1));
	scanf("%d",&sayi);
	
	kB=sayi%10;
	kO=(sayi/10)%10;
	kY=sayi/100;
if(kB==kO || kB==kY || kO==kY)
{
	printf("lütfen rakamlari birbirinden farkli 3 basamakli bir sayi griniz");
		scanf("%d",&sayi);
	
	kB=sayi%10;
	kO=(sayi/10)%10;
	kY=sayi/100;
}

	if(dizi[0]==kB && dizi[1]==kO && dizi[2]==kY){
	printf("TEBRIKLER %d . tahmininizde bildiniz ... Skorunuz :%d",i++,100-(i*10));
break;
}
//printf ("%d %d %d ",kY,kO,kB);
printf("\nipucu sayiniz   :");
if(kY==dizi[2]){
	printf(" 1");
}
else if(kY==dizi[0] || kY==dizi[1] ){

	
	printf("9");
}
	
	else 
	printf("0");

	if(kO==dizi[1]){
	printf("1");
}
else if(kO==dizi[0] || kO==dizi[2] ){

	
	printf("9");
}
	
	else 
	printf("0");
	
	if(kB==dizi[0]){
	printf("1");
}
else if(kB==dizi[1] || kB==dizi[2] ){

	
	printf("9");
}
	
	else 
	printf("0");



}

	printf("\n\ntekrar oynamak icin  ------->1\n\n");
	printf("menu ye donmek  icin  ------->2\n");
	
	
	
	scanf("%d",&secim);
 
	switch(secim)
	 {
	 
	 case 1: oyuN2();  break;
 	case 2: main();  break;
 	default :printf("! Hatali tuslama yaptiniz menu ye yönlendiriliyorsunuz ... \n\n\n\n\n!");	
    main();
 }
	

	
}
//finish game2

void menu(){
	int c=1,d=2;
	printf("\n\n********************************************************\n\n");
	printf("\n\n HOSGELDINIZ HANGI OYUNU OYNAMAK ISTERSINIZ\a\n\n");
	printf("\n\n 1 - - - - ->   %c  God Of War  %c\n\n",c,d);
		printf("\n\n 2 - - - - ->   %c  Guess Who Am I   %c\n\n",d,c);
	
	
	printf("\n\n ------------->");
	
	
		
	
}
