#include<iostream>
#include<string.h>
using namespace std;

// Class to implement operator overloading function for concatenating the strings
class add_strings
{
    public:
        // Classes object of string
        char name[13],name1[6];
    
        // Parameterized Constructor
        add_strings(char n[],char n1[])
        {
            strcpy(this->name,n);
            strcpy(this->name1,n1);
        }

        // Overload Operator+ to concat the string
        void operator + ()
        {
            cout << "Concatenation of two strings are : " << strcat(name,name1) << endl ;
        }
};

// Driver Code
int main()
{
    // Declaring two strings
    char n[] = "Priyanka ";
    char n1[] ="Umang";

    // Declaring and initializing the class with above two strings
    add_strings a1(n,n1);

    // Call operator function
    +a1;

    return 0;
}