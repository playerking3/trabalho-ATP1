/*Codificação de strings baseada na cifra de cesar*/
/*Murilo M. Castro*/
#include<stdio.h>
#include<string.h>

void codificador(char palavra[], int k){
    for(int i = 0; i < strlen(palavra); i++){
        palavra[i] = palavra[i] + k;
    }
}

void decodificador(char palavra[], int k){
    for(int i = 0; i < strlen(palavra); i++){
        palavra[i] = palavra[i] - k;
    }
}

int main(){
    char user[100];
    int deslocamento;

    printf("Digite a palavra: ");
    fgets(user,100,stdin);
    printf("Digite a quantidade de letras a passar: ");
    scanf("%d", &deslocamento);

    codificador(user, deslocamento);
    printf("Palavra codificada: %s\n", user);

    decodificador(user, deslocamento);
    printf("Palavra decodificada: %s\n", user);
    return 0;
}
