

#include<stdio.h>
int main()
{
//  // yorum satiri koymak icin kullanilir bu sayede kodu okuyan kisiye yaptignizi aciklayabilirsiniz ayni zamanda koda etki etmez
// kullaniciadan deger alma
int a;
printf("lutfen deger giriniz ");
scanf("%d",&a);
printf("girdiginiz deger: %d ",a);

	return 0;
}

ilk olarak kütüphaneleri ekliyoruz ardindan kullancidan deger alicagimiz için bi degisken yapıyoruz ki kullanicidan aldigimzi degeri bir yere koyabilelim
int a ;  ile a değişkenini oluşturuyoruz   scanf fonksiyonu ile aldigimiz degeri a degerine atiyoruz 
bu fonksiyonda dikkat edilmesi gereken önemli nokta , den sonra % koyup atamak istediğimiz değişkeni yaziyoruz & bizim a ya atamamizi sagliyor bu yüzden ,ve & koymayi unutmayin
