package Cadastro;


public class FuncionarioCTR {
    
    FuncionarioDAO funcionarioDAO = new FuncionarioDAO();
    
    public String mostrarCodigoTelefone(FuncionarioDTO funcionarioDTO) {
        return funcionarioDAO.mostrarCodigoTelefone(funcionarioDTO);
    }
    
}
