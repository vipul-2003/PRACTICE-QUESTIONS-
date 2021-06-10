#include <iostream>
#include <string.h>
#include <vector>
#include <stdio.h>
#define N 100 // To define the constraints or N = 100

using namespace std;

int main()
{
    vector<int> nums;

    int n;
    cout << "ENTER THE NUMBER (n) :: " << endl; // To get the number of test cases
    cin >> n;

    while (n % 2 != 0) //If user input the testing in odd number then unable to make pairs so reprompt user to input for number of test cases
    {
        cout << "PLEASE MAKE SURE TO ENTER THE ELEMENTS IN PAIRS " << endl;
        cout << "ENTER THE NUMBER (n) :: " << endl;
        cin >> n;
    }

    int element;
    cout << "ENTER THE ELEMENTS IN PAIRS :: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> element;
        nums.push_back(element); // Pushback the number of elements in vector 
    }

    int nums_size = nums.size(); //  To get the size of vector

    vector<int> solution_string; 

    for (int i = 0; i < nums_size; i += 2)
    {
        for (int j = 0; j < nums[i]; j++)
        {
            solution_string.push_back(nums[i + 1]);
        }
    }

    int size = solution_string.size();

    cout << "SOLUTION CUM DECIPHER TEXT " << endl; // To print the decoded text in a row

    for (int k = 0; k != size; k++)
    {
        cout << solution_string[k] << " ";
    }

    return 0;
}
/* MADE BY VIPUL KUMAR SINGH */