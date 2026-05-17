/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 12:08:50 by marvin            #+#    #+#             */
/*   Updated: 2026/05/17 12:08:50 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void   ft_print_alphabet(void)
{
    char    c;

    c = 'a';
    while (c <= 'z')
    {
        write(1, &c, 1);
        c++;
    }
}
/*
    Diz ao compilador para usar funções que estão na biblioteca unistd.h.
No caso, essa biblioteca fornece a função write, usada para enviar texto para a saída.
Declara uma função chamada ft_print_alphabet.
void antes significa que ela não retorna nenhum valor.
(void) entre parênteses significa que ela não recebe nenhum dado de entrada.
Abre o bloco de código da função. Tudo entre { e } pertence à função.
Cria uma variável chamada c do tipo char.
char guarda um único caractere, como a, b, c, etc.
Atribui à variável c a letra minúscula a.
Isso é o ponto de partida para o que vamos imprimir.
Inicia um laço while que vai repetir o código dentro do bloco enquanto a condição for verdadeira.
A condição c <= 'z' significa “enquanto c for menor ou igual a z”.
Assim, o laço vai rodar para todas as letras de a até z.
Abre o bloco de código que será repetido dentro do while.
Chama a função write para enviar dados para o terminal.
1 significa “saída padrão” (a tela).
&c é o endereço da variável c, ou seja, onde está o caractere.
1 no final diz para escrever exatamente 1 byte (uma letra).
Incrementa c em 1.
Se c era 'a', fica 'b'; se era 'b', passa para 'c', e assim por diante.
Fecha o bloco do while. Depois dessa linha, o programa volta e verifica outra vez se c <= 'z'.
Fecha o bloco da função ft_print_alphabet.
Outro comentário vazio, que também não faz nada no programa.
O que o programa faz
Quando você chama ft_print_alphabet(), ele:

começa em 'a',
escreve cada letra,
aumenta para a próxima letra,
repete até chegar em 'z',
*/