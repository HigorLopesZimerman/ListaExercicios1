#include <iostream>
#include <cstdlib>

using namespace std;

class Fatorial{
	private:
		int num;
		
		unsigned long long calcular(int n){
			if(n ==1 || n == 0){
				return 1;
			}
			
			return n * calcular(n -1);
		}
		
	public:
		
		void lerNumero(){
			do{
				cout << "Digite um numero inteiro nao negativo: ";
				cin >> num;
				
				if(num < 0){
					cout << "\n\nO numero deve ser nao negativo.\n" << endl;
				}
			} while (num < 0);
			system("cls");
		}
		
		void mostrarFatorial(){
			unsigned long long resultado = calcular(num);
			cout << "Fatorial de " << num << " eh: " << resultado << endl;
		}
};


int main(){
	
	Fatorial fatorial;
	
	fatorial.lerNumero();
	fatorial.mostrarFatorial();
	
	return 0;
}
