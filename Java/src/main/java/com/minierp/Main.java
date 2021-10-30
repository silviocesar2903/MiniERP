/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.minierp;

import java.util.Scanner;
import com.minierp.Produto;

/**
 *
 * @author silvio
 */
public class Main {
    public static void main(String []args)
    {
        menu();        
    }
    public static void menu()
    {
      Scanner sc = new Scanner(System.in);
      int op = 0;
      Produto p = new Produto();
      Produto t;
      Estoque e = new Estoque();
      do 
      { 
          op = showMenu();
            switch(op)
            {
                case 1:
                    p =  p.cadastrarProduto(p);
                    System.out.println("Produto Cadastrado com sucesso");
                    break;
                case 2:
                    e = e.adicionarProduto(e, p);
                    System.out.println("Produto adicinado ao estoque com sucesso");
                    break;
                case 3:
                    String nome;
                    System.out.println("Por favor digite o nome do produto que deseja encomtrar");
                    nome = sc.nextLine();
                    t = e.findProdutoEstoque(e, nome);
                    break;
                case 4:
                    e.listarProdutos(e);
                    break;
                case 5:
                    System.out.println("Aplicacao esta encerrando...");
                    break;

            }
            t = null;
      }while(op != 5);

    }
    
    public static int showMenu()
    {
      int op =0;
      Scanner sc = new Scanner(System.in);
      System.out.println("Bem vido ao sistema mini ERP as opções sao:");
      System.out.println("1 - Cadastrar Produto");
      System.out.println("2 - Adicionar Produto ao Estoque");
      System.out.println("3 - Procurar Produto no Estoque");
      System.out.println("4 - Listar Produtos em Estoque");
      System.out.println("5 - Sair da Aplicação");
      op = sc.nextInt();
      return op;
    }
}
