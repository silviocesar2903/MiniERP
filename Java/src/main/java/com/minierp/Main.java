/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.minierp;

/**
 *
 * @author silvio
 */
public class Main {
    public static void main(String []args)
    {
        Estoque e = new Estoque();
        Produto p1 = new Produto("Bota", "Calcado", 22.50f);
        Produto p2 = new Produto("Tenis", "Calcado", 45.50f);
        Produto p3 = new Produto("Camisa", "Vestuario", 30.00f);
        Produto p4 = new Produto("Calca", "Vestuario", 22.50f);
        Produto p5 = new Produto("Bone", "Acessorios", 22.50f);
        
        e.adicionarProduto(e, p1);
        e.adicionarProduto(e, p2);
        e.adicionarProduto(e, p3);
        e.adicionarProduto(e, p4);
        e.adicionarProduto(e, p5);
        
        e.listarProdutos(e);
    }
}
