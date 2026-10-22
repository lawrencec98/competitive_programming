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


bool off_by_one(string a, string b)
{
    if (a.size() != b.size()) return false;

    int count = 0;
    for (size_t i = 0; i < a.size(); i++)
        if (a[i] != b[i]) count++;

    return count == 1;
}


int main()
{
    int n, m;
    cin >> n >> m;

    vector<pair<string,int>> s;
    vector<string> t;

    for (int i=0;i<n;i++)
    {
        string in;
        cin >> in;
        s.push_back(pair<string,int>(in, 0));
    }


    for (int i=0;i<m;i++)
    {
        string in;
        cin >> in;
        t.push_back(in);
    }

    vector<pair<string, int>>::iterator it;

    for (int i=0;i<t.size();i++)
    {
        // it = s.find(t[i]);
        string target = t[i];
        it = find_if(s.begin(), s.end(), [target](const pair<string,int>& p) {
            return p.first == target;
        });

        if (it != s.end()) // if there is a name that matches the ballot
        {
            it->second++;
            continue;
        }
        else {
            int matches = 0;
            vector<pair<string, int>>::iterator match = s.end();
            for (auto cand = s.begin(); cand != s.end(); cand++)
            {
                if (off_by_one(cand->first, t[i]))
                {
                    matches++;
                    match = cand;
                }
            }

            if (matches == 1) match->second++;
            matches = 0;
        }
        
    }

    // Print results
    for (const auto& it : s)
    {
        cout << it.second << endl;
    }
}