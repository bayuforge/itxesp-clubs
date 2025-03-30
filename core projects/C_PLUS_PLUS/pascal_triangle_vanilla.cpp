#include <iostream>
using namespace std;

/* PASCAL EQUATION
    new_val = (current_val * numerator) / denominator

    when: numerator = row - cln
          denominator = cln + 1
          set -> current_val = new_val for after compute pascal equation
*\

int i; // count for n iteration
int s1, s2; // count for n space string before and after c
int c; // c is main content, the numbers
int length; // count for the length of the triangle input by users

int row = 0;  // check for row pos for every n iteration
int cln;  // check for collumn pos for every n iteration
int current_value, new_value;  // check current value for pascal to work
int numerator, denominator; // part of computing pascal equation

string space = " ";  // space character

int main() 
{
    cout << "Enter pascal length: ";
    cin >> length;
    
    for (i = 0; i <= length; i++)
    {
        current_value = 1;
        cln = 0;
        
        for (s1 = length; s1 > i; s1--)
        {
            cout << space;
        }
        
        cout << space << 1 << space;
        
        for (c = 0; c < i; c++)
        {
            numerator = row - cln;
            denominator = cln + 1;
            new_value = (current_value * numerator) / denominator;
            
            cout << new_value << space;
            cln++;
            current_value = new_value;
               
        }
        
        for (s2 = length; s2 > i; s2--)
        {
            cout << space; 
        }
        
        cout << endl;
        
        row++;
    }

    return 0;
}
