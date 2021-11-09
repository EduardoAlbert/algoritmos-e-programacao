package br.edu.ifsp.vtp.poo_13092021.salario;

import java.util.Scanner;


public class salario {
    
    public static void main(String[] args) {
        
        Scanner input = new Scanner(System.in);
        
        System.out.println("Quantidade de horas trabalhadas: ");
        float quant_horas = input.nextFloat();
        
        System.out.println("Valor da hora trabalhada: ");
        float val_hora = input.nextFloat();
        
        System.out.println("Porcentagem de desconto do INSS: ");
        float porcent_INSS = input.nextFloat();
        
        System.out.println("Porcentagem de desconto do IR: ");
        float porcent_IR = input.nextFloat();
        
        float sal_bruto = quant_horas * val_hora;
        float tot_descontos = sal_bruto * ((porcent_INSS + porcent_IR) / 100);
        float sal_liquido = sal_bruto - tot_descontos;
        
        System.out.println("Salário bruto: R$" + sal_bruto);
        System.out.println("Total de descontos: R$" + tot_descontos);
        System.out.println("Salário líquido: R$" + sal_liquido);
        
    }
}