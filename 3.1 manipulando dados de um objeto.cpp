#include <iostream>

using namespace std;

class ValorContainer {
public:
    int valor;

    static void trocarValores(ValorContainer& refA, ValorContainer& refB) {
        int temp = refA.valor;
        refA.valor = refB.valor;
        refB.valor = temp;
    }
};

int main() {
    ValorContainer objA, objB;

    cout << "Digite o valor para objA: ";
    cin >> objA.valor;

    cout << "Digite o valor para objB: ";
    cin >> objB.valor;

    cout << "\nAntes da troca:" << endl;
    cout << "objA.valor = " << objA.valor << endl;
    cout << "objB.valor = " << objB.valor << endl;

    ValorContainer::trocarValores(objA, objB);

    cout << "\nDepois da troca:" << endl;
    cout << "objA.valor = " << objA.valor << endl;
    cout << "objB.valor = " << objB.valor << endl;

    return 0;
}

