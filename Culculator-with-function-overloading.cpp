#include<iostream>
using namespace std;

class P
{
    public:
        void add(int p,int u)
        {
            cout << endl << "This is add function with two argument " << endl ;
            cout << "Addition of p and u is : " << p + u << endl << endl ;
        }
        void sub(int p,double u)
        {
            cout << "This is get_n function with two argument"<< endl ;
            cout << "Subtraction of p and u is : " << p - u << endl << endl ;
        }
        void mul(double p,int u)
        {
            cout << "This is get_j function with two argument " << endl ;
            cout << "Multiplication of p and u is : " << p * u << endl << endl ;
        }
        void div(double p,double u)
        {
            cout << "This is get_p function with two argument "<< endl ;
            cout << "Division of p and u is : " << p / u << endl << endl ;
        }
};

int main()
{
    P p1;
    p1.add(13,6);
    p1.sub(13,6.01);
    p1.mul(13.01,6);
    p1.div(13.01,6.01);

    return 0;
}