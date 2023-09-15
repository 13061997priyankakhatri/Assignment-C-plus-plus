#include<iostream>
using namespace std;

class Line
{
    public:
        inline double mul(double p, double u)
        {
            return p*u;
        }
        inline double cube(double j)
        {
            return j*j*j;
        }
};
int main() 
{
    Line n;

    double n1,n2;

    cout << endl << "Enter number1 : " << endl ;
    cin >> n1 ;
    cout << endl << "Enter number2 : " << endl ;
    cin >> n2 ;
    cout << endl << "Multiplication value is : " << n.mul(n1,n2) << endl ;
    cout << endl << "Cube value is : " << n.cube(n2) << endl << endl ;

    return 0;
}