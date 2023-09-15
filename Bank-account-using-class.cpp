#include<iostream>
using namespace std;

class bank
{
    string name,account_type;
    int account_number;
    double balance,dp_amount,wt_amount;

    public:

        void assign_values()
        {
            cout << "Enter name of the depositor : " << endl ;
            cin >> name;
            cout << "Enter account_number of the depositor : " << endl ;
            cin >> account_number;
            cout << "Enter account_type of the depositor : " << endl ;
            cin >> account_type;
            cout << "Enter balance of the depositor : " << endl ;
            cin >> balance;
        }

        double deposite_amount()
        {
            cout << "Enter deposite amount : " << endl ;
            cin >> dp_amount ;
            balance = balance + dp_amount ;
            return balance ;
        }

        double withdraw_amount()
        {
            cout << "Enter withdraw amount : " << endl ;
            cin >> wt_amount ;
            balance = balance - wt_amount ;
            return balance ;
        }

        void display()
        {
            cout << "Enter name of the depositor : " << name << endl ;
            cout << "Enter balance of the depositor : " << balance << endl ;
        }
};
int main()
{
    bank b1;
    b1.assign_values();
    b1.deposite_amount();
    b1.withdraw_amount();
    b1.display();
    return 0;
}