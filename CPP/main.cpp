#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cerrno> 

#include "estoque.hpp"
#include "estoque.cpp"
#include "produto.hpp"
#include "produto.cpp"
#include "os.hpp"

void teste()
{
    Produto p1, p2 , p3 p4, p5;
    Estoque e;
    p1 = cadastrar_produto_b(e,"bota","calacado",22.90f);
    p2 = cadastrar_produto_b(e,"all-stars","calacado",22.90f);
    p3 = cadastrar_produto_b(e,"mochila nike","bolsa mochila",22.90f);
    p4 = cadastrar_produto_b(e,"hb20","carro veiculo",22.90f);
    p5 = cadastrar_produto_b(e,"sapatilha","calacado",22.90f);
    e = adicionar_produto_estoque(e, p1);
    e = adicionar_produto_estoque(e, p2);
    e = adicionar_produto_estoque(e, p3);
    e = adicionar_produto_estoque(e, p4);
    e = adicionar_produto_estoque(e, p5);
    listar_produtos(e);
    find_produtos_estoque(e, "bota", 0);
    remove_produtos_estoque(e, "sapatilha", 4);
    listar_produtos(e);
}