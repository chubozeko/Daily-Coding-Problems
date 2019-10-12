/*
    Daily Coding Problem #47 - [by Facebook]

    Given an array of numbers which represent stock prices in chronological order,
    write a function that calculates the maximum profit from buying and selling stock once.

    For example, given [9, 11, 8, 5, 7, 10], the maximum profit is 5, since you could buy the stock at 5 and sell it at 10.
*/

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main(void)
{
    int stocks[] = {9, 11, 8, 5, 7, 10};
    int arrSize = sizeof(stocks)/sizeof(stocks[0]);
    int temp, max_profit;

    max_profit = stocks[1] - stocks[0];

    for(int i=0; i<arrSize; i++)
    {
        for(int j=i+1; j<arrSize; j++)
        {
            temp = stocks[j] - stocks[i];
            if( temp >= max_profit )
                max_profit = temp;
        }
    }

    cout<<"Maximum Profit from Stocks: "<<max_profit<<endl;

	return 0;
}
