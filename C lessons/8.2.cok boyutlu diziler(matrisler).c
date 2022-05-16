#include <stdio.h>
 
int main () {
int sayilar[3][3] = {{1,2,3,},{4,5,6},{7,8,9}};
//matrislerde aslinde diziler gibidir 
//kat kat diziler gibi dusunulebilir
//normal dizideki islemlerin aynilari gecerlidir
/*

1 2 3

4 5 6

7 8 9

*/
printf("%d",sayilar[0][2]);
   return 0;
}
