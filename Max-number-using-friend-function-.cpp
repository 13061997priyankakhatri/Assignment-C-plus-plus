#include<iostream>
using namespace std;
class P ;
class U{
    public :
        int n;
        U(int j){
            n = j; }
        void friend maxNumber(P p1, U u1);  };
class P{
    public:
        int n;       
        P(int j){
            n = j; }
        void friend maxNumber(P p1, U u1);  };
void maxNumber(P p1, U u1){
    if(p1.n > u1.n){
        cout << endl << "N of class P is maximum number. " << p1.n << endl ;  }
    else if (p1.n < u1.n){
        cout << endl << "N of class U is maximum number. " << u1.n << endl ;  }
    else{
        cout << endl << "N of both classes are equal. " << endl ;  }  }
int main(){
    cout << endl << "Program to find maximium number of two numbers in two different classes using friend function" << endl ;
    cout << "--------------------------------------------------------------------------------------" << endl ;
    int n ; 
    cout << endl << "Enter number for class P : ";
    cin >> n;
    P p1 ( n );
    cout << endl <<"Enter number for class U : ";
    cin >> n;
    U u1 ( n );
    maxNumber ( p1 , u1 );
    cout << endl ;
    return 0;  }