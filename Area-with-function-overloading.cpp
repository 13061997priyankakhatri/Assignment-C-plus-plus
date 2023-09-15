#include<iostream>
using namespace std;

class P
{
    public:
        void Rectengle(int l,int w)
        {
            cout << endl << "This is rectengle function with two argument " << endl ;
            cout << "Area of rectengle is : " << l * w << endl << endl ;
        }
        void Triangle(int l,double w)
        {
            cout << "This is triangle function with two argument"<< endl ;
            cout << "Area of triangle is : " << 0.5*l*w << endl << endl ;
        }
        void Circle(int r)
        {
            cout << "This is circle function with one argument " << endl ;
            cout << "Area of circle is : " << 3.14*r*r << endl << endl ;
        }
};

int main()
{
    P p1;
    p1.Rectengle(13,6);
    p1.Triangle(13,6.01);
    p1.Circle(6);

    return 0;
}