# var
num = 0
numList = []

# algoritmo
while True:
    num = int(input("Digite um número: "))
    if num != 0:
        numList.append(num)
    else: 
        break

if len(numList) > 0:
    print('O maior número digitado foi: ', max(numList))
    print('O menor número digitado foi: ', min(numList))