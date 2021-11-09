/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package br.edu.ifsp.vtp.poo_13092021.poo_13092021;

import javax.swing.JOptionPane;

/**
 *
 * @author Administrador
 */
public class Classe2 {
    public static void main(String[] args) {
        String nome = "";
        nome = JOptionPane.showInputDialog("Digite seu nome:");
        JOptionPane.showMessageDialog(null, "Seja Bem-Vindo, " + nome + "!");
    }
}
