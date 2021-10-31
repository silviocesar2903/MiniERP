using System;
using MiniERP.Model;
namespace MiniERP
{
    class Programa
    {
        public static void Main(string[] args)
        {
            menu();
        }

        public static void menu()
        {
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
                            Console.WriteLine("Produto Cadastrado com sucesso");
                            break;
                        case 2:
                            e = e.adicionarProduto(e, p);
                            Console.WriteLine("Produto adicinado ao estoque com sucesso");
                            break;
                        case 3:
                            string nome;
                            Console.WriteLine("Por favor digite o nome do produto que deseja encomtrar");
                            nome = Console.ReadLine();
                            t = e.findProdutoEstoque(e, nome);
                            break;
                        case 4:
                            e.listarProdutos(e);
                            break;
                        case 5:
                            Console.WriteLine("Aplicacao esta encerrando...");
                            break;

                    }
                    t = null;
            }while(op != 5);
        }
        
        public static int showMenu()
        {
            int op =0;
            Console.WriteLine("Bem vido ao sistema mini ERP as opções sao:");
            Console.WriteLine("1 - Cadastrar Produto");
            Console.WriteLine("2 - Adicionar Produto ao Estoque");
            Console.WriteLine("3 - Procurar Produto no Estoque");
            Console.WriteLine("4 - Listar Produtos em Estoque");
            Console.WriteLine("5 - Sair da Aplicação");
            Console.Read();
            op = Console.Read();
            Console.WriteLine(op);
            return op;
        }

    }
}
