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

/*
1 1 1 1 1 2 1 3 1
1 1 1 2 1 1 1 1 3

1 4 1 4 2 1
1 4 1 1 4 2

1 1 3 2 4 1
1 1 2 3 4 1
*/

// NOTE: This implementation got TLE.
// NOTE: This is an incorrect approach.
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a, b;
    
    //ingest a
    for (int i = 0; i < n; i++)
    {
        int in;
        cin >> in;
        a.push_back(in);
    }
    
    // ingest b
    for (int i = 0; i < n; i++)
    {
        int in;
        cin >> in;
        b.push_back(in);
    }

    // early no if they don't have the same set of numbers.
    vector<int> sa = a, sb = b;
    sort(sa.begin(), sa.end());
    sort(sb.begin(), sb.end());

    bool isperm = (sa == sb);

    // go through a and b by matching elements.
    // first subset continues until a[i] and b[i] do not match.
    // start a new subset that ends when you a[j] == b[i]
    
    int subsets = 1;
    int ptr = 0;

    int looking_for = -1;
    while (ptr < n)
    {
        if (a[ptr] == b[ptr])
        {
            ptr++;
            continue;
        }
        else 
        {
            if (looking_for != -1)
            {
                subsets++;
                looking_for = b[ptr];
            }
            else 
            {
                if (a[ptr] == looking_for)
                {
                    subsets++;
                    looking_for = -1;
                }
                else 
                {
                    ptr++;
                    continue;
                }
            }
        }

        ptr++;
    }

    if (subsets <= 2 && isperm) cout << "Yes" << endl;
    else cout << "No" << endl;
}