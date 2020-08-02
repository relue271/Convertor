/*
Criado por relue271
Convertor de bases
*/


#include <stdio.h>
#include <string.h>



void main(void){
    int decimal;
    printf("\nDigite um numero inteiro: ");
    scanf("%d", &decimal);







    //converte o decimal para binario
    int aux, i, resto;
    aux = decimal;
    i=0;
    char binario[1024] = "";
    do{
        resto = aux % 2;
        aux = aux / 2;
        binario[i] = resto+'0';
        i++;
    }while(aux > 0);
    binario[i] = '\0';
    printf("\nB: ");
    for (i=strlen(binario); i>=0; i--) {
            if ((i % 4) == 0) { printf(" ");}
            printf("%c", binario[i]);
    }
    printf(" .");






    //converte o decimal para hexadecimal
    aux = decimal;
    i=0;
    char hexa[256] = "";
    do {
        resto = aux % 16;
        aux = aux / 16;
        switch (resto) {
        case 10:
            hexa[i] = 'A';
            break;
        case 11:
            hexa[i] = 'B';
            break;
        case 12:
            hexa[i] = 'C';
            break;
        case 13:
            hexa[i] = 'D';
            break;
        case 14:
            hexa[i] = 'E';
            break;
        case 15:
            hexa[i] = 'F';
            break;
        default:
            hexa[i] = resto+'0';
        }
        i++;
    }while(aux > 0);
    hexa[i] = '\0';
    printf("\nH: ");
    for (i=strlen(hexa); i>=0; i--) { printf("%c", hexa[i]);}
    printf(" .");






    //converte decimal para octal
    aux = decimal;
    i=0;
    char octal[256] = "";
    do{
        resto = aux % 8;
        aux = aux / 8;
        octal[i] = resto+'0';
        i++;
    }while(aux > 0);
    octal[i] = '\0';
    printf("\nO: ");
    for (i=strlen(octal); i>=0; i--) { printf("%c", octal[i]); }
    printf(" .\n\n");
}
