
package desafio.src;

import java.util.Scanner;

public class desafio {
    public static void main(String[] args) {
     String nome = "jarvas";
     String tipoConta = "corrente";
     double saldo = 1599.99; 
     Scanner entrada = new Scanner(System.in);
     int menu = 0;

     System.out.println("Dados iniciais do cliente;\n");
     System.out.println ("***********************");
     System.out.println("\nNome do cliente: " + nome);
     System.out.println("tipo da conta: " + tipoConta);
     System.out.println("saldo: " + saldo);
     System.out.println("\n**********************\n");

      
     while (menu != 4) {
      System.out.println("1 para para ver saldo");
      System.out.println("2 para tranferir" );
      System.out.println("3 para depositar" );
      System.out.println("4 para sair\n" );

      menu = entrada.nextInt();

      switch (menu) {
        case 1: 
        System.out.println("seus saldo é: " + saldo);
        System.out.println(" ");
        break;

        case 2:
        System.out.println("quanto voce quer tranferir: ");
        double transferencia = entrada.nextDouble();
        if (transferencia > saldo) {
          System.out.println("voce n tem esse dinheiro");
        } else {
        saldo = (saldo - transferencia); 
        }
        break;

        case 3:
        System.out.println("quanto voce quer depositar: ");
        double deposito = entrada.nextDouble();
        saldo = (saldo + deposito);
        break;
      }
     }
    }
}
