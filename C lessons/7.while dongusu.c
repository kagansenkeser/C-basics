#include <stdio.h>
 
int main () {

   // oncelikle bir deger tanimliyoruz dongu icin
   int a = 10;

   // while diyip parantez icine sartimizi yaziyoruz
   while( a < 20 ) {
   	//sartimiz saglandigi sure boyunca kod calisicak
   	//
      printf("a'nin degeri : %d\n", a);
      a++;
    // a degerini arttiriyoruz ki dongumuz sonsuza dek surmesin
   }
 
   return 0;
}
