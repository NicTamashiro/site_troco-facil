#include <stdio.h>

int main() {
    float valor;
    printf("Digite o valor: ");
    if (scanf("%f", &valor) != 1) {
        printf("Erro: nao e permitido digitar letras. Digite apenas numeros.\n");
        return 1;
    }

    if (valor <= 0) {
        printf("Erro: o valor deve ser maior que zero.\n");
        return 1;
    }

    int n = (int)(valor * 100 + 0.5);

    int notas200  = n / 20000; n %= 20000;
    int notas100  = n / 10000; n %= 10000;
    int notas50   = n / 5000;  n %= 5000;
    int notas20   = n / 2000;  n %= 2000;
    int notas10   = n / 1000;  n %= 1000;
    int notas5    = n / 500;   n %= 500;
    int notas2    = n / 200;   n %= 200;
    int moedas1   = n / 100;   n %= 100;
    int moedas050 = n / 50;    n %= 50;
    int moedas025 = n / 25;    n %= 25;
    int moedas010 = n / 10;    n %= 10;
    int moedas005 = n / 5;     n %= 5;
    int moedas001 = n;

    if (notas200  > 0) printf("%d nota(s) de R$ 200,00\n", notas200);
    if (notas100  > 0) printf("%d nota(s) de R$ 100,00\n", notas100);
    if (notas50   > 0) printf("%d nota(s) de R$ 50,00\n",  notas50);
    if (notas20   > 0) printf("%d nota(s) de R$ 20,00\n",  notas20);
    if (notas10   > 0) printf("%d nota(s) de R$ 10,00\n",  notas10);
    if (notas5    > 0) printf("%d nota(s) de R$ 5,00\n",   notas5);
    if (notas2    > 0) printf("%d nota(s) de R$ 2,00\n",   notas2);
    if (moedas1   > 0) printf("%d moeda(s) de R$ 1,00\n",  moedas1);
    if (moedas050 > 0) printf("%d moeda(s) de R$ 0,50\n",  moedas050);
    if (moedas025 > 0) printf("%d moeda(s) de R$ 0,25\n",  moedas025);
    if (moedas010 > 0) printf("%d moeda(s) de R$ 0,10\n",  moedas010);
    if (moedas005 > 0) printf("%d moeda(s) de R$ 0,05\n",  moedas005);
    if (moedas001 > 0) printf("%d moeda(s) de R$ 0,01\n",  moedas001);

    return 0;
}
