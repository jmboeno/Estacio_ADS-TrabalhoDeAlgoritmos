#include <iostream>
#include <locale.h>
#include <conio.h>

using namespace std;

 int main ()
 {
 	setlocale(LC_ALL, "Portuguese");
 	float valor, total;
 	int modelo;
	int contador_nenhum = 0, contador_trio = 0, contador_ar = 0, contador_dir = 0, contador_completo = 0;
 	char opc = 'N';
 	bool valida = true;
 	
 	while(opc != 'S'){
 		
 		cout <<"Informe o valor do carro: ";
 		cin >> valor;
 		cout <<"#-------------------------------------#\n";
 		cout <<"#   0 - Nenhum                        #\n";
 		cout <<"#   1 - Trio Elétrico                 #\n";
 		cout <<"#   2 - Ar Condicionado               #\n";
 		cout <<"#   3 - Direção Hidraulica            #\n";
 		cout <<"#   4 - Compreto (Trio, Ar, Direção)  #\n";
 		cout <<"#   5 - Sair                          #\n";
 		cout <<"#-------------------------------------#\n";
 		cout <<"Informe o modelo: ";
 		cin >> modelo;
 		
 		switch(modelo){
 		
			case 0:
				total = valor * 1.08;
				contador_nenhum++;
				valida = true;
				break;
			case 1:
				total = (valor * 1.08) * 1.02;
				contador_trio++;
				valida = true;
				break;
			case 2:
				total = (valor * 1.02) * 1.08;
				contador_ar++;
				valida = true;
				break;
			case 3:
				total = (valor * 1.02) * 1.08;
				contador_dir++;
				valida = true;
				break;
			case 4:
				total = (valor + (valor*0.06)) + (valor*0.08);
				total -= total * 0.035;
				contador_completo++;
				valida = true;
				break;
			case 5:
				opc = 'S';
				break;
			default:
				cout<<"Opção inválida! \n";
				valida = false;
				break;
 			
		}
		
		if(valida){
			cout <<"Valor do carro: "<<total<<"\n";		
		}
		
		cout <<"----------------------------\n";
		
 		
	}
	
	cout <<"Total de vezes que cada opção foi escolhida: \n";
	cout <<"Nenhum: " <<contador_nenhum<< "\n";
	cout <<"Trio: " <<contador_trio<< "\n";
	cout <<"Ar Condicionado: " <<contador_ar<< "\n";
	cout <<"Direção Hidraulica: " <<contador_dir<< "\n";
	cout <<"Completo: " <<contador_completo<< "\n";
	
	system("PAUSE");
	return 0;
 }
