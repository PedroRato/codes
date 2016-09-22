package main;

import java.util.Scanner;

public class Main {
    
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        
        String linha1 = input.nextLine();
        String linha2 = input.nextLine();
        String linha3 = input.nextLine();
        
        if(linha1.equals("vertebrado")){
            if(linha2.equals("ave")){
                if(linha3.equals("carnivoro")){
                    linha1 = "aguia";
                } else {
                    linha1 = "pomba";
                }
            } else{
                if(linha3.equals("onivoro")){
                    linha1 = "homem";
                }else{
                    linha1 = "vaca";
                }
            }   
        }else{
            if(linha2.equals("inseto")){
                if(linha3.equals("herbivoro")){
                    linha1 = "lagarta";
                } else {
                    linha1 = "pulga";
                }
            } else{
                if(linha3.equals("onivoro")){
                    linha1 = "minhoca";
                }else{
                    linha1 = "sanguessuga";
                }
            } 
        }
        System.out.println(linha1);
    }    
}
