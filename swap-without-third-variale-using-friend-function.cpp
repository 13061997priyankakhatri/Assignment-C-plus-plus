#include<iostream>
using namespace std;

class Swap
{
    int p , u ;
    public :
        Swap(int p,int u)
        {
            this-> p = p ;
            this-> u = u ; 
        }

        friend void swap(Swap&);
};

void swap(Swap& s1)
{
    cout << "Before swapping : " << s1.p << " " << s1.u << endl ;

    s1.p = s1.p + s1.u;
    s1.u = s1.p - s1.u;
    s1.p = s1.p - s1.u;

    cout << "After swapping : " << s1.p << " " << s1.u << endl ;
}

int main()
{
    Swap s1(30,13);
    swap(s1);

    return 0;
}