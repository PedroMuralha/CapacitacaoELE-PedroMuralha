#include <iostream>
#include <cmath>
using namespace std;

int main() {
    char op;
    char x = 's';
    float num1, num2;   
    int num3,num4;

    do{
        cout << "Entre com a operacao(+, -, *, /,%(resto),^(potencia),r(raiz quadrada),!(fatorial)): ";
        cin >> op;

        if ( op == '+' || op == '-' || op =='*' || op == '/' || op == '^'){
            cout << "Entre com o primeiro numero: ";
            cin >> num1;
            cout << "Entre com o segundo numero: ";
            cin >> num2;}

        else if (op == '%'){
            cout << "Entre com o primeiro numero: ";
            cin >> num3;
            cout << "Entre com o segundo numero: ";
            cin >> num4;}           
        
        else if (op == 'r' || op == '!'){
            cout << "Entre com o numero: ";
            cin >> num1;}   

        switch(op){

            case '+':
                cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
                cout << "Deseja continuar(s/n):  ";
                cin >> x;
                break;

            case '-':
                cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
                cout << "Deseja continuar(s/n):  ";
                cin >> x;
                break;

            case '*':
                cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
                cout << "Deseja continuar(s/n):  ";
                cin >> x;
                break;

            case '/':
                if (num2 != 0){
                cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;}
                else{
                cout << "Insira um denominador diferente de zero: ";
                cin >> num2; 
                cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;   
                }
                cout << "Deseja continuar(s/n): ";
                cin >> x;
                break;

            case '%':
                cout << num3 << " % " << num4 << " = " << num3 % num4 << endl;
                cout << "Deseja continuar(s/n): ";
                cin >> x;
                break;

            case '^':
                cout << num1 << " ^ " << num2 << " = " << pow(num1,num2) << endl;
                cout << "Deseja continuar(s/n): ";
                cin >> x;
                break;

            case 'r':
                cout << num1 << " = " << sqrt(num1) << endl;
                cout << "Deseja continuar(s/n): ";
                cin >> x;
                break;

            case '!':
                int num, fat=1;
                for(num = 1; num <= num1 ; num++)
                    fat *= num;
                cout << num1 << " ! " << " = " << fat << endl;
                cout << "Deseja continuar(s/n): ";
                cin >> x;
                break;

            }
    }while(x == 's' || x == 'S' );

    cout << "Ate mais!  ";

    return 0;
}