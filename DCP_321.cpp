/*
    Daily Coding Problem #321 - [by PagerDuty]

    Given a positive integer N, find the smallest number of steps it will take to reach 1.

    There are two kinds of permitted steps:
    - You may decrement N to N - 1.
    - If a * b = N, you may decrement N to the larger of a and b.

    For example, given 100, you can reach 1 in five steps with the following route: 100 -> 10 -> 9 -> 3 -> 2 -> 1.

    *NOTE: This version does not find the smallest number of steps => use Binary Trees next time
*/

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main(void)
{
    int steps = 0;
    int N;
    bool factorFound = false;

    cout<<"Enter value for N: ";
    cin>>N;
    cout<<"\n"<<N<<"-> ";

    while (N > 1)
    {
        for(int i=N-1; !factorFound; i--)
        {
            if(N % i == 0)
            {
                if(i == 1)
                {
                    N--;
                }
                else
                {
                    int a = N/i;
                    if(a > i && i != 1)
                        N = a;
                    else
                        N = i;
                }
                steps++;
                factorFound = true;
            }
        }

        if(!factorFound)
            N--;

        if(N == 1)
            cout<<N<<endl;
        else
            cout<<N<<"-> ";
        factorFound = false;
    }

    cout<<"Number of steps: "<<steps<<endl;

	return 0;
}
