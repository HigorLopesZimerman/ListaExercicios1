#include <iostream>
#include <cstdlib>

void adicao(float x, float y, float &z){
	system("cls");
	z = x + y;
	std::cout << "\nResultado de " << x << " + " << y <<": " << z << std::endl << std::endl;
}

void subtracao(float x, float y, float &z){
	system("cls");
	z = x - y;
	std::cout << "\nResultado de " << x << " - " << y <<": " << z << std::endl << std::endl;
}

void mult(float x, float y, float &z){
	system("cls");
	z = x * y;
	std::cout << "\nResultado de " << x << " x " << y <<": " << z << std::endl << std::endl;
}

void div(float x, float y, float &z){
	system("cls");
	z = x / y;
	std::cout << "\nResultado de " << x << " / " << y <<": " << z << std::endl << std::endl;
}

int main(){
	
	float x, y, z;
	
	
	
	std::cout << "Digite o primeiro numero(X): ";
	std::cin >> x;
	system("cls");
	std::cout << "Digite o segundo numero(Y): ";
	std::cin >> y;
	system("cls");
	
	
	int option;
	
	do{
		
		std::cout << "\n====Operacoes====\n";
		std::cout << "1. Adicao\n";
		std::cout << "2. Subtracao\n";
		std::cout << "3. Multiplicacao\n";
		std::cout << "4. Divisao\n";
		std::cout << "0. Sair\n";
		std::cout << "\nInsira uma das opcoes: ";
		std::cin >> option;
		
		
		switch(option){
			
			case 1:{
				adicao(x, y, z);
				break;
			}
			
			case 2:{
				subtracao(x, y, z);
				break;
			}
			
			case 3:{
				mult(x, y, z);
				break;
			}
			
			case 4:{
				div(x, y, z);
				break;
			}
			
			case 0:{
				std::cout << "Saindo da calculadora...";	
				break;
			}
		}
		
	} while(option!=0);
	
	
}
