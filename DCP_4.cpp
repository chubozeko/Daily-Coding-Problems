/*
    Daily Coding Problem #4 - [from Stripe]

    Given an array of integers, find the first missing positive integer in linear time and constant space.
    In other words, find the lowest positive integer that does not exist in the array.
    The array can contain duplicates and negative numbers as well.

    For example, the input [3, 4, -1, 1] should give 2.
                The input [1, 2, 0] should give 3.

    You can modify the input array in-place.
*/

#include <iostream>
#include <cstdlib>

using namespace std;

void bubblesort(int x[], int n);

int main(void)
{
    int arr[] = {1,2,0}; // {3,4,-1,1}
    int arrSize = sizeof(arr)/sizeof(arr[0]);
    int low = 1;

    bubblesort(arr, arrSize);

    for(int i=0; i<arrSize; i++)
    {
        if(arr[i] == low)
            low++;
    }

    cout<<"Lowest = "<<low<<endl;

    return 0;
}

void bubblesort(int x[], int n)
{
    int temp,i,j;
	for(i=0; i<n-1; i++)
	{
		for(j=0; j<n-i; j++)
		{
		    if(x[j]>x[j+1])
		    {
			temp=x[j];
			x[j]=x[j+1];
			x[j+1]=temp;
		    }
		}
	}
}
