# var
vm = 0.0
nome = ""

# algoritmo
nome = str(input("Nome: "))
vm = float(input("Valor de vendas: R$"))

print(f"Olá, {nome}. ", end="")

if vm > 50000:
    print("A venda está ótima!")
elif vm < 10000:
    print("A venda está baixa...")
else:
    print("A venda está ideal.")
