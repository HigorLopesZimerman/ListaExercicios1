#include <iostream>
#include <cstdlib>

using namespace std;

class Matriz{
	private:
		
		int dados[10][10];
		int linhas, colunas;
		
	public:
		
		void lerDimensoes(){
			
			do{
				
				cout << "Digite o numero de linhas (max 10): ";
				cin >> linhas;
				
			} while (linhas <= 0 || linhas > 10);
			
			do{
				
				cout << "Digite o numero de colunas (max 10): ";
				cin >> colunas; 
				
			} while (colunas <=0 || colunas > 10);
			
			system("cls");
			
		}
		
		void preencherMatriz(){
			
			cout << "=== Preenchendo a matriz " << linhas << "x" << colunas << "===\n ";
			for(int i=0; i<linhas; i++){
				for(int j=0; j<colunas;j++){
					cout << "Elemento [" << i+1 << "] [" << j+1 << "]: ";
					cin >> dados[i][j];
				}
			}
			system("cls");
		}
		
		void mostrarMaiorMenor(){
			
			int maior = dados[0][0];
			int menor = dados[0][0];
			
			for(int i=0; i<linhas; i++){
				for(int j=0; j<colunas; j++){
					if(dados[i][j] > maior){
						maior = dados[i][j];
					}
					if(dados[i][j] < menor){
						menor = dados[i][j];
					}
				}
			}
			
			cout << "\nMaior elemento da matriz: " << maior << endl;
			cout << "\nMenor elemento da matriz: " << menor << endl;
			
		}
};

int main(){
	
	Matriz m;
	
	m.lerDimensoes();
	m.preencherMatriz();
	m.mostrarMaiorMenor();
}
