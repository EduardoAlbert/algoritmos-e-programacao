package br.edu.ifsp.vtp.ex05;

import java.util.Scanner;


public class ClasseEx05 {
    
    public static void main(String[] args) {
        
        Scanner input = new Scanner(System.in);
        
        float valProduto, percentAliquota, valEmReais;
        
        System.out.println("Valor do produto: R$");
        valProduto = input.nextFloat();
        
        System.out.println("Percentual da alíquota: ");
        percentAliquota = input.nextFloat();
        
        valEmReais = valProduto * (percentAliquota / 100);
        
        System.out.println("Valor em reais da porcentagem informada: R$" + valEmReais);
        
    }
}
