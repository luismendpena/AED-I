#include <stdio.h>

int idade, ano, mes, dia;

int main() {
 
    scanf("%d", &idade);
    ano = idade/365;
    mes = (idade%365)/30;
    dia = (idade%365)%30;
    
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", ano, mes, dia);
 
    return 0;
}
