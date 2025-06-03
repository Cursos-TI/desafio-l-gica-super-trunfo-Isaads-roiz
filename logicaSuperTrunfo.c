#include <stdio.h>

int main() {
char Carta1[20];
char Carta2[20];
char Estado1[20];
char Estado2[20];
char Cidade1[20];
char Cidade2[20];
int Populacao1;
int Populacao2;
float Area1;
float Area2;
float PIB1;
float PIB2;
int Turismo1;
int Turismo2;
float Densidade1;
float Densidade2;
float PerCapita1;
float PerCapita2;

printf("Digite o Número da Primeira Carta: \n");
scanf("%s", &Carta1);

printf("Digite o nome do Primeiro Estado: \n");
scanf("%s", &Estado1);

printf("Digite o nome da Primeira Cidade: \n");
scanf("%s", &Cidade1);

printf("Digite o Número de Habitantes da primeira cidade: \n");
scanf("%d", &Populacao1);

printf("Digite a Área (km) da primeira cidade: \n");
scanf("%f", &Area1);

printf("Digite o PIB da primeira cidade: \n");
scanf("%f", &PIB1);

printf("Digite a quantidade de Pontos Turisticos da primeira cidade: \n");
scanf("%d", &Turismo1);

Densidade1 = (Populacao1 / Area1);
PerCapita1 = (PIB1 / Populacao1);


printf("Digite o Número da Carta do segundo Estado: \n");
scanf("%s", &Carta2);

printf("Digite o nome do Segundo Estado: \n");
scanf("%s", &Estado2);

printf("Digite o Nome da Segunda Cidade: \n");
scanf("%s", &Cidade2);

printf("Digite o Número de Habitantes da segunda cidade: \n");
scanf("%d", &Populacao2);

printf("Digite a Área (km) da segunda cidade: \n");
scanf ("%f", &Area2);

printf("Digite o PIB da segunda cidade: \n");
scanf("%f", &PIB2);

printf("Digite a quantidade de Pontos Turisticos da segunda cidade: \n");
scanf("%d", &Turismo2);

Densidade2 = (Populacao2 / Area2);
PerCapita2 = (PIB2 / Populacao2);


    
    
printf ("1º Carta: %s\n", Carta1);
printf ("2º Carta: %s\n", Carta2);
printf ("Nome do 1º Estado: %s\n", Estado1);
printf ("Nome da  1º Cidade: %s\n", Cidade1);
printf ("Nome do 2º Estado: %s\n", Estado2);
printf ("Nome da  2º Cidade: %s\n\n", Cidade2);
printf ("População da 1º Carta: %d\n", Populacao1);
printf ("População da 2º Carta: %d\n", Populacao2);
if (Populacao1 > Populacao2) {
    printf ("Carta nº 1 venceu com a maior quantidade Populacional!\n\n");
} else {
    printf ("Carta nº 2 venceu com a maior quantidade Populacional!\n\n");
}

printf ("Área da cidade nº 1: %f\n", Area1);
printf ("Área da cidade nº 2: %f\n", Area2);
if (Area1 > Area2) {
    printf ("Carta nº 1 venceu com a maior Área apresentada!\n\n");
} else {
    printf ("Carta nº 2 venceu com a maior Área apresentada!\n\n");
}

printf ("PIB da Carta nº 1: %f\n", PIB1);
printf ("PIB da Carta nº2: %f\n", PIB2);
if (PIB1 > PIB2) {
    printf ("Carta nº 1 venceu com a maior porcentagem do PIB!\n\n");
} else {
    printf ("Carta nº 2 venceu com a maior porcentagem do PIB!\n\n");
}


printf ("Porcentagem do Turismo na 1º Carta: %d\n", Turismo1);
printf ("Porcentagem do Turismo na 2º Carta: %d\n", Turismo2);
if (Turismo1 > Turismo2) {
    printf ("Carta nº 1 venceu com a maior captação do Turismo!\n\n");
} else {
    printf ("Carta nº 2 venceu com a maior captação do Turismo!\n\n");
}

printf("Densidade Populacional da 1º Carta: %.2f\n", Densidade1);
printf("Densidade Populacional da 2º Carta: %.2f\n", Densidade2);
if (Densidade1 < Densidade2) {
    printf ("Carta nº 1 venceu com a menor Densidade Populacional!\n\n");
} else {
    printf ("Carta nº 2 venceu com a menor Densidade Populacional!\n\n");
}

printf("PIB per Capita da 1º Carta: %.2f\n", PerCapita1);
printf("PIB per Capita da 2º Carta: %.2f\n", PerCapita2);
if (PerCapita1 > PerCapita2) {
   printf ("Carta nº 1 venceu com a maior Renda Per Capita!\n\n");
} else {
    printf ("Carta nº 2 venceu com a maior Renda Per Capita!\n\n");
}
  return 0;
}  
