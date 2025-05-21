/*indica a frequancia de cada caractere em uma string*/
/*Murilo M. Castro*/
#include<stdio.h>
#include<string.h>

void contador(char palavra[]){
    for(int i = 0; i < strlen(palavra); i++){
        int contagem = 0;
        char letra = palavra[i];
        if(letra!='0' && letra!='\n'){
            for(int j = 1; j < strlen(palavra); j++){
                if(letra == palavra[j]){
                    contagem += 1;
                    palavra[j]='0'; // coloco a letra como 0 para evitar repetições de letra
                }
            }
            printf("%c: %d Ocorrencia(s)\n", letra, contagem);
        }
    }
}

int main(){
    char user[100];
    printf("Digite a palavra: ");
    fgets(user, 100, stdin);
    contador(user);
    return 0;
}
