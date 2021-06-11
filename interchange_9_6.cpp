#include <iostream>
#include <string.h>
#include <stdio.h>
#include <vector>

using namespace std;

int main()
{
    vector<int> num; //To take the number for input
    int n;

    cout << "Enter the number of test cases :: " << endl;
    cin >> n;
    int element;

    for (int i = 0; i < n; i++) // Taking number of inputs from user
    {
        cout << "Enter the " << i + 1 << " element --> ";
        cin >> element;
        num.push_back(element);
        cout << endl;
    }

    int temp = 0;

    int newstring[n]; // For the solution array

    for (int i = 0; i < n; i++)
    {
        string s = to_string(num[i]); //Conversion of int to string for further manipulation
        int n = s.size();

        for (int i = 0; i < n; i++)
        {

            if (s[i] == '6')
            {
                s[i] = '9';
                break;
            }
        }
        newstring[i] = (stoi(s)); //Undo from string to integer
    }

    cout << "AFTER INTERCHANGE " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "The " << i + 1 << " element --> ";
        cout << newstring[i] << endl;
    }

    return 0;
}
/* MADE BY VIPUL KUMAR SINGH 
   B TECH ( ECE )
*/