#include <stdio.h>
 
int main () {
int sayilar[10] = {3, 4, 5, 6, 7};
// su anda dizimiz on elamanli bir dizi ama iceride sadece 5 elaman var 
// simdi dizimize eleman ekleyelim
int i=5;
while(i<10){
	scanf("%d",&sayilar[i]);
	i++;
//diziye elaman eklerken o degiskene dogrudand deger verebilir
//sayilar[5]=4;
//ama kullanicdan deger almak ve bunu birden cok kez yapiyorsak 
//bir dongu icinde yapmamiz isimizi cok kolaylastirir

}
int x=0;
while(x<10){

printf("%d  ",sayilar[x]);
x++;}
   return 0;
}
