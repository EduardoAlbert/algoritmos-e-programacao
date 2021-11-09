# var
nt1, nt2, nt3, media = 0.0, 0.0, 0.0, 0.0
tipo = ""

# algoritmo
def calcMedia(n1, n2, n3, tipo):
    if tipo == "A":
        return (n1 + n2 + n3) / 3
    elif tipo == "P":
        return ((n1 * 5) + (n2 * 3) + (n3 * 2)) / 10

nt1 = float(input('Nota 1: '))
nt2 = float(input('Nota 2: '))
nt3 = float(input('Nota 3: '))
tipo = input('Tipo de média - Aritmética (digite "A") ou Ponderada (digite "P"): ')

media = calcMedia(nt1, nt2, nt3, tipo)

print('A média do aluno é ' + str(media))