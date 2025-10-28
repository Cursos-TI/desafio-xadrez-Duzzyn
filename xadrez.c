#include <stdio.h>

// Movimento da torre
void torre(int casas) {
    if (casas > 0) {
        printf("DIREITA!\n");
        torre(casas - 1);
    }
    
}
// Movimento do bispo
void bispo(int casas) {
    if (casas > 0) {
        for (int p = 0; p < 1; p++) {
            printf("CIMA, ");
        }
        for (int i = 0; i < 1; i++) {
            printf("DIREITA!\n");
        }
        bispo(casas - 1);  
             
    }
    
}
// Movimento da rainha
void rainha(int casas) {
    if (casas > 0) {
        printf("ESQUERDA!\n");
        rainha(casas - 1);
    }
    
}
// Movimento do cavalo
void cavalo() {
    int mcima = 2;
    int mdireita = 1;

    for (int i = 0; i < mcima + mdireita; i++) {
        if (i < mcima) {
            printf("Cima\n");
            continue;
        }
        if (i == mcima) {
            printf("Direita!\n");
            break;
        }
    }
    
}


int main() {

    int opcoes;
   
    do {
        printf("**MENU PEÇAS DE XADREZ**\n");
        printf("ESCOLHA UMA PEÇA PARA QUE SEJA DEMONSTRADO OS SEUS MOVIMENTOS!\n");
        printf("1. TORRE\n");
        printf("2. BISPO\n");
        printf("3. CAVALO\n");
        printf("4. RAINHA\n");
        printf("5. SAIR!\n");
        printf("ESCOLHA UMA OPÇÃO: \n");
        scanf("%d", &opcoes);
       
        switch(opcoes) {
            case 1:
                printf("*--Movimentos da Torre--*\n"); 
                torre(5);
                printf("\n");
                break;
            case 2:
                printf("*--Movimentos do Bispo--*\n"); 
                bispo(5);
                printf("\n");
                break;
            case 3:
                printf("*--Movimentos do Cavalo--*\n");
                cavalo();
                printf("\n");
                break;
            case 4:
                printf("*--Movimentos da Rainha--*\n");
                rainha(8);
                printf("\n");
                break;
            case 5:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida!\n");
        }
    } while (opcoes != 5);
   
    return 0;
}
