//-------------------------------------------------
// UNIVALI - ANALISE E DESENVOLVIMENTO DE SISTEMAS
// HOW1 2022
// ALUNO: ALEXANDRE FRANCISCO DE SOUZA - 7770324
//-------------------------------------------------
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#include <locale.h>

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
        cout << endl;
        cout << "      **************************************************************** " << endl;
        cout << "      *    ____ __________  ._______   _________  .____    .___  (R) *   " << endl;
        cout << "      *   |    |   \\      \\ |   \\   \\ /   /  _  \\ |    |   |   |     *  " << endl;
        cout << "      *   |    |   /   |   \\|   |\\   Y   /  /_\\  \\|    |   |   |     *" << endl;
        cout << "      *   |    |  /    |    \\   | \\     /    |    \\    |___|   |     * " << endl;
        cout << "      *   |______/\\____|__  /___|  \\___/\\____|__  /_______ \\___|     * " << endl;
        cout << "      *                   \\/                    \\/        \\/         *" << endl;
        cout << "      ****************************************| UNIVALI ITAJAÍ |****** " << endl << endl;
        cout << "                  |  D E C I M A L  >>>  B I N Á R I O  |                " << endl;
        cout << "                  |  D E C I M A L  <<<  B I N Á R I O  |                " << endl << endl;
        cout << "      **************************************************************** " << endl << endl;
        cout << "      :: OPÇÕES ::" <<endl  << endl;
        cout << "      [1] - Decimal para Binary >>>" << endl;
        cout << "      [2] - Binary para Decimal <<<" << endl;
        cout << "      [0] - Para Sair" << endl ;
        cout << endl;
        cout << " -------------------------------------------------------------| v.02 |----- " << endl << endl;
        cout << "                    Digite a Opção: [1],[2] ou [0] para Sair: ";
        //cout << "[";
        cin >> opt;
        //cout << "]");
        //cin >> "["opt"]";
        cout << endl;
        cout << "   Opção Escolhida:... " << "[" << opt << "]" << endl << endl;
            if(opt == 0){
                system("clear||cls");
                cout << "      ---------------------------------------------------------------------------- " << endl;
                cout << "                        S A I N D O    D O    P R O G R A M A                      " << endl;
                cout << "      ---------------------------------------------------------------------------- " << endl << endl;
                cout << "      'O segredo da criatividade é saber como esconder as fontes. Albert Einstein'" << endl;
                cout << "              _													" << endl;
                cout << "             | |													" << endl;
                cout << "             | |==( )     //////									" << endl;
                cout << "             |_|   |||   | 0 0|									" << endl;
                cout << "                     ||| (  > )                  ____				" << endl;
                cout << "                      ||| \\ º/                  ||   \\_			" << endl;
                cout << "                       ||||||                   ||     |			" << endl;
                cout << "                       ||UVI|                ...||___|-'			" << endl;
                cout << "                       ||||||             __|________|__			" << endl;
                cout << "                         |||             |______________|			" << endl;
                cout << "                         |||             || ||      || ||			" << endl;
                cout << "                         |||             || ||      || ||			" << endl;
                cout << "      -------------------|||-------------||-||------||-||-------------------------	" << endl;
                cout << "                        [___¨¨;          || ||      || ||		 	" << endl << endl;
                cout << "                     -------------------------------------	 	" << endl;
                cout << "                  Agradecimentos: Prof. Alex Luciano R. Rese	    	" << endl;
                cout << "                     -------------------------------------	 	" << endl << endl;
                cout << "                 ** PRESSIONE ""QUALQUER TECLA"" PARA FINALIZAR **"  << endl;

                executa = false;
                exit;
            } else{
                if(opt == 1){
                    int decimal;
                    cout << "   Digite o valor em DECIMAL.: ";
                    cin >> decimal;
                    system("clear||cls");
                    cout << endl << "   VALOR DIGITADO (DECIMAL): " << "" << decimal << "" << endl << endl << endl;
                    cout << "     *  *  B I N Á R I O  *  * " << "" << endl << endl;
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
                            cout << "   " << bin[i];
                        }
                    cout << endl << endl << "    *  *  *  *  *  *  *  *  * " << "" << endl;
                    cout << endl << endl;
                    system("pause");
                    system("clear||cls");

                } else{
                    if(opt == 2){
                        int binary, i, converte = 0;

                        cout << "   Digite o valor em BINÁRIO: ";
                        cin >> binary;
                        system("clear||cls");
                        cout << endl << "   VALOR DIGITADO (BINÁRIO): " << "" << binary << "" << endl << endl ;
                        cout << " *  *  D E C I M A L  *  * " << "" << endl << endl;
                            //converte dígitos da direita para a esquerda.


                            for (i = 0; binary > 0; i++) {
                                    converte = converte + pow(2,i) * (binary %10);
                                    binary = binary / 10;
                                }
                                cout << "             " << converte;
                                cout << endl << endl << " *  *  *  *  *  *  *  *  * " << "" << endl;
                                cout << endl;
                    }else{
                        cout <<"  Opção Inválida!" << endl << "  Digite uma das opções abaixo;" << endl << endl;
                    }
                    system("pause||caguei");
                    cout << "   PRESSIONE ""ENTER"" PARA CONTINUAR ";
                    system("clear||cls");
                }
            }
        cout << endl;
    //system("pause");
    }
    return 0;
}
