#include <iostream>
#include <iomanip>

using namespace std;

int calcularFatorial(int n);
int A (int n, int r);
int C (int n, int r);


int main()
{
    int n, r;
    int a, f, c;

    cout << "informe o valore de n: ";

    cin >> n;

    cout << "informe o valore de r: ";

    cin >> r;

    f = calcularFatorial(n);

    a = A(n, r);

    c = C(n, r);

    cout << "fatorial de N : " << f << endl;

    cout << "A (n,r): " << a << endl;

    cout << "C (n,r): " << c << endl;

    return 0;
}

int calcularFatorial(int n){
    // calculando Fatorial
    int resultado = 1;

    for(int i=2;i<=n;i++){

        resultado = resultado * i;
    }

    return resultado;
}

int A (int n, int r){
    return calcularFatorial(n) / calcularFatorial(n - r);
}

int C (int n, int r){
    return calcularFatorial(n) / (calcularFatorial(n - r) * calcularFatorial(r));
}


