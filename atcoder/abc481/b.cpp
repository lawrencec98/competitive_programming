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
    int n, k;
    cin >> n >> k;

    vector<int> a;

    for (int i =0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        a.push_back(tmp);
    }


    int result = 0;

    for (int i = 0 ; i < n; i++)
    {
        int starting_point = a[i];
        
        if (starting_point < k)
        {
            if (a[i+1] > k && i != n-1)
            {
                result++;
            }
            else if (a[i+1] == k && i != n-1)
            {
                result++;
                i++;
            }
            else if (a[i+1] < k)
            {
                continue;
            }
        }
        else if (starting_point > k)
        {
            if (a[i+1] < k && i != n-1)
            {
                result++;
            }
            else if (a[i+1] == k && i != n-1)
            {
                result++;
                i++;
            }
            else if (a[i+1] > k && i != n-1)
            {
                continue;
            }
        }
        else if (starting_point == k)
        {
            if ((a[i+1] != k || a[i-1] != k) && i != n-1)
            {
                result++;
            }
            else
            {
                continue;   
            }
        }
        else {
            cout << "something bad hapenned here" << endl;
        }
    }

    cout << result << endl;
}