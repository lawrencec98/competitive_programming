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
    long long n;
    cin >> n;
    
    long long m = (long long)1 << 31;

    if ((-m <= n) && (m > n)) 
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}