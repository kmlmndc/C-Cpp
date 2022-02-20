/* while dongusu ile girilen 10 adet sayinin ortalamasini bulan program*/

#include<stdio.h>

int main(){
  int sayici, toplam, sayi, ortalama;

  toplam = 0;
  sayici = 1;

  while (sayici <= 10){
    printf("input the note :" );
    scanf("%d", &sayi);
    toplam = toplam + sayi;
    sayici = sayici + 1;
  }

  ortalama = toplam / 10;
  printf("Sinif ortalamasi %d dir.\n", ortalama);

  return 0;

}
