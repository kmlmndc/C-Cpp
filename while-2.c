/* while dongusu ile girilen sayilarin ortalamasini bulan program*/

#include<stdio.h>

int main(){
  int sayici, toplam, sayi;
  float ortalama;

  toplam = 0;
  sayici = 0;

  printf("enter the number(enter -1 to quit) :" );
  scanf("%d", &sayi);

  while (sayi != -1){

    toplam = toplam + sayi;
    sayici = sayici + 1;
    printf("enter the number(enter -1 to quit) :" );
    scanf("%d", &sayi);
  }

  if(sayici ==0)
    printf("There is not any number");
  else{
    ortalama = (float)toplam / sayici;
    printf("Sinif ortalamasi %.2f dir.\n", ortalama);
  }


  return 0;

}
