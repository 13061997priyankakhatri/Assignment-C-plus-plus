#include<iostream>
using namespace std;
class calculator{
    float num1,num2;
    char oprt;
    float ans;
    public :
            calculator(float num1,float num2)
            {
            cout << "Enter number1 : " ;
            cin >> num1 ;
            cout << "Enter number2 : " ;
            cin >> num2 ;

            cout << "Enter operator from (+,-,*,/): " ;
            cin >> oprt;

            if(oprt =='+'){
                ans = num1 + num2;
                cout << "Answer = " << ans << endl;
                return;
            }
            if(oprt =='-'){
                ans = num1 - num2;
                cout << "Answer = " << ans << endl;
                return;
            }
            if(oprt =='*'){
                ans = num1 * num2;
                cout << "Answer = " << ans << endl;
                return;
            }
            if(oprt =='/'){
                ans = num1 / num2;
                cout << "Answer = " << ans << endl;
                return;
            }
            cout<<"Invalid Operator";   } };
int main(){
    int p,u;
    calculator c1(p,u);   
    return 0;
}
