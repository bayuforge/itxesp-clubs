#include <iostream>
using namespace std;

void subzero(int so_length, bool checks);
void surfacelevel(int sl_length);

int r; // Calculate how many iteration or triangle length
int s1, s2; // first space and second space
int c; // the main triangle
int length; // triangle length val

string space = " ";

int main()
{
    cout << "Enter pascal triangle length: ";
    cin >> length;

    if (length > 2)
    {
        subzero(length, true);
    }

    else
    {
        subzero(length, false);
    }
}


void subzero(int so_length, bool checks)
{
    int i_counter = 0;

    for (r = 0; r <= so_length; r++)
    {
        for (s1 = so_length; s1 > r; s1--)
        {
            cout << space;
        }

        cout << space;

        for (c = 0; c < r; c++)
        {
            cout << 1;
            cout << space;
        }

        for (s2 = so_length; s2 > r; s2--)
        {
            cout << space;
        }

        i_counter++;
        cout << endl;
    }

    if (checks == true)
    {
        so_length = so_length - i_counter;
        surfacelevel(so_length);
    }
}


void surfacelevel(int sl_length)
{
    int row = 3; // current row value
    int cln = 1; // current collumn val

    for (r = 0; r <= sl_length; r++)
    {
        int current_val = 1;

        for (s1 = sl_length; s1 > r; s1--)
        {
            cout << space;
        }

        cout << space;
        cout << current_val;
        cout << space; 

        for (c = 0; c < r - 1; c++)
        {
            int numreator = row - cln;
            int denominator = cln + 1;
            int new_val = current_val * numreator / denominator;

            cout << new_val << space;
            cln++;
            current_val = new_val;
        }


        for (s2 = sl_length; s2 > r; s2--)
        {
            cout << space;
        }

        cout << endl;
        row++;
    }
}
