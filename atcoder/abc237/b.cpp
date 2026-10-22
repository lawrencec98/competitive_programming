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
    long H, W;
    cin >> H >> W;

    long long matrix[W][H];

    for (int row = 0; row < H; row++)
    {
        for (int col = 0; col < W; col++)
        {
            long long in;
            cin >> in;

            matrix[col][row] = in;
        }
    }


    // Transpose the matrix
    /*
    1 2 3               1 4 7 
    4 5 6       ->      2 5 8
    7 8 9               3 6 9
    */


    for (int col = 0; col < W; col++)
    {
        for (int row = 0; row < H; row++)
        {
            cout << matrix[col][row] << " ";
        }

        cout << "\n";
    }
}