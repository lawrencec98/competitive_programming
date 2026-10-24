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
    int a,b;
    cin >> a >> b;

    int sum = a + b;

    int digits = 0;

    while (sum > 0)
    {
        sum = sum / 10;
        digits++;
    }

    cout << digits << endl;
}