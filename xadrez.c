#include <stdio.h>

int main() {

   int torre = 5;
   int bispo = 5;
   int rainha = 8;
   int cavalo = 1

   int opcoes;
   
    do {
        printf("**Peças Disponiveis**\n");
        printf("ESCOLHA UMA PEÇA PARA QUE SEJA DEMONSTRADO OS SEUS MOVIMENTOS!\n"); // Usuário precisa escolher uma peça
        printf("1. Torre\n");
        printf("2. Bispo\n");
        printf("3. Rainha\n");
        printf("4. Cavalo\n");
        printf("5. Sair\n");
        printf("ESCOLHA UMA OPÇÃO: \n");
        scanf("%d", &opcoes);
       
        switch(opcoes) {
            case 1:
                printf("*---MOVIMENTOS DA PEÇA TORRE---*\n");//Movimento da torre
                int i = 1;
                while (i <= TORRE)
                {
                   printf("DIREITA!\n");
                   i++;
                }
                printf("\n");
                break;
            case 2:
                printf("*---MOVIMENTOS DA PEÇA BISPO---*\n");//LOGICA PARA O BISPO
                int p = 1;
                while (p <= BISPO)
                {
                   printf("CIMA, DIREITA!\n");
                   p++;
                }
                printf("\n");
                break;
            case 3:
                printf("*---MOVIMENTOS DA PEÇA RAINHA---*\n");//LOGICA PARA A RAINHA
                int r = 1;
                while (r <= RAINHA)
                {
                   printf("ESQUERDA!\n");
                   r++;
                }
                printf("\n");
                break;
            case 4:
                printf("*---MOVIMENTOS DA PEÇA CAVALO---*\n");
                while (CAVALO--)
                {
                    for(int c = 0; c < 2; c++) {
                   printf("BAIXO!\n"); //IMPRIME "CIMA" DUAS VEZES
                   printf("\n");
                    }
                printf("DIREITA!\n"); //IMPRIME "DIREITA" UMA VEZ
                printf("\n");
                }
                break;  
            case 5:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida!\n");
        }
    } while (option != 5);
   
    return 0;
}
