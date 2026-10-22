#include <iostream>
#include <string>
#include <vector>


using namespace std;



int main()
{
    int n;
    cin >> n;

    vector<char> inputs;

    for (int i = 0; i < n; i++)
    {
        char in;
        cin >> in;

        inputs.push_back(in);
    }

    int longest_streak = 0;
    int new_streak = 0;

    for (int i = 0; i < n; i++)
    {
        if (inputs[i] == 'R')
        {
            new_streak++;
        }
        else 
        {
            if (new_streak > longest_streak)
            {
                longest_streak = new_streak;
            }
            
            new_streak = 0;
        }
    }

    if (new_streak > longest_streak)
    {
        longest_streak = new_streak;
    }

    cout << longest_streak << endl;
}