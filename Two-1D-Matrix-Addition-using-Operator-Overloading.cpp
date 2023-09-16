#include<iostream>
using namespace std;

class Number
{
    private :
        int number1,number2;
    public:
        Number(int p = 0,int u = 0)
        {
            number1 = p ;
            number2 = u ;
        }
        Number operator + (Number const& c1)
        {
            Number answer;
            answer.number1 = number1 + c1.number1 ;
            answer.number2 = number2 + c1.number2 ;
            return answer;
        }
        void print()
        {
            cout << number1 << "i + " << number2 << "j" << endl ;
        }
};

int main()
{
    Number n1(6,13),n2(13,6);
    Number n3 = n1 + n2 ;
    n3.print();

    return 0;
}