#include <iostream>
#include <cstdlib>
#include <locale.h>

using namespace std;

class ConversorTemperatura{
	private:
		
		float temperatura;
		
		void lerTemperatura(string escala){
			cout << "Digite a temperatura em " << escala << ": ";
			cin >> temperatura;
			system("cls");
		}
		
		float celsiusParaFahrenheit(float c){
			return (c * 9.0/5.0) + 32;
		}
		
		float fahrenheitParaCelsius(float f){
			return (f - 32) * 5.0 / 9.0;
		}
		
	public:
		
		void menuOperacoes(){
			
			int option;
			
			do{
				
				cout << "=== Conversor de Temperaturas ===\n";
				cout << "1. Celsius para Fahrenheit\n";
				cout << "2. Fahrenheit para Celsius\n";
				cout << "0. Sair\n";
				cin >> option;
				system("cls");
				
				switch(option){
					
					case 1:{
						lerTemperatura("Celsius");
						cout << temperatura << "°C = " << celsiusParaFahrenheit(temperatura) << "°F\n\n";
						break;
					}
					
					case 2:{
						lerTemperatura("Fahrenheit");
						cout << temperatura << "°F = " << fahrenheitParaCelsius(temperatura) << "°C\n\n";
						break;
					}
					
					case 0:{
						cout << "Saindo do conversor...";
						break;
					}
					
					default:{
						cout << "Opcao Invalida!\n\n";
						break;
					}
				}
				
				
		 	} while(option!=0);
			
		}
};

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	ConversorTemperatura conversor;
	
	conversor.menuOperacoes();
}
