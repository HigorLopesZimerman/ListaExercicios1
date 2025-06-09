#include <iostream>
#include <cstring>
#include <cctype>
#include <cstdlib>

using namespace std;

class VerificadorPalindromo {
private:
    char entrada[100];

    void limparFrase(char limpa[]) {
        int j = 0;
        for (int i = 0; entrada[i] != '\0'; i++) {
            if (entrada[i] != ' ') {
                limpa[j++] = tolower(entrada[i]);
            }
        }
        limpa[j] = '\0';
    }

public:
    void lerEntrada() {
        cout << "Digite uma palavra ou frase: ";
        cin.getline(entrada, 100);
        system("cls");
    }

    bool ehPalindromo() {
        char limpa[100];
        limparFrase(limpa);

        int ini = 0;
        int fim = strlen(limpa) - 1;

        while (ini < fim) {
            if (limpa[ini] != limpa[fim]) {
                return false;
            }
            ini++;
            fim--;
        }

        return true;
    }
};

int main() {
    VerificadorPalindromo verificador;

    verificador.lerEntrada();

    if (verificador.ehPalindromo()) {
        cout << "\nEh um palindromo!" << endl;
    } else {
        cout << "\nNao eh um palindromo." << endl;
    }

    return 0;
}

