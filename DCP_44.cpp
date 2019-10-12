/*
    Daily Coding Problem #44 - [by Google]

    Given an array, count the number of inversions it has, assuming each element is distinct.

    Inversion: if A[i] > A[j] and i < j (smaller element comes after a larger element)

    For example, A = [2, 4, 1, 3, 5] has 3 inversions
                 A = [5, 4, 3, 2, 1] has 10 inversions
                 A = [1, 2, 3, 4, 5] has 0 inversions

    Bonus: Do this faster than O(n^2) time
*/

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main(void)
{
    int A[] = {2, 4, 1, 3, 5};
    int arrSize = sizeof(A)/sizeof(A[0]);
    int inversions = 0;

    for(int i=0; i<arrSize; i++)
    {
        for(int j=i+1; j<arrSize; j++)
        {
            if( A[i] > A[j] )
                inversions++;
        }
    }

    cout<<"Total inversions for A: "<<inversions<<endl;

	return 0;
}
