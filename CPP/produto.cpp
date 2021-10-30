#include "produto.hpp"
#include "estoque.hpp"
#include "os.hpp"
#include <iostream>
#include <cstring>
#include <cerrno> 

Produto Produto::cadastrar_produto_estoque(Estoque e)
{
    char nome[100], descricao[100];
    double valor;
    int id;
    Produto p;
    if(e.quantidade == 0){
        id =0;
    }else{
        id = e.quantidade + 1;
    }
    std::cout << "Por favor digite o nome do produto\n";
    std::cin >> nome;
    std::cout << "Por favor digite a descricao do produto\n";
    std::cin >> descricao;
    std::cout << "Por favor digite o valor do produto\n";
    std::cin >> valor;
    strcpy(p.descricao, descricao);
    strcpy(p.nome, nome);
    p.valor = valor;
    p.id =id;
    scr_clear();
    return p;
}

Produto Produto::cadastrar_produto(Estoque e,char nome[100],char descricao[100],double valor)
{
    int id;
    Produto p;
    if(e.quantidade == 0){
        id =0;
    }else{
        id = e.quantidade + 1;
    }
    strcpy(p.descricao, descricao);
    strcpy(p.nome, nome);
    p.valor = valor;
    p.id =id;
    scr_clear();
    return p;
}

