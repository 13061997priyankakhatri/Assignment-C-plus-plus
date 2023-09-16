#include<iostream>
using namespace std;

template <class T>
void sort_array(T ar[], int n)
{
    for (int p = 0 ; p < n - 1 ; p++)
    {
        for (int u = n - 1; p < u; u--)
        {
            if (ar [ u ] < ar[ u - 1 ])
            {
               swap(ar[u],ar[u-1]); 
            }        
        }       
    }   
}

// Driver Code
int main()
{
    int ar[3] = { 13, 6, 30 };
    int n = sizeof(ar) / sizeof(ar[0]);
 
    cout << endl << "Before sorted array : ";
    for (int j = 0; j < n; j++)
    {
        cout << ar[j] << " ";
    }
    
    // calls template function
    sort_array<int>(ar,n);
 
    cout << endl << endl << "After sorted array : " ;
    for (int j = 0; j < n; j++)
    {
        cout << ar[j] << " ";
    }

    cout << endl;

    return 0;
}