#ifndef ERP_H
#define ERP_H

#ifdef WIN32
    #define CLRS "cls"
    #define SLP "pause"
#else
    #define CLRS "clear"
    #define SLP "sleep 5"
#endif

//not working
//#define TAMMAX_STRING 100

typedef struct produto{
    int id;
    char nome[100];
    char descricao[100];
    double valor;
}produto;

typedef struct estoque
{
    produto produto[100];
    int quantidade;
}estoque;

void scr_clear();
produto cadastrar_produto(estoque e);
estoque adicionar_produto_estoque(estoque e, produto p);
void listar_produtos(estoque e);
produto find_produtos_estoque(estoque e, char nome[100], int id);
estoque remove_produtos_estoque(estoque e, char nome[100], int id);
produto cadastrar_produto_b(estoque e,char nome[100],char descricao[100],double valor);
#endif