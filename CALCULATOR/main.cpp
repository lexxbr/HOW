//-------------------------------------------------
// UNIVALI - ANALISE E DESENVOLVIMENTO DE SISTEMAS
// HOW 2022
// ALUNO: ALEXANDRE FRANCISCO DE SOUZA - 7770324
//-------------------------------------------------
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    system("color 17");

    int opt;
    bool executa = true;
    //int binary;
    int bin[8];

    while(executa){
        opt = 0;
        cout << " CONVERSOR BINÁRIO!  " << endl << endl;
        cout << " :: OPÇÕES ::" <<endl  << endl;
        cout << " 1 - Decimal para Binary" << endl;
        cout << " 2 - Binary para Decimal" << endl;
        cout << " 0 - Para Sair" << endl << endl;
        cout << endl;
        cout << " Digite a Opção: [1],[2] ou [0] para Sair: ";
        cin >> opt;
        cout << endl;
        cout << "  Opção Escolhida:... " << "[" << opt << "]" << endl << endl;
            if(opt == 0){
                cout << "  Saindo do Programa" << endl;
                executa = false;
                exit;
            } else{
                if(opt == 1){
                    int decimal;
                    cout << "  Digite o valor em DECIMAL.: ";
                    cin >> decimal;
                    cout << "  Valor em Decimal: " << "" << decimal << "" << endl << endl;
                    cout << " *  *  B I N Á R I O  *  * " << "" << endl;
                        //converte dígitos da direita para a esquerda.
                        for (int i =  7; i >= 0; i--){
                            if (decimal % 2 == 0){
                                bin[i] = 0;
                            }else{
                                bin[i] = 1;
                            }
                            decimal = decimal / 2;
                        }
                        for (int i = 0; i < 8; i++){
                            cout << "  " << bin[i];
                        }
                    cout << endl << " *  *  *  *  *  *  *  *  * " << "" << endl;
                    cout << endl;

                } else{
                    if(opt == 2){
                        int binary, i, sobra, converte = 0;

                        cout << "  Digite o valor em BINÁRIO: ";
                        cin >> binary;
                        cout << "  Valor em BINÁRIO: " << "" << binary << "" << endl << endl ;
                        cout << " *  *  D E C I M A L  *  * " << "" << endl << endl;
                            //converte dígitos da direita para a esquerda.
                            for (i = 0; i < 6; i++) {
                                    sobra = binary - ((binary / 10)*10);
                                    binary = binary / 10;
                                    converte += sobra * pow(2,i);
                                }
                                cout << "             " << converte;
                                cout << endl << endl << " *  *  *  *  *  *  *  *  * " << "" << endl;
                                cout << endl;
                    }else{
                        cout <<"  Opção Inválida!" << endl << "  Digite uma das opções abaixo;" << endl << endl;
                    }
                }
            }
        cout << endl;
    //system("pause");
    }
    return 0;
}
