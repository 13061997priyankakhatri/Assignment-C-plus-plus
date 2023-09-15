#include<iostream>
using namespace std;

class Students
{
    public :
    int rollNumbers;

    Students()
    {
        cout << "Roll number : " << endl ;
        cin >> rollNumbers ;
    }
};

class Test : public Students
{
    public:
    float marks1,marks2;
 
    Test() 
    {
        cout << "Enter marks of first subject : " << endl ;
        cin >> marks1 ;
        cout << "Enter marks of second subject : " << endl ;
        cin >> marks2 ;
    }
};

class Result : public Test
{
    
    float totalMarks ;

    public:

    Result()
    {
        totalMarks = marks1 + marks2 ;
        cout << "Roll number is : " << rollNumbers << endl ;
        cout << "TotalMarks is : " << totalMarks << endl ;
    }
};

int main()
{
    Result obj;
    return 0;
}