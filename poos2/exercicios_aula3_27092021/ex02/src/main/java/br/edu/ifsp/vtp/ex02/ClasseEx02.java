package br.edu.ifsp.vtp.ex02;

import java.util.Scanner;


public class ClasseEx02 {
    
    public static void main(String[] args) {
        
        Scanner input = new Scanner(System.in);
        
        int n1, n2;
        
        System.out.println("Digite um número: ");
        n1 = input.nextInt();
        
        System.out.println("Digite outro número: ");
        n2 = input.nextInt();
        
        System.out.println(n1 + " + " + n2 + " = " + (n1+n2));
        System.out.println(n1 + " - " + n2 + " = " + (n1-n2));
        System.out.println(n1 + " x " + n2 + " = " + (n1*n2));
        
    }
}
