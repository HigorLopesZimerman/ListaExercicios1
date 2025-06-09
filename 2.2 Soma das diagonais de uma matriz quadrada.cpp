#include <iostream>
#include <cstdlib>

using namespace std;

class MatrizQuadrada{
	private:
		
		int matriz[10][10];
		int ordem;
		
	public:
		
		void lerOrdem(){
			
			do{
				
				cout << "Digite a ordem da matriz quadrada (max 10): ";
				cin >> ordem; 
				
			} while (ordem <=0 || ordem > 10);
			
			system("cls");
			
		}
		
		void preencher(){
			
			cout << "=== Preenchendo a matriz " << ordem << "x" << ordem << "===\n ";
			for(int i=0; i<ordem; i++){
				for(int j=0; j<ordem;j++){
					cout << "Elemento [" << i+1 << "] [" << j+1 << "]: ";
					cin >> matriz[i][j];
				}
			}
			system("cls");
		}
		
		void somarDiagonais(){
			
			int somaPrincipal = 0;
			int somaSecundaria = 0;
			
			for( int i=0;i < ordem; i++){
				somaPrincipal += matriz[i][i];
				somaSecundaria += matriz[i][ordem -1 -i];
			}
			
			cout << "Soma da diagonal principal: " << somaPrincipal << endl;
     		cout << "Soma da diagonal secundaria: " << somaSecundaria << endl;
		}
};

int main(){
	
	MatrizQuadrada mq;
	
	mq.lerOrdem();
	mq.preencher();
	mq.somarDiagonais();
}
