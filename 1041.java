/*
	Código em Java Problema 1041
*/
package main;

import java.util.Scanner;

public class Main {
    
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String linha = input.nextLine();
        
        String [] parts = linha.split(" ");
        float x = Float.parseFloat(parts[0]);
        float y = Float.parseFloat(parts[1]);
        
        if(x == 0 && y == 0)
            System.out.println("Origem");
        
        else if(x == 0 && y != 0)
            System.out.println("Eixo Y");
        else if(y == 0 && x != 0)
            System.out.println("Eixo X");
        
        else if(x > 0 && y > 0)
            System.out.println("Q1");
        else if(x < 0 && y > 0)
            System.out.println("Q2");
        else if(x < 0 && y < 0)
            System.out.println("Q3");
        else
            System.out.println("Q4");                    
    }    
}
