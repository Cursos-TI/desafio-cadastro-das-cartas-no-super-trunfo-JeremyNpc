#include <stdio.h>
int main() { 
char R;
char Codigoc1[20] ="R01";
char Cidade1[20] ="Rio_de_janeiro";
int populacao =674800; 
float Area1 =1200.25;
float Pib1 =3000.50;
int Turismo =30;
float Pibpc1 = Pib1 / populacao;
float Dp1 =  populacao / Area1;

printf("Estado: %c\n, Codigo_da_carta: %s\n, Cidade: %s\n Populaçao: %d habitantes\n ,Area: %f km\n, Pib: %f\n, Pontos_Turisticos: %d\n ", R, Codigoc1, Cidade1, populacao, Area1, Pib1, Turismo);
printf("Densidade Populacional: %f\n", Dp1);
printf("Pib per capita: %f\n", Pibpc1);

char S;
char codigoc[20] ="SP01";
char cidade2[20] ="Sao_Paulo";
int Populacao =12325000;
float Area2 =1521.11;
float pib =699.28;
int Pt = 30;
float Pibpc2 =pib / Populacao;
float Dp2 = Populacao / Area2;

printf("Estado: %c\n, Codigo_da_carta: %s\n, Cidade: %s\n, Populaçao: %d habitantes\n, Area: %f km\n, Pib: %f\n, Pontos_Turisticos: %d ", S, codigoc, cidade2, populacao, Area2, pib, Pt);
printf("Densidade Populacional: %f\n", Pibpc2);
printf("Pib per capita: %f\n", Dp2);


}