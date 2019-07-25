/*
    Daily Coding Problem #1 - [by Google]

    Given a list of numbers and a number k, return whether any two numbers from the list add up to k.

    For example, given [10, 15, 3, 7] and k of 17, return true since 10 + 7 is 17.

    Bonus: Can you do this in one pass?
*/

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main(void)
{
    bool isSum = false;
    int nList[] = {10, 15, 3, 7};
    int arrSize = sizeof(nList)/sizeof(nList[0]);
    int k;

    cout<<"Enter the value of K: "<<endl;
    cin>>k;

    for(int i=0; i<arrSize; i++)
    {
        for(int j=i+1; j<arrSize; j++)
        {
            if(nList[i] + nList[j] == k)
                isSum = true;
        }
    }

    if(isSum)
        cout<<"K IS the sum of two numbers in the list."<<endl;
    else
        cout<<"K is NOT the sum of two numbers in the list."<<endl;

	return 0;
}
