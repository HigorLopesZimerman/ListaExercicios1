#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>

using namespace std;

class Funcionario {
private:
    string nome;
    int id;
    double salario;
    string departamento;

public:
    void lerDados() {
        cout << "Nome do funcionario: ";
        getline(cin, nome);

        cout << "ID: ";
        cin >> id;

        cout << "Salario: ";
        cin >> salario;
        cin.ignore(); // limpa o buffer

        cout << "Departamento: ";
        getline(cin, departamento);

        system("cls");
    }

    string getDepartamento() {
        return departamento;
    }

    double getSalario() {
        return salario;
    }

    void mostrarDados() {
        cout << "ID: " << id
             << " | Nome: " << nome
             << " | Salario: R$" << salario
             << " | Departamento: " << departamento << endl;
    }
};

class SistemaFuncionarios {
private:
    vector<Funcionario> lista;

public:
    void menu() {
        int opcao;

        do {
            cout << "\n===== MENU FUNCIONARIOS =====\n";
            cout << "1. Cadastrar Funcionario\n";
            cout << "2. Total de Salarios por Departamento\n";
            cout << "3. Listar Todos os Funcionarios\n";
            cout << "0. Sair\n";
            cout << "Escolha uma opcao: ";
            cin >> opcao;
            cin.ignore();

            switch (opcao) {
                case 1:
                    cadastrarFuncionario();
                    break;
                case 2:
                    calcularTotalSalarios();
                    break;
                case 3:
                    listarFuncionarios();
                    break;
                case 0:
                    cout << "Saindo do sistema...\n";
                    break;
                default:
                    cout << "Opcao invalida!\n";
            }

        } while (opcao != 0);
    }

private:
    void cadastrarFuncionario() {
        Funcionario f;
        f.lerDados();
        lista.push_back(f);
        cout << "Funcionario cadastrado com sucesso!\n";
    }

    void calcularTotalSalarios() {
        string depto;
        double total = 0;

        cout << "Informe o departamento: ";
        getline(cin, depto);

        for (size_t i = 0; i < lista.size(); i++) {
            if (lista[i].getDepartamento() == depto) {
                total += lista[i].getSalario();
            }
        }

        cout << "Total de salarios no departamento '" << depto << "': R$" << total << "\n";
    }

    void listarFuncionarios() {
        if (lista.empty()) {
            cout << "Nenhum funcionario cadastrado.\n";
        } else {
            cout << "\n=== LISTA DE FUNCIONARIOS ===\n";
            for (size_t i = 0; i < lista.size(); i++) {
                lista[i].mostrarDados();
            }
        }
    }
};

int main() {
    SistemaFuncionarios sistema;
    sistema.menu();
    return 0;
}

