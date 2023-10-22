package aluraAula.Leitura;

import java.util.Random;
import java.util.Scanner;

public class games100 {
  public static void main(String[] args) {

		int vidas = 0;
    int numeroDigitado = 0;
    //int result;
		int numeroAleatorio = new Random().nextInt(10);
    Scanner leitor = new Scanner(System.in);
    
    
		while (vidas < 5) {
  		System.out.println("de 0 a 10, que numero estou pensando?");

			numeroDigitado = leitor.nextInt();

      if (numeroDigitado == numeroAleatorio) {
        //result = 1;
        //continue;
        System.out.println("parabens voce acertou!");
        break;
      } else if (numeroDigitado < numeroAleatorio) {
        //result = 2;
        //continue;
        System.out.println("um pouco mais...");
        vidas++;
      } else { //result = 3;
      System.out.println("um pouco menos");
      vidas++;
    }

      /*switch (result) {
        case 1:
        System.out.println("incrivel! voce acertou");
        break;

        case 2:
        System.out.println("um pouco menos...");
        vidas++;

        case 3:
        System.out.println("um pouco mais...");
        vidas++;
      }*/

      if (vidas == 5) {System.out.println("parece que voce não conceguiu..."); }
    }
  }
}
