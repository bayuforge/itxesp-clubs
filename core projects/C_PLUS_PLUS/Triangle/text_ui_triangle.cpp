#include <iostream>
using namespace std;

void triangle();
void downward_triangle();
void right_triangle();
void staircase();
void loading_message();
void welcome_page(string username);

int i;
int s1, s2;
int c;
int length;
int numerator, denominator;
int choice;

string space = " ";
int dots = 1;

string username;


int main() 
{
    cout << "Enter name: ";
    cin >> username;
    
    welcome_page(username);
}


void welcome_page(string username)
{
    cout << endl << "Welcome Home " << username << "!";
    cout << endl << "How can I assist you today: ";
    cout << endl <<"1. Create a triangle";
    cout << endl << "2. Create a downward triangle";
    cout << endl << "3. Create a right triangle";
    cout << endl << "4. Create a staircase" << endl << "> ";
    cin >> choice;
    
    
    switch(choice)
    {
        case 1:
        {
            //loading_message();
            triangle();
            welcome_page(username);
            break;
        }
        
        case 2:
        {
            //loading_message();
            downward_triangle();
            welcome_page(username);
            break;
        }
        
        case 3:
        {
            //loading_message();
            break;
        }
        
        case 4:
        {
            //loading_message();
            break;
        }
        
        case 0:
        {
            cout << endl << "Redirecting...";
            welcome_page(username);
        }
        
        default:
        {
            cout << endl << "Please enter a number from 1 - 4, to begin.";
            cout << endl << "Rebooting system...";
            main();
        }
    }
}


void triangle()
{
    int length;
    
    cout << endl << "Enter triangle length: ";
    cin >> length;
    
    for (i = 0; i <= length; i++)
    {
        for (s1 = length; s1 > i; s1--)
        {
            cout << space;
        }
        
        cout << space;
        
        for (c = 0; c < i; c++)
        {
            cout << dots;
            cout << space;
        }
        
        cout << space;
        
        for (s2 = length; s2 > i; s2--)
        {
            cout << space;
        }
        
        cout << endl;
    }
}

//possible fix for merging this to just triangle func with 
//little adjusment on the startpos!
void downward_triangle()
{
    int length;
    
    cout << endl << "Enter triangle length: ";
    cin >> length;
    
    cout << endl;
    
    for (i = 0; i <= length; i++)
    {
        for (s1 = 0; s1 < i; s1++)
        {
            cout << space;
        }
        
        cout << space;
        
        for (c = length; c > i; c--)
        {
            cout << dots;
            cout << space;
        }
        
        cout << space;
        
        for (s2 = 0; s2 < i; s2++)
        {
            cout << space;
        }
        
        cout << endl;
    }
}


void right_triangle()
{
    
}


void staircase()
{
    
}
