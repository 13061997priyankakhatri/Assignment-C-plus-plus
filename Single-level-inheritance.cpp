#include<iostream>
using namespace std;

class cricketer
{

    public:
    int runs;
    float averageRuns;
    string bestPerformance;

    cricketer()
    {
        cout << endl << "This is best cricket match." << endl ;

        cout << endl << "The runs are : " << endl ;
        cin >> runs ;
        cout << endl << "The bestPerformance of cricket player is : " << endl ;
        cin >> bestPerformance ;
    }
};

class batsman : public cricketer
{

    public:

    batsman()
    {
        averageRuns = runs / 11;
        cout << endl << "Runs are : "<< runs << endl << endl << "averageRuns are : "<< averageRuns << endl << endl << "The bestPerformance of cricket player is : "<< bestPerformance << endl << endl ;
    }
};

int main()
{
    batsman obj;
    return 0;
}