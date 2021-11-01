using System;
using System.Collections.Generic;
using System.Collections;
namespace MiniERP.Model 
{
   public class Estoque {
    private List<Produto> produtos = new List<Produto>();
    private int totalProdutosEstoque;

    public int getTotalProdutosEstoque(Estoque e) {
        int t =0, q = 0; 
        foreach(var p in e.produtos)
        {
            t = e.produtos.Count;
            q += p.getQtdProdutoEstoque();
        }
        this.totalProdutosEstoque = q * t;
        return this.totalProdutosEstoque;
    }

    public Estoque adicionarProduto(Estoque e, Produto p)
    {
        e.produtos.Add(p);
        return e;
    }
    public Estoque removerProduto(Estoque e, Produto p)
    {
        try{
            e.produtos.Remove(p);
            Console.WriteLine("Produto removido do estoque com sucesso");
            return e;
        }catch(Exception ex){
            Console.WriteLine("Nao foi possivel removero produto");
            Console.WriteLine(ex.Message);
        }
        return e;
        
    }
    public Estoque removerProduto(Estoque e,string nome, string descricao)
    {
        foreach(var es in e.produtos)
        {
            if(es.getNome().Equals(nome) || es.getDescricao().Equals(descricao))
            {
                e.produtos.Remove(es);
            }else
            {
                Console.WriteLine("Produto nao encontrado");
                return e;
            }
        }
        return e;
    }
    
    public Produto findProdutoEstoque(Estoque e, Produto p)
    {
       foreach(var pe in e.produtos)
        {
            if(pe.Equals(p))
            {
                return pe;
            }else
            {
                Console.WriteLine("Produto nao encontrado");
                return null;
            }
        }
        return null;
    }
    public Produto findProdutoEstoque(Estoque e, String nome)
    {
        foreach(var es in e.produtos)
        {
            if(es.getNome().Equals(nome))
            {
                return es;
            }else
            {
                Console.WriteLine("Produto nao encontrado");
                return null;
            }
        }
        return null;
      
    }
    
    public void listarProdutos(Estoque e)
    { 
        foreach(var p in e.produtos)
        {
            Console.WriteLine("---------------------------------------------------------------------------------");
            Console.WriteLine("Nome: " + p.getNome());
            Console.WriteLine("Descricacao: " + p.getDescricao());
            Console.WriteLine("Valor: " + p.getValor() + " reais");
            Console.WriteLine("Quantidade em estoque: " + p.getQtdProdutoEstoque());
            Console.WriteLine("---------------------------------------------------------------------------------");
        }
    }


    
    
    
}

}
