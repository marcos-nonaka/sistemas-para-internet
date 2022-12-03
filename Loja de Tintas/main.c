#include <math.h>
#include <stdio.h>

int main(void) {
  double metrosQuadrados, litrosNecessarios, custoGaloes, custoLatas,
      custoGaloesELatas;
  int galoes, latas;

  metrosQuadrados = 0;

  while (metrosQuadrados <= 0) {
    printf("Informe a área a ser pintada em metros quadrados: ");
    scanf("%lf", &metrosQuadrados);
  }

  litrosNecessarios = metrosQuadrados / 6 * 1.1;
  galoes = ceil(litrosNecessarios / 18.0f);
  custoGaloes = galoes * 80;

  printf("\nSe comprar apenas galões de 18 litros será(ão) necessário(s) %i "
         "galão(ões) ao "
         "custo de R$ %.2lf.\n\n",
         galoes, custoGaloes);

  latas = ceil(litrosNecessarios / 3.6);
  custoLatas = latas * 25;

  printf("Se comprar apenas latas de 3.6 litros será(ão) necessária(s) %i "
         "lata(s) ao "
         "custo de R$ %.2lf.\n\n",
         latas, custoLatas);

  galoes = litrosNecessarios / 18;
  litrosNecessarios = litrosNecessarios - galoes * 18;
  latas = ceil(litrosNecessarios / 3.6);
  custoGaloesELatas = galoes * 80 + latas * 25;

  printf("Se comprar galões e latas mistos será(ão) necessário(s) %i "
         "galão(ões) de 18 litros e %i lata(s) de 3.6 litros ao "
         "custo de R$ %.2lf.",
         galoes, latas, custoGaloesELatas);

  return 0;
}