package br.edu.ifsp.vtp.ex01;

import java.util.Scanner;


public class ClasseEx01 {
    
    public static void main(String[] args) {
        
        Scanner input = new Scanner(System.in);
        
        float tempCels, tempFahr;
        
        System.out.println("Temperatura em graus Celsius: ");
        tempCels = input.nextFloat();
        
        tempFahr = tempCels * 9/5 + 32;
        
        System.out.println("Temperatura em graus Fahrenheit: " + tempFahr);
        
    }

}
