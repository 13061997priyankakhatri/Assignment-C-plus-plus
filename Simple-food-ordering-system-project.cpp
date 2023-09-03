#include<iostream>
using namespace std;
int main()
{
    int i = 4 , choice , price , tprice = 0 , morder ,b ;
    string name[50];

    cout << "------------------------ Order Fast Food ------------------------" << endl ;

	cout << endl << "Please Enter your name : " << endl ;
    cin >> name[50] ;
    cout << "Hello " << name[50] << endl;

    for(int a = 0 ; a < i ; a++)
    {

        cout << "What would you like to order ?" << endl ;

        cout << endl <<"-------------------- Menu of the Program ----------------------" << endl ;
        
        cout << "Enter 1) Pizza " << endl ;
        cout << "Enter 2) Burger " << endl ;
        cout << "Enter 3) Dosa " << endl ;
        cout << "Enter 4) Idli " << endl ;

        cout << endl << endl << "Please Enter your choice : " << endl ;
        cin >> choice;

        if (choice == 1)
        {
            int qty;

            cout << endl << "You have selected pizza" << endl ;

            cout << endl << "1.Italian Pizza Rs.120" << endl;
            
            cout << endl << "2.Garlic Pizza Rs.240" << endl;

            cout << endl << "Please Enter which pizza you would like to have ? : ( 1 , 2 ) " << endl ;
            cin >> b ;

            if(b == 1)
            {
                cout << "You have selected italian pizza" << endl;

                cout << endl << "Enter the qty of pizza : " << endl ;
                cin >> qty ;

                price = qty * 120;
                cout << endl << "Price is : " << price << endl ;

                tprice += price;
                cout << endl << "Total price is : " << tprice << endl ;  
            }
            if(b == 2)
            {
                cout << "You have selected garlic pizza" << endl;

                cout << endl << "Enter the qty of pizza : " << endl ;
                cin >> qty ;

                price = qty * 240;
                cout << endl << "Price is : " << price << endl ;

                tprice += price;
                cout << endl << "Total price is : " << tprice << endl ;  
            }          
        }

        if (choice == 2)
        {
            int qty;

            cout << endl << "You have selected burger" << endl ;

            cout << endl << "1.Italian Burger Rs.120" << endl;
        
            cout << endl << "2.Garlic Burger Rs.240" << endl;
            
            cout << endl << "Please Enter which burger you would like to have ? : ( 1 , 2 ) " << endl ;
            cin >> b;

            if(b == 1)
            {
                cout << "You have selected italian burger" << endl;

                cout << endl << "Enter the qty of burger : " << endl ;
                cin >> qty ;

                price = qty * 120;
                cout << endl << "Price is : " << price << endl ;

                tprice += price;
                cout << endl << "Total price is : " << tprice << endl ;  
            }
            if(b == 2)
            {
                cout << "You have selected garlic burger" << endl;

                cout << endl << "Enter the qty of burger : " << endl ;
                cin >> qty ;

                price = qty * 240;
                cout << endl << "Price is : " << price << endl ;

                tprice += price;
                cout << endl << "Total price is : " << tprice << endl ;  
            }

            cout << endl << "Enter the qty of burger : " << endl ;
            cin >> qty ;

            price = qty * 100;
            cout << endl << "Price is : " << price << endl ;

            tprice += price;
            cout << endl << "Total price is : " << tprice << endl ;
        }

        if (choice == 3)
        {
            int qty;

            cout << endl << "You have selected dosa" << endl ;

            cout << endl << "1.Masala Dosa Rs.120" << endl;
        
            cout << endl << "2.Spring Dosa Rs.240" << endl;

            cout << endl << "Please Enter which dosa you would like to have ? : ( 1 , 2 )" << endl ;
            cin >> b;

            if(b == 1)
            {
                cout << "You have selected italian dosa" << endl;

                cout << endl << "Enter the qty of dosa : " << endl ;
                cin >> qty ;

                price = qty * 120;
                cout << endl << "Price is : " << price << endl ;

                tprice += price;
                cout << endl << "Total price is : " << tprice << endl ;  
            }
            if(b == 2)
            {
                cout << "You have selected garlic dosa" << endl;

                cout << endl << "Enter the qty of dosa : " << endl ;
                cin >> qty ;

                price = qty * 240;
                cout << endl << "Price is : " << price << endl ;

                tprice += price;
                cout << endl << "Total price is : " << tprice << endl ;  
            }

            cout << endl << "Enter the qty of dosa : " << endl ;
            cin >> qty ;

            price = qty * 120;
            cout << endl << "Price is : " << price << endl ;

            tprice += price;
            cout << endl << "Total price is : " << tprice << endl ;
        }

        if (choice == 4)
        {
            int qty;

            cout << endl << "You have selected idli" << endl ;

            cout << endl << "1.One plate Idli Rs.120" << endl;
        
            cout << endl << "2.Two plate Idli Rs.240" << endl;

            cout << endl << "Please Enter which idli you would like to have ? : ( 1 , 2 )" << endl ;
            cin >> b;

            if(b == 1)
            {
                cout << "You have selected italian idli" << endl;

                cout << endl << "Enter the qty of idlir : " << endl ;
                cin >> qty ;

                price = qty * 120;
                cout << endl << "Price is : " << price << endl ;

                tprice += price;
                cout << endl << "Total price is : " << tprice << endl ;  
            }
            if(b == 2)
            {
                cout << "You have selected garlic idli" << endl;

                cout << endl << "Enter the qty of idli : " << endl ;
                cin >> qty ;

                price = qty * 240;
                cout << endl << "Price is : " << price << endl ;

                tprice += price;
                cout << endl << "Total price is : " << tprice << endl ;  
            }

            cout << endl << "Enter the qty of idli : " << endl ;
            cin >> qty ;

            price = qty * 50;
            cout << endl << "Price is : " << price << endl ;

            tprice += price;
            cout << endl << "Total price is : " << tprice << endl ;
        }

        cout << endl << "Would you like to order anything else ? (If yes press 1 else press 0)" << endl ;
        cin >> morder ;
        
        if (morder == 1)
        {
            i++;
        }
        else
        {
            break;
        }
    }



    cout << endl << "-------------------------- Your Order --------------------------" << endl ;
    
    cout << endl << "Total bill amount is : " << tprice << endl;

    cout << endl << "Your order will be delivered in 40 minutes" << endl ;
    
    cout << endl << "Thank you For Ordering From JNPU Fast Food" << endl ;

    return 0;
}