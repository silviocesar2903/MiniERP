#ifndef ESTOQUE_H
#define ESTOQUE_H

#include "produto.hpp"


class Estoque
{       
    public:
    Estoque remove_produtos_estoque(Estoque e, char nome[100], int id);
    Estoque adicionar_produto_estoque(Estoque e, Produto p);
    Produto find_produtos_estoque(Estoque e, char nome[100], int id); 
    void listar_produtos(Estoque e); 
    Produto produto[100];
    int quantidade;
};

#endif