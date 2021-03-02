/*
    Daily Coding Problem #320 - [by Amazon]

    Given a string, find the length of the smallest window that contains every distinct character.
    Characters may appear more than once in the word.

    For example, given "jiujitsu", you should return 5, corresponding to the final five letters.

*/

#include <iostream>
#include <cstdlib>
#include <string.h>

using namespace std;

int main(void)
{
    int windowSize = 0, wStart, wEnd;
    char *word;
    char *window;
    //bool factorFound = false;

    cout<<"Enter a word: ";
    cin>>word;

    for(int i=0; i<strlen(word); i++)
    {
        window = "";
        strncat(window, word, 1);
        for(int j=i+1; j<strlen(word); j++)
        {
            if(word[i] != word[j])
            {
                wStart = i;
                windowSize++;
                strncat(window, word[j], 1);
            }
            else
            {
                wEnd = j-1;
            }
            cout<<"Window size "<<i<<": "<<windowSize<<endl;
            cout<<"Window "<<i<<": "<<window<<endl;
        }
    }

    // cout<<"Number of steps: "<<steps<<endl;

	return 0;
}
