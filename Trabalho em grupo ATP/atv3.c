/*retirar uma substring de uma string*/
/*Murilo M. Castro*/
#include<stdio.h>
#include<string.h>

void substring(char str[], char strout[], int ini, int fim){
    int delta = fim-ini;
    for(int i = 0; i <= delta; i++){
        strout[i] = str[ini];
        ini++;
    }
}

int main(){
    char user[100], saida[100];
    int inicio, fim;
    printf("Digite a string: ");
    fgets(user,100,stdin);
    printf("Digite o inicio e o fim do recorte: ");
    scanf("%d %d", &inicio, &fim);
    substring(user, saida, inicio, fim);
    printf("%s", saida);
    return 0;
}
