#include <iostream>
using namespace std;


void subzero(int so_length, bool checks)
{
    // subzero func only executes if length range 0 - 1
    // also if length > 1 if checks = True
    
    int i; // calculate how many iteration / length
    int s1, c, s2; //s1 for first spacing, s2 last, c is the main
    int column_db[so_length];
    string space = " "; // string contains space character.
    
    for (i = 0; i <= length; i++)
    {
        for (s1 = length; s1 > i; s1--)
        {
            cout << space;
        }
            
        cout << space;
        
        for (c = 0; c < i; c++)
        {
            cout << 1;
            cin >> column_db[c] = 1;
            cout << space;
        }
          
        if (sizeof(column_db) == 8) // size of an array is in bytes, 4 bytes exactly. (4 x 2 = 8)
        {
            
        }
        
        for (s2 = length; s2 > i; s2--)
        {
            cout << space;
        }
            
            
        cout << endl;
    }
    
    if (checks == true)
    {
        surfacelevel(so_length);
    }
    
    // for devs: func have to go back from surfacelevel to here
    // to pull remanining statement (below)
    cout << endl << "Iteration Complete";
}


void surfacelevel(int sl_length)
{
    // surface level func is only executed after subzero with
    // checks = True, and if length > 1.
    
    int i; // calculate how many iteration / length
    int n_sum; // calculate how many addition of n collumn
    int s1, c, s2; //s1 for first spacing, s2 last, c is the main
    
    string space = " "; // string contains space character.
}

int main(int throw_length) 
{
    int i; // calculate how many iteration / length
    int n_sum; // calculate how many addition of n collumn
    int s1, c, s2; //s1 for first spacing, s2 last, c is the main
    int length; // stores the length of triangles. input by user
    string space = " "; // string contains space character.
    
    cout << "Enter pascal length: ";
    cin >> length;
    
    if (length > 1 || throw_length > 1)
    {
        
        subzero(length, true);
    }
    
    else
    {
        subzero(length, false);
    }
}
