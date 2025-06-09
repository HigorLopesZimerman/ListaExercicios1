#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

class Contato {
private:
    string nome;
    string telefone;
    string email;

public:
    void lerDados() {
        cout << "Nome: ";
        getline(cin, nome);

        cout << "Telefone: ";
        getline(cin, telefone);

        cout << "Email: ";
        getline(cin, email);

        system("cls");
    }

    string getNome() {
        return nome;
    }

    string getTelefone() {
        return telefone;
    }

    string getEmail() {
        return email;
    }

    void mostrarContato() {
        cout << "Nome: " << nome
             << " | Telefone: " << telefone
             << " | Email: " << email << endl;
    }
};

class Agenda {
private:
    Contato contatos[10];
    int totalContatos;

public:
    Agenda() {
        totalContatos = 0;
    }

    void menu() {
        int opcao;
        do {
            cout << "\n===== AGENDA DE CONTATOS =====\n";
            cout << "1. Adicionar Contato\n";
            cout << "2. Listar Contatos\n";
            cout << "3. Buscar Contato por Nome\n";
            cout << "0. Sair\n";
            cout << "Escolha uma opcao: ";
            cin >> opcao;
            cin.ignore(); // limpa o buffer

            switch (opcao) {
                case 1:
                    adicionarContato();
                    break;
                case 2:
                    listarContatos();
                    break;
                case 3:
                    buscarContato();
                    break;
                case 0:
                    cout << "Encerrando a agenda...\n";
                    break;
                default:
                    cout << "Opcao invalida!\n";
            }

        } while (opcao != 0);
    }

private:
    void adicionarContato() {
        if (totalContatos < 10) {
            Contato c;
            c.lerDados();
            contatos[totalContatos] = c;
            totalContatos++;
            cout << "Contato adicionado com sucesso!\n";
        } else {
            cout << "Agenda cheia! Maximo de 10 contatos atingido.\n";
        }
    }

    void listarContatos() {
        if (totalContatos == 0) {
            cout << "Nenhum contato na agenda.\n";
        } else {
            cout << "\n--- Lista de Contatos ---\n";
            for (int i = 0; i < totalContatos; i++) {
                contatos[i].mostrarContato();
            }
        }
    }

    void buscarContato() {
        string nomeBusca;
        cout << "Digite o nome do contato: ";
        getline(cin, nomeBusca);
        bool encontrado = false;

        for (int i = 0; i < totalContatos; i++) {
            if (contatos[i].getNome() == nomeBusca) {
                cout << "Telefone: " << contatos[i].getTelefone() << endl;
                cout << "Email: " << contatos[i].getEmail() << endl;
                encontrado = true;
                break;
            }
        }

        if (!encontrado) {
            cout << "Contato nao encontrado.\n";
        }
    }
};

int main() {
    Agenda agenda;
    agenda.menu();
    return 0;
}

