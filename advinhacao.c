#include <stdio.h>
#define NUMERO_SECRETO 19 // CONSTANTE
int main()
{
    // Apresentação do programa !
    printf("***********************************************\n");
    printf("* Sejam Bem - Vindos ao Jogo da Adivinhação ! *\n");
    printf("***********************************************\n");
    //
    int chute; // O que o jogador irá digitar
    int tentativa = 1;
    int venceu = 0;
    while(venceu == 0) // enquanto venceu == 0, o loop continuará, visto que venceu == 0
    {
        printf("%d° Tentativa \n", tentativa);
        printf("Digite um chute para começar o jogo ! : ");
        scanf("%d", &chute);
        printf("==========================================\n");
        //
        if(chute < 0)
        {
            printf("Você não pode chutar números negativos !\n");
            continue; // Ele para de executar o loop e depois reinicia ele
        }
        int maior = chute > NUMERO_SECRETO;
        int acertou = chute == NUMERO_SECRETO;
        //
        if(acertou)
        {
            printf("Parabéns ! Você Acertou ! Você é um ótimo jogador !\n");
            printf("O número pensado foi %d\n", NUMERO_SECRETO);
            printf("Você acertou na %d° Tentativa\n\n", tentativa);
            venceu = 1; // Jogador acertou o número pensado
        }
        else if(maior)
        {
            printf("O seu chute é maior do que o número secreto ! \n\n");
        }
        else
        {
            printf("O seu chute é menor do que o número secreto ! \n\n");
        }
        tentativa++;
    }
        printf("***************\n");
        printf("Fim de Jogo !  \n");
        printf("***************\n");
    return 0;
}