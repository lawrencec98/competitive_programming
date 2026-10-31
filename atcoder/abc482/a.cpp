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
    string s;
    cin >> s;

    int count = 0;

    for (const auto& ch : s)
    {
        if (ch == 'o') count++;
    }
    
    if (count % 2 != 0) cout << "odd" << endl;
    else cout << "even" << endl;
}