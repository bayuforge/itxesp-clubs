#include <iostream>
using namespace std;

int main() 
{
    int i;  // for every n iteration
    int a;  // creates how many spaces before dots 
    int b;  // creates n many dots
    int c;  // creates spaces after dots
    int range;  // store val for length of triangle
    
    string dots = "*";
    string space = " ";
    
    cout << "Enter triangle range: ";
    cin >> range;
    
    for (i = 0; i <= range; i++)
    {
        for (a = range; a > i; a--)
        {
            cout << space;
        }
        
        cout << space;
        
        for (b = 0; b < i; b++)
        {
            cout << dots;
            cout << space;
        }
        
        cout << space;
        
        for (c = range; c > i; c--)
        {
            cout << space;
        }
        
        cout << endl;
    }

    return 0;
}
