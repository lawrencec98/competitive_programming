#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <algorithm>


using namespace std;


int main()
{
    int n, v;
    vector<long> w;
    long answer = 0;

    cin >> n >> v;

    for (int i=0;i<n;i++)
    {
        long in;
        cin >> in;
        w.push_back(in);
    }


    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            for (int k = j+1; k < n; k++)
            {
                if (i + j + k + 3 <= v)
                {
                    answer = max(answer, w[i] + w[j] + w[k]);
                }
            }
        }
    }

    cout << answer << endl;
}