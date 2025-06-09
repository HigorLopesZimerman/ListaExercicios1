#include <iostream>
#include <cstdlib>

class Calculadora {
	
	private:
		float x, y, z;
	
	public:
		void lerNumeros(){
			std::cout << "Digite o primeiro numero(X): ";
			std::cin >> x;
			system("cls");
			
			std::cout << "Digite o segundo numero(Y): ";
			std::cin >> y;
			system("cls");
		}
		
		
		void menuOperacoes() {
        	int option;
	
        	do {
	            std::cout << "\n==== Operacoes ====\n";
	            std::cout << "1. Adicao\n";
	            std::cout << "2. Subtracao\n";
	            std::cout << "3. Multiplicacao\n";
	            std::cout << "4. Divisao\n";
	            std::cout << "0. Sair\n";
	            std::cout << "\nInsira uma das opcoes: ";
	            std::cin >> option;
	
	            switch (option) {
	                case 1:
	                    adicao();
	                    break;
	                case 2:
	                    subtracao();
	                    break;
	                case 3:
	                    multiplicacao();
	                    break;
	                case 4:
	                    divisao();
	                    break;
	                case 0:
	                    std::cout << "Saindo da calculadora..." << std::endl;
	                    break;
	                default:
	                    std::cout << "Opcao invalida!" << std::endl;
	            }
	
	        } while (option != 0);
	    }
	    
	    private:
	    	void adicao(){
				system("cls");
				z = x + y;
				std::cout << "\nResultado de " << x << " + " << y <<": " << z << std::endl << std::endl;
			}
	    	
	    	void subtracao(){
				system("cls");
				z = x - y;
				std::cout << "\nResultado de " << x << " - " << y <<": " << z << std::endl << std::endl;
			}
			
			void multiplicacao(){
				system("cls");
				z = x * y;
				std::cout << "\nResultado de " << x << " x " << y <<": " << z << std::endl << std::endl;
			}
			
			void divisao(){
				system("cls");
				if(y!=0){
				z = x / y;
				std::cout << "\nResultado de " << x << " / " << y <<": " << z << std::endl << std::endl;
				} else {
					std::cout << "\nErro: Divisao por zero!" << std::endl << std::endl;
				}
			}
		
};

int main(){
	Calculadora calc;
	
	calc.lerNumeros();
	calc.menuOperacoes();
	
	return 0;
}
