#include <stdio.h>

void imprimir_linha(int tamanho) // a função imprimir_linha recebe uma varíavel int tamanho
{
    int i=0;                        // variavel contadora
    for (i=0; i<tamanho; i++)      // enquanto (conddição) for verdadeira repita conteudo
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

    for (i=0; i<n; i++)            // enquanto (conddição) for verdadeira repita a função
    {
        imprimir_linha(i+1);     //função
    }
    return 0;    // retorne 0
}
