#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <set>
#include <cstring>
#include <ranges>
#include <algorithm>


using namespace std;



int main()
{
    int k;
    cin >> k;

    vector<int> remaining;
    while(k--)
    {
        int tmp;
        cin >> tmp;
        remaining.push_back(tmp);
    }

    if (find(remaining.begin(), remaining.end(), 9) == remaining.end())
    {
        // game already finished
        cout << -1 << endl;
    }
    else 
    {
        sort(remaining.begin(), remaining.end());
        cout << remaining[0] << endl;
    }
}