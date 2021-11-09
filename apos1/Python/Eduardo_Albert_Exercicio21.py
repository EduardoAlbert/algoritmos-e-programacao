# var
matrix = [[0]*5, [0]*5, [0]*5, [0]*5, [0]*5]

# algoritmo
for i in range(0, 5):
    for j in range(0, 5):
        matrix[i][j] = int(input(f'Informe um número para a Posição [{i}, {j}]: '))

for i in range(0, 5):
    for j in range(0, 5):
        if i == j:
            print(matrix[i][j], end=' ')