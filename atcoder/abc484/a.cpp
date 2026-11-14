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
    int b, r;
    cin >> b >> r;

    int rows = 30;
    int cols = 30;

    rows -= b;
    cols -= r;

    cout << rows*cols << endl;
}