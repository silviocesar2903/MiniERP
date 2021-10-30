#include "erp.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void scr_clear()
{
    system(SLP);
    system(CLRS);
}

produto cadastrar_produto(estoque e)
{
    char nome[100], descricao[100];
    double valor;
    int id;
    produto p;
    if(e.quantidade == 0){
        id =0;
    }else{
        id = e.quantidade + 1;
    }
    printf("Por favor digite o nome do produto\n");
    scanf("%[^\n]s", &nome);
    printf("Por favor digite a descricao do produto\n");
    scanf("%[^\n]s", &descricao);
    printf("Por favor digite o valor do produto\n");
    scanf("%lf", &valor);
    strcpy(p.descricao, descricao);
    strcpy(p.nome, nome);
    p.valor = valor;
    p.id =id;
    scr_clear();
    return p;
}
produto cadastrar_produto_b(estoque e,char nome[100],char descricao[100],double valor)
{
    int id;
    produto p;
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
estoque adicionar_produto_estoque(estoque e, produto p)
{
    int i =0;
    while(i<100){
        if(e.produto->nome == p.nome && p.id == e.produto->id){
            perror("produto ja existe no estoque!!!!\n");
            scr_clear();
        }else{
            e.produto[e.quantidade+1] = p;
        }
        i++;
    }
    return e;
}

void listar_produtos(estoque e)
{
    int i;
    for(i= 0; i < e.quantidade; i++){
        printf("Nome = %s\n Descricao = %s \n Valor = %f \n id = %d", e.produto[i].nome, e.produto[i].descricao, e.produto[i].valor, e.produto[1].id);
    }
    scr_clear();
}

produto find_produtos_estoque(estoque e, char nome[100], int id)
{
    int i =0;
    produto p;
    while( i< 100){
        if(e.produto->nome == nome && id == e.produto->id){
            printf("Item encontrado com sucesso!!\n");
            printf("Nome = %s\n Descricao = %s \n Valor = %f \n id = %d", e.produto[i].nome, e.produto[i].descricao, e.produto[i].valor, e.produto[1].id);
            strcpy(p.descricao, e.produto[i].descricao);
            strcpy(p.nome, e.produto[i].nome);
            p.id = e.produto->id;
            p.valor = e.produto->valor;
            scr_clear();
            return p;
        }else{
            perror("prodiuto nao encontrado no estoque!!\n");
            scr_clear();
            return p;
        }
        i++;
    }
    
}
estoque remove_produtos_estoque(estoque e, char nome[100], int id)
{
    int i =0;
    while( i< 100){
        if(e.produto->nome == nome && id == e.produto->id){
            printf("Item encontrado com sucesso!!\n");
            strcpy(e.produto[i].nome, "");
            strcpy(e.produto[i].descricao, "");
            e.produto->valor = (double)0;
            e.produto->id = 0;
            scr_clear();
            return e;
        }else{
            perror("prodiuto nao encontrado no estoque!!\n");
            scr_clear();
            return e;
        }
        i++;
    }
    
}