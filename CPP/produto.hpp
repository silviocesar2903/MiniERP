#ifndef PRODUTOS_H
#define PRODUTOS_H
#include "estoque.hpp"


class Produto
{
    public:
        Produto cadastrar_produto_estoque(Estoque e);
        Produto cadastrar_produto(Estoque e,char nome[100],char descricao[100],double valor); 
        int id;
        char nome[100];
        char descricao[100];
        double valor;
 
};
#endif