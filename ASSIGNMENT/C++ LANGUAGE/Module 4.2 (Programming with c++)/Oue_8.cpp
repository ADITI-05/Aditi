/* Write a program to Mathematic operation like Addition, Subtraction, Multiplication, Division 
   Of two number using different parameters and Function Overloading.
*/

#include <iostream>
using namespace std;

class Calculator 
{
    public:
		void calculate(int num1, int num2) {
            cout<<"Addition : "<<num1+num2<<endl;
            cout<<"Substraction : "<<num1-num2<<endl;
            cout<<"Multiplication : "<<num1*num2<<endl;
            cout<<"Division : "<<num1/num2<<endl;
        }

        void calculate(int num1, int num2, char op) {
        	cout<<"Enter the operator you want to perform : ";
        	cin>>op;
            switch(op) {
                case '+':
                    cout <<"Addition:"<<num1+num2<<endl;
                    break;
                case '-':
                    cout <<"Substraction:"<<num1-num2<<endl;
                    break;
                case '*':
                    cout <<"Multiplication:"<<num1*num2<<endl;
                    break;
                case '/':
                    cout<<"Division:"<<num1/num2<<endl;
                    break;
                default:
                    cout<<"Invalid operator!!"<<endl;
            }
        }
};

int main() {
    Calculator c1;
    c1.calculate(10,5);
    c1.calculate(10,5,'*');
    return 0;
}
