package Cadastro;


public class FuncionarioDAO {
    
    public String mostrarCodigoTelefone(FuncionarioDTO funcionarioDTO) {
        return "Código: " + funcionarioDTO.getCodigo() + 
                "\nTelefone: " + funcionarioDTO.getTelefone();
    }
    
}
