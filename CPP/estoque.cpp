#include <iostream>
#include <cstring>
#include "estoque.hpp"
#include "estoque.cpp"
#include "os.cpp"


Estoque Estoque::remove_produtos_estoque(Estoque e, char nome[100], int id)
{

}
Estoque Estoque::adicionar_produto_estoque(Estoque e, Produto p)
{

}

Produto Estoque::find_produtos_estoque(Estoque e, char nome[100], int id)
{
    int i =0;
    Produto p;
    while( i< 100){
        if(e.produto->nome == nome && id == e.produto->id){
            std::cout << "Item encontrado com sucesso!!\n";
            std::cout << "Nome = " << e.produto[i].nome << "\nDescricao =  " <<e.produto[i].descricao << "\nValor = "<<e.produto[i].valor << "\nid= "<< e.produto[1].id;
            strcpy(p.descricao, e.produto[i].descricao);
            strcpy(p.nome, e.produto[i].nome);
            p.id = e.produto->id;
            p.valor = e.produto->valor;
            scr_clear();
            return p;
        }else{
            std::cerr << "prodiuto nao encontrado no estoque!!\n";
            scr_clear();
            return p;
        }
        i++;
    }
}