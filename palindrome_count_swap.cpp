#include <iostream>
#include <stdio.h>

using namespace std;

int main(void)
{
    string s ;
    cin >> s;

    cout <<"At which place you wanna replace a character :: "<<endl;
    int n ;
    cin >> n ;

    char  alphabet;
    cout <<"Enter the alphabet :: "<<endl;
    cin >> alphabet ; 

    s[n-1]  = alphabet ;

/*
TO CHECK THE NUMBER OF SWAPS REQUIRED 
*/
int size = s.size();
int count = 0 ;

for ( int i = 0 ; i<= size/2 ; i++)
{
    if (s [i] != s[size - 1])
    {
        count++ ;
    }

} 

cout << "THE LEAST NO. OF SWAPS ARE "<< count ;

return 0 ;

}