#include <stdio.h>
#include <conio.h>

int main()
{
    struct reg_bandas{
        
        char nome[30], genero[30];
        int integrantes, ranking;
    };
    
    struct reg_bandas bandas[3];
    
    int i, posicao;
    
    printf("\n Registrando as bandas \n");
    
    for (i=0; i<=4; i++){
        
        printf("\n Digite o nome da banda %d: ", i+1);
        fflush(stdin);
        fgets(bandas[i].nome, 30, stdin);
        
        printf("\n Digite o genero musical da banda %d: ", i+1);
        fflush(stdin);
        fgets(bandas[i].genero, 30, stdin);
        
        printf("\n Digite o quantidade de integrantes da banda %d: ", i+1);
        scanf("%d", &bandas[i].integrantes);
        
        printf("\n Digite a posicao da banda %d no seu ranking de favoritas: ", i+1);
        scanf("%d", &bandas[i].ranking);
        
        getchar();
    }
    
    printf("\n Mostrando as bandas \n");
    
    for (i=0; i<=4; i++){
        
        printf("Banda %d \n", i+1);
        printf("Nome: %s \n", bandas[i].nome);
        printf("Genero musical: %s \n", bandas[i].genero);
        printf("Quantidade de integrantes: %d \n", bandas[i].integrantes);
        printf("Posicao da banda no seu ranking: %d \n", bandas[i].ranking);
    }
    
    printf("\n Digite um numero de 1 a 5 para ver a banda no ranking!");
    scanf("%d", &posicao);
    
    i=0;
    
    for (i=0; i<=4; i++){
        
        if(posicao == bandas[i].ranking){
            
            printf("Banda %d no ranking de favoritos \n", i+1);
            printf("Nome: %s \n", bandas[i].nome);
            printf("Genero musical: %s \n", bandas[i].genero);
            printf("Quantidade de integrantes: %d \n", bandas[i].integrantes);
            break;
        }
    }
    
    getch();
    
    return 0;
}