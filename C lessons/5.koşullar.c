Koşullar programlama dillerinin en önemli konusudur ve programlama dillerinin mantığıdır yazdığınız 10 koddan 9 unda koşulları kullanıcaksınız
öyleyse koşullara geçelim

if ve else 
if in kelime anlami eger    
else nin kelime anlamı değilse  
yani bir sartimiz olduğunda bunu if ile degerlendirecegiz şartımıza uymaz ise else aktif olucak örneğin
diyelim ki yasiniz 25 ve kod su sekilde
yasiniz 18 den büyük ise      if yas>20
yazdir   yetiskinsiniz        printf("yetiskinsiniz")
  degilseniz                  else
yazdir yetiskin degilsiniz     printf("yetiskin degilsiniz")
bu temel bi gösterdimi kullanim sekli ise assagidaki sekilde olucak
gecen derste ogrendigimiz gibi kullanicidan yasini alalim 
#include<stdio.h>
int main()
{

int yas;
printf("lutfen yasinizi giriniz ");
scanf("%d",&yas);
if(yas>20)
{
	printf("yetiskinsiniz");
}
    
else
{
	printf("yetiskin degilsiniz");
}

	return 0;
}

if(sart)
{
//sart dogruysa olucaklar
}
else
{
sart doru degilse olucaklar
}
