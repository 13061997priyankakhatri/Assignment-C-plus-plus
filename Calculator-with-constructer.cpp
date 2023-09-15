#include<iostream>
using namespace std;
class Constructor
{
    char oprt;
    float ans;
    public :
            Constructor(float num1,float num2)
            {
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
int main()
{
    int p,u;

    cout << "Enter numbers : " ;
    cin >> p >> u ;

    Constructor c1(p,u); 

    return 0;
}
