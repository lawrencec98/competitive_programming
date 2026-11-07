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

// NOTE : Got TLE (Time limit exceeded) for this question, could not solve in time.


void print(vector<pair<long int, long int>> results)
{
    auto max = max_element(results.begin(), results.end(), [](const pair<long int, long int>& lhs, const pair<long int, long int>& rhs){
        return lhs.second < rhs.second;
    });

    cout << max - results.begin() + 1 << endl;
}


int main()
{
    long int N, M;
    cin >> N >> M;

    vector<long int> a, b;

    // take all villagers' votes.
    for (int i = 0 ; i < M ; i++)
    {
        long int aa,bb;
        cin >> aa >> bb;

        a.push_back(aa);
        b.push_back(bb);
    }

    
    for (int i = 0 ; i < N; i++) // for each candidate withdrawing
    {
        vector<pair<long int, long int>> results(N);

        for (int j = 0; j < M; j++) // look at each villagers vote
        {
            if (a[j] == i + 1) // if their first pick has withdrawn then count their second choice
            {
                results.at(b[j] - 1).second++;
            }
            else {
                results.at(a[j] - 1).second++;
            }
        }

        print(results);
    }
}