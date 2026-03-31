try:
    valor = float(input("Digite o valor: "))
except ValueError:
    print("Erro: nao e permitido digitar letras. Digite apenas numeros.")
    exit()

if valor <= 0:
    print("Erro: o valor deve ser maior que zero.")
    exit()

n = int(valor * 100 + 0.5)

notas200  = n // 20000; n %= 20000
notas100  = n // 10000; n %= 10000
notas50   = n // 5000;  n %= 5000
notas20   = n // 2000;  n %= 2000
notas10   = n // 1000;  n %= 1000
notas5    = n // 500;   n %= 500
notas2    = n // 200;   n %= 200
moedas1   = n // 100;   n %= 100
moedas050 = n // 50;    n %= 50
moedas025 = n // 25;    n %= 25
moedas010 = n // 10;    n %= 10
moedas005 = n // 5;     n %= 5
moedas001 = n

if notas200  > 0: print(f"{notas200} nota(s) de R$ 200,00")
if notas100  > 0: print(f"{notas100} nota(s) de R$ 100,00")
if notas50   > 0: print(f"{notas50} nota(s) de R$ 50,00")
if notas20   > 0: print(f"{notas20} nota(s) de R$ 20,00")
if notas10   > 0: print(f"{notas10} nota(s) de R$ 10,00")
if notas5    > 0: print(f"{notas5} nota(s) de R$ 5,00")
if notas2    > 0: print(f"{notas2} nota(s) de R$ 2,00")
if moedas1   > 0: print(f"{moedas1} moeda(s) de R$ 1,00")
if moedas050 > 0: print(f"{moedas050} moeda(s) de R$ 0,50")
if moedas025 > 0: print(f"{moedas025} moeda(s) de R$ 0,25")
if moedas010 > 0: print(f"{moedas010} moeda(s) de R$ 0,10")
if moedas005 > 0: print(f"{moedas005} moeda(s) de R$ 0,05")
if moedas001 > 0: print(f"{moedas001} moeda(s) de R$ 0,01")
