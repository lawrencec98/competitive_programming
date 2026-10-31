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
    string s1, s2, s3, s4, s5;

    cin >> s1 >> s2 >> s3 >> s4 >> s5;

    vector<string> matrix;
    matrix.push_back(s1);
    matrix.push_back(s2);
    matrix.push_back(s3);
    matrix.push_back(s4);
    matrix.push_back(s5);

    int min = 255;

    // handle horizontal bingos
    for (int row = 0; row < 5; row++)
    {
        int missing = 0;
        bool bingo = true;

        for (int col = 0; col < 5; col++)
        {
            if (matrix[row][col] == '.') {
                missing++;
                bingo = false;
            }
        }

        if (bingo) {
            cout << "0" << endl;
            return 0;
        }

        if (missing < min) {
            min = missing;
        }
    }

    // handle vertical bingos
    for (int col = 0; col < 5; col++)
    {
        int missing = 0;
        bool bingo = true;

        for (int row = 0; row < 5; row++)
        {
            if (matrix[row][col] == '.') {
                missing++;
                bingo = false;
            }
        }

        if (bingo) {
            cout << "0" << endl;
            return 0;
        }

        if (missing < min) {
            min = missing;
        }
    }


    // handle diagonal bingo
    int missing = 0;
    bool bingo = true;
    for (int i = 0; i < 5; i++)
    {
        if (matrix[i][i] == '.')
        {
            missing++;
            bingo = false;

        }
    }

    if (bingo) {
            cout << "0" << endl;
            return 0;
    }

    if (missing < min)
    {
        min = missing;
    }


    cout << min << endl;
}