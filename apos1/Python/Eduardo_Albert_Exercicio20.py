# var
vet = [0]*5

# algoritmo
print(vet)
for i in range(0, 5):
    vet[i] = int(input(f'Informe um número para a Posição {i}: '))

for i in range(0, 5):
    print(f'vet[{i}] = {vet[i]}')