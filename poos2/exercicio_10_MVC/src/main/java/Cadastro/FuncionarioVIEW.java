package Cadastro;

import javax.swing.JOptionPane;


public class FuncionarioVIEW {
    public static void main(String[] args) {
        
        try {
            FuncionarioDTO funcionarioDTO = new FuncionarioDTO();
            FuncionarioCTR funcionarioCTR = new FuncionarioCTR();
            
            funcionarioDTO.setCodigo(Integer.parseInt(JOptionPane.showInputDialog("Código: ")));
            funcionarioDTO.setTelefone(JOptionPane.showInputDialog("Telefone: "));
            
            JOptionPane.showMessageDialog(null, funcionarioCTR.mostrarCodigoTelefone(funcionarioDTO));
        }
        catch (Exception erro) {
            JOptionPane.showMessageDialog(null, "Erro: " + erro.getMessage());
        }
        finally {
            JOptionPane.showMessageDialog(null, "Fim do programa.");
        }
        
    }
}
