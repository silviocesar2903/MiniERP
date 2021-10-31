/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.minierp;

import java.util.ArrayList;
import java.util.List;

/**
 *
 * @author silvio
 */
public class Estoque {
    private List<Produto> produtos = new ArrayList<Produto>();
    private int totalProdutosEstoque;

    public int getTotalProdutosEstoque(Estoque e) {
        int tProdutosLista = 0, q = 0; 
        for(int i =0; i< e.produtos.size(); i++)
        {
            q += e.produtos.get(i).getQtdProdutoEstoque();
            
        }
        this.totalProdutosEstoque = q * tProdutosLista;
        tProdutosLista = e.produtos.size();
        return this.totalProdutosEstoque;
    }
    
    
    
    public Estoque adicionarProduto(Estoque e, Produto p)
    {
        e.produtos.add(p);
        return e;
    }
    public Estoque removerProduto(Estoque e, Produto p)
    {
        try{
            e.produtos.remove(p);
            System.out.println("Produto removido do estoque com sucesso");
            return e;
        }catch(Exception ex){
            System.out.println("Nao foi possivel removero produto");
            System.out.println(ex.getMessage());
        }finally
        {
           return e;
        }
        
    }
    public Estoque removerProduto(Estoque e,String nome, String descricao)
    {
       try{
           for(int i =0; i < e.produtos.size(); i++)
            {
                if(e.produtos.get(i).getNome().equals(nome) || e.produtos.get(i).getDescricao().equals(descricao))
                {
                    e.produtos.remove(i);
                }
            }
           return e;
       }catch(Exception ex){
            System.out.println("Nao foi possivel removero produto");
            System.out.println(ex.getMessage());
        }finally
        {
           return e;
        }
    }
    
    public Produto findProdutoEstoque(Estoque e, Produto p)
    {
       for(int i =0; i < e.produtos.size(); i++)
        {
            if(e.produtos.contains(p))
            {
                int index = e.produtos.indexOf(p);
                return e.produtos.get(index);
            }else
            {
                System.out.println("Produto nao encontrado");
                return null;
            }
        }
        return null;
    }
    public Produto findProdutoEstoque(Estoque e, String nome)
    {
       for(int i =0; i < e.produtos.size(); i++)
        {
         if(e.produtos.get(i).getNome().equals(nome))
         {
            Produto f = e.produtos.get(i);
            return f;
         }else
         {
             return null;
         }
        }
        return null;
    }
    
    public void listarProdutos(Estoque e)
    { 
        for(int i =0; i < e.produtos.size(); i++)
        {
            System.out.println("---------------------------------------------------------------------------------");
            System.out.println("Nome: " + e.produtos.get(i).getNome());
            System.out.println("Descricacao: " + e.produtos.get(i).getDescricao());
            System.out.println("Valor: " + e.produtos.get(i).getValor() + "reais");
            System.out.println("Quantidade em estoque: " + e.produtos.get(i).getValor() + " reais");
            System.out.println("---------------------------------------------------------------------------------");
        }
    }


    
    
    
}
