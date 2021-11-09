package br.edu.ifsp.vtp.ex04;

import java.util.Scanner;


public class ClasseEx04 {
    
    public static void main(String[] args) {
        
        Scanner input = new Scanner(System.in);
        
        int n, cubo;
        
        System.out.println("Digite um número: ");
        n = input.nextInt();
        cubo = (int) Math.pow(n, 3);
        
        System.out.println("O cubo de " + n + " é " + cubo);
        System.out.println("A diferença entre " + cubo + " e " + n + " é " + (cubo-n));
        
    }
}
