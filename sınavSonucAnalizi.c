#include<stdio.h>

int main()
{
  int gecenler = 0, kalanlar = 0, ogrenci = 1, sonuc;

  while (ogrenci <= 10){
    printf("Sonucu giriniz(1=gecti, 2=kaldi) : ");
    scanf("%d", &sonuc);

    if (sonuc == 1) {
      gecenler = gecenler + 1;
    } else {
      kalanlar = kalanlar + 1;
    }

    ogrenci = ogrenci + 1;
  }

  printf("Gecenler %d\n", gecenler);
  printf("Kalanlar %d\n", kalanlar);

  if(gecenler > 8)
    printf("Yuksek Basari\n");

  return 0;
}
