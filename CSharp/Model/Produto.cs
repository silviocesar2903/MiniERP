using System;
namespace MiniERP.Model
{
     public class Produto
    {
        private int Id ;

        private int getId()
        {
            return this.Id;
        }
        private void setId(int id)
        {
            this.Id = id;
        }
        private string Nome ;

        private string Descricao;

        private double Valor;

        private int QtdProdutoEstoque;

        public String getNome() {
            return this.Nome;
        }

        public void setNome(string nome) {
            this.Nome = nome;
        }

        public String getDescricao() {
            return this.Descricao;
        }

        public void setDescricao(string descricao) {
            this.Descricao = descricao;
        }

        public double getValor() {
            return this.Valor;
        }

        public void setValor(double valor) {
            this.Valor = valor;
        }

        public int getQtdProdutoEstoque() {
            return this.QtdProdutoEstoque;
        }

        public void setQtdProdutoEstoque(int qtdProdutoEstoque) {
            this.QtdProdutoEstoque = qtdProdutoEstoque;
        }


        public Produto(string nome, string descricao, double valor, int qtdProduto) 
        {
            this.setId(this.getId() + 1);
            this.Nome = nome;
            this.Descricao = descricao;
            this.Valor = valor;
            this.QtdProdutoEstoque = qtdProduto;
        }
        public Produto()
        {
            
        }


        public Produto cadastrarProduto(Produto p)
        {
            string nome,descricao;
            double valor;
            int qtd;
            //Scanner sc = new Scanner(System.in);
            Console.WriteLine("Por favor insira o nome do produto");
            nome = Console.ReadLine();
            Console.WriteLine("Por favor insira a descricacao do produto");
            descricao = Console.ReadLine();
            Console.WriteLine("Por favor insira o valor do produto");
            valor = Double.Parse(Console.ReadLine());
            Console.WriteLine("Por favor insira a quantidade de produtos a ser adicionada");
            qtd = Console.Read();
            p.setNome(nome);
            p.setDescricao(descricao);
            p.setValor(valor);
            p.setQtdProdutoEstoque(qtd);
            p.setId(this.getId() + 1);
            return p;
        }

    }
}