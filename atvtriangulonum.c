#include <stdio.h>

void imprimir_linha(int tamanho) // a fun��o imprimir_linha recebe uma var�avel int tamanho
{
    int i=0;                        // variavel contadora
    for (i=0; i<tamanho; i++)      // enquanto (conddi��o) for verdadeira repita conteudo
    {
        printf("%i", tamanho);    //conteudo
    }
    printf("\n");
}

int main()
{
    int n, i;                          //variavel valor de N e variavel contadora
    printf("Digite o valor de N");     // escreva na tela ...
    scanf("%i", &n);                    // leia a variavel inteira

    for (i=0; i<n; i++)            // enquanto (conddi��o) for verdadeira repita a fun��o
    {
        imprimir_linha(i+1);     //fun��o
    }
    return 0;    // retorne 0
}
