/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.minierp;

import java.util.Scanner;

/**
 *
 * @author silvio
 */
public class Produto {
    
    private int id;
    private String nome;
    private String descricao;
    private double valor;

    public int getId() {
        return id;
    }

    public void setId(int id) {
        this.id = id;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getDescricao() {
        return descricao;
    }

    public void setDescricao(String descricao) {
        this.descricao = descricao;
    }

    public double getValor() {
        return valor;
    }

    public void setValor(double valor) {
        this.valor = valor;
    }

    public Produto() {
        
    }

    public Produto(String nome, String descricao, double valor) {
        this.setId(this.getId() + 1);
        this.nome = nome;
        this.descricao = descricao;
        this.valor = valor;
    }
    
    public Produto cadastrarProduto(Produto p)
    {
        String nome,descricao;
        double valor;
        Scanner sc = new Scanner(System.in);
        System.out.println("Por favor insira o nome do produto");
        nome = sc.nextLine();
        System.out.println("Por favor insira a descricacao do produto");
        descricao = sc.nextLine();
        System.out.println("Por favor insira o valor do produto");
        valor = sc.nextDouble();
        p.setNome(nome);
        p.setDescricao(descricao);
        p.setValor(valor);
        p.setId(this.getId() + 1);
        return p;
    }
    
}
