totalInicial, cheque1, cheque2, totalCheque, totalFinal = 0.0, 0.0, 0.0, 0.0, 0.0

totalInicial = float(input('Salário: R$'))
cheque1 = float(input('Valor do Cheque 1: R$'))
cheque2 = float(input('Valor do Cheque 2: R$'))

totalCheque = cheque1 + cheque2
totalFinal = totalInicial - totalCheque * 1.0038

print('Saldo Restante: R$' + str(totalFinal))