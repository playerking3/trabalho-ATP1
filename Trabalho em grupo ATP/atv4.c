/*verificar se existe substring*/
/*Murilo M. Castro*/
#include<stdio.h>
#include<string.h>

int comparador(char palavra[], char sub[], char pedaco[]){
    for(int i = 0; i < strlen(palavra); i++){
        char letraInicio = palavra[i];
        if(letraInicio==sub[0]){
            int contador = 0;
            for(int j = 0; j < strlen(sub)-1; j++){
                if(palavra[i+j]==sub[j]){
                    contador++;
                }
            }
            if(contador == strlen(sub)-1){
                return 1;
            }

        }
    }
    return 0;
}

int main(){
    char palavra[100], sub[100], pedaco[100];
    int result;
    printf("Digite a palavra: ");
    fgets(palavra, 100, stdin);
    printf("Digite a substring a ser procurada: ");
    fgets(sub, 100, stdin);
    result = comparador(palavra, sub, pedaco);
    printf("%d", result);
}
