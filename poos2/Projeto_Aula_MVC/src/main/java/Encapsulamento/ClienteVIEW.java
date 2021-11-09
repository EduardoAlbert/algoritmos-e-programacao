package Encapsulamento;

import javax.swing.JOptionPane;


public class ClienteVIEW {
    public static void main(String[] args) {
        
        try {
            ClienteDTO clienteDTO = new ClienteDTO();
            ClienteCTR clienteCTR = new ClienteCTR();
            
            clienteDTO.setNome(JOptionPane.showInputDialog("Informe o nome: "));
            clienteDTO.setRg(JOptionPane.showInputDialog("Informe o RG: "));
            clienteDTO.setIdade(Integer.parseInt(JOptionPane.showInputDialog("Informe a idade: ")));
            
            JOptionPane.showMessageDialog(null, clienteCTR.mostrarNomeRg(clienteDTO));
            JOptionPane.showMessageDialog(null, clienteCTR.mostrarNomeIdade(clienteDTO));
        }
        catch(Exception erro) {
            JOptionPane.showMessageDialog(null, "Erro no sistema: " + erro.getMessage());
        }
        
    }
}
