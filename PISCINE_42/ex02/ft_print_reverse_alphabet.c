/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 12:45:10 by marvin            #+#    #+#             */
/*   Updated: 2026/05/17 12:45:10 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void    ft_print_reverse_alphabet(void)
{
    char letra = "z";

    while(letra >= "a")
    {
        write(1, &letra, 1);
        letra--;
    }
}
/*
Diz ao compilador para incluir a biblioteca unistd.h.
Essa biblioteca fornece a função write, usada para escrever no terminal.
Declara a função ft_print_reverse_alphabet.
void antes significa que ela não devolve nenhum valor.
(void) significa que ela não recebe nenhum argumento.
Inicia o bloco de código da função.
Aqui o objetivo é criar uma variável chamada letra do tipo char.
char guarda um único caractere.
Mas há um erro: "z" é uma string (cadeia de caracteres), não um único caractere.
O correto seria:
Esse laço while deve repetir enquanto letra for maior ou igual a a.
Também há erro parecido aqui: "a" é uma string, o certo é 'a'.
O correto é:
Abre o bloco do laço while, o código que será repetido.
Chama write para imprimir o caractere atual no terminal.
1 significa “escrever na saída padrão” (a tela).
&letra passa o endereço da variável, ou seja, onde está o caractere.
1 é quantos bytes escrever (uma letra).
Diminui o valor da variável letra em 1.
Se letra era 'z', passa para 'y'; depois para 'x'; e assim por diante.
Fecha o bloco do while.
Fecha o bloco da função.
O que o programa deveria fazer
Começa em 'z'
Imprime cada letra
Vai para a letra anterior
Repete até 'a'
Saída esperada:

Observação: para o programa compilar e funcionar, troque "z" por 'z' e "a" por 'a'.
*/