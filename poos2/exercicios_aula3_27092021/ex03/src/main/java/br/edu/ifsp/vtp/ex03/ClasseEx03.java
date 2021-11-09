package br.edu.ifsp.vtp.ex03;

import java.util.Scanner;


public class ClasseEx03 {
    
    public static void main(String[] args) {
        
        Scanner input = new Scanner(System.in);
        
        int r, w, x, y;
        
        System.out.println("r = ");
        r = input.nextInt();
        
        System.out.println("w = ");
        w = input.nextInt();
        
        System.out.println("x = ");
        x = input.nextInt();
        
        System.out.println("y = ");
        y = input.nextInt();
        
        System.out.println("x*y = " + x + "*" + y + " = " + (x*y));
        System.out.println("x²+y = " + x + "²+" + y + " = " + (x*x+y));
        System.out.println("(4/r)*(w+r) = " + "(4/" + r + ")*(" + w + "+" + r + ") = " + ((4/r)*(w+r)));
    }
}
