#include <stdio.h>


int main() {
    
/*
%d: Imprime um inteiro no formato decimal.
%i: Equivalente a %d.
%f: Imprime um número de ponto flutuante no formato padrão.
%e: Imprime um número de ponto flutuante na notação científica.
%c: Imprime um único caractere.
%s: Imprime uma cadeia (string) de caracteres.
*/


// Variaveis do jogador 1
char estado1;
char codigo1[3]; 
char nomedacidade1[50];
int populacao1;
float area1;
float pib1;
int pontoturisticos1;

// Variavies do Jogador 2
char estado2;
char codigo2[3]; 
char nomedacidade2[50];
int populacao2;
float area2;
float pib2;
int pontoturisticos2;



//Criação da primeira carta
printf("O jogador 1 montara sua carta\n");
printf("Escolha seu estado: ");
scanf("%c" , &estado1);
printf("Escolha seu código: ");
scanf("%s" , &codigo1);
printf("Escolha a sua cidade: ");
scanf("%s" , nomedacidade1);
printf("Diga o número de habitantes da sua cidade: ");
scanf("%d" , &populacao1);
printf("Qual o tamanho da sua cidade: ");
scanf("%f", &area1);
printf("Qual o PIB da sua cidade ");
scanf("%f" , &pib1);
printf("Quantos pontos turísticos a sua cidade possui: ");
scanf("%d" , &pontoturisticos1);

//Criação da segunda carta
printf("O jogador 2 montara sua carta\n");
printf("Escolha seu estado: ");
scanf(" %c" , &estado2);
printf("Escolha seu código: ");
scanf("%s" , &codigo2);
printf("Escolha a sua cidade: ");
scanf("%s" , nomedacidade2);
printf("Diga o numero de habitantes da sua cidade: ");
scanf("%d" , &populacao2);
printf("Qual o tamanho da sua cidade: ");
scanf("%f", &area2);
printf("Qual o PIB da sua cidade ");
scanf("%f" , &pib2);
printf("Quantos pontos turísticos a sua cidade possui: ");
scanf("%d" , &pontoturisticos2);



//carta do jogador 1
printf("Jogador 1 está é sua carta:\n");
printf("Seu estado: %c\n" , estado1);
printf("Seu código: %c%s\n" , estado1 , codigo1);
printf("Nome da sua cidade: %s\n" , nomedacidade1);
printf("A população da sua cidade: %d\n" , populacao1);
printf("O tamanho da sua cidade: %.2f km2\n", area1);
printf("O PIB da sua cidade: %.2f Bilhões R$\n" , pib1);
printf("Pontos turísticos da sua cidade: %d\n" , pontoturisticos1);


//carta do jogador 2
printf("Jogador 2 está é sua carta\n");
printf("Seu estado: %c\n" , estado2);
printf("Seu código: %c%s\n" , estado2 , codigo2);
printf("Nome da sua cidade: %s\n" , nomedacidade2);
printf("A população da sua cidade: %d\n" , populacao2);
printf("O tamanho da sua cidade: %.2f km2\n", area2);
printf("O PIB da sua cidade: %.2f Bilhões R$\n" , pib2);
printf("Pontos turísticos da sua cidade: %d" , pontoturisticos2);








    return 0;
}
