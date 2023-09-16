#include<iostream>
using namespace std;

// Function template to swap two numbers
template <class T>
int Swap(T& T1,T& T2)
{
    T T3;
    T3 = T1;
    T1 = T2;
    T2 = T3;
    return 0;
}

// Driver code
int main()
{
    int p = 13 , u = 30 ;

    cout << "Before Swapping :  " << p << " " << u << endl ;

    // Invoking the swap()
    Swap(p,u);
    cout << "After Swapping :  " << p << " " << u << endl ;

    return 0; 
}