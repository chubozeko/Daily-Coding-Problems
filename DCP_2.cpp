/*
    Daily Coding Problem #2 - [from Uber]

    Given an array of integers, return a new array such that
    each element at index i of the new array is the product of all the numbers in the original array
    except the one at i.

    For example, if our input was [1, 2, 3, 4, 5], the expected output would be [120, 60, 40, 30, 24].
            If our input was [3, 2, 1], the expected output would be [2, 3, 6].

    Follow-up: what if you can't use division?
*/

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main(void)
{
    int prod;
    int inputArr[] = {1,2,3,4,5};
    int arrSize = sizeof(inputArr)/sizeof(inputArr[0]);
    int newArr[arrSize];

    /* 1. With Division */
    prod = 1;
    cout<<" 1. With Division :"<<endl;
    for(int j=0; j<arrSize; j++)
    {
        prod *= inputArr[j];
    }
    for(int i=0; i<arrSize; i++)
    {
        newArr[i] = prod / inputArr[i];
        cout<<newArr[i]<<" ";
    }
    cout<<endl;

    /* 2. Without Division */
    cout<<" 2. Without Division :"<<endl;
    for(int i=0; i<arrSize; i++)
    {
        prod = 1;
        for(int j=0; j<arrSize; j++)
        {
            if(j != i)
                prod *= inputArr[j];
        }
        newArr[i] = prod;
        cout<<newArr[i]<<" ";
    }
    cout<<endl;

	return 0;
}
