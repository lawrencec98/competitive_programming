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

// NOTE: This gets runtime error


// vector<long long> R;
// vector<long long> C;
// long long H, W, N, Q;


// // print num pieces in rows a through b
// void process1(long long a, long long b)
// {
//     long long result = 0;

//     for (int row = a; row <= b; row++)
//     {
//         result += count(R.begin(), R.end(), row);
//     }

//     cout << result << endl;
// }


// // print num pieces in cols a through b 
// void process2(long long a, long long b)
// {
//     long long result = 0;

//     for (int col = a; col <= b; col++)
//     {
//         result += count(C.begin(), C.end(), col);
//     }

//     cout << result << endl;
// }


// int main()
// {
//     cin >> H >> W >> N >> Q;


//     for (int i = 0; i < N ; i++)
//     {
//         long long r, c;
//         cin >> r >> c;
//         R.push_back(r);
//         C.push_back(c);
//     }

//     // vector<string> queries;

//     for (int i = 0 ; i < Q; i++)
//     {
//         long long a,b,c;
//         cin >> a >> b >> c;
//         // queries.push_back(s);

//         if (a == 1)
//         {
//             process1(b, c);
//         }
//         else if (a == 2)
//         {
//             process2(b, c);
//         }
//     }
// }


int main()
{
    long long H, W, N, Q;
    cin >> H >> W >> N >> Q;

    // prefix[i] = number of pieces in rows 1..i
    vector<long long> rowPre(H + 1, 0), colPre(W + 1, 0);

    for (int i = 0; i < N; i++)
    {
        long long r, c;
        cin >> r >> c;
        rowPre[r]++;
        colPre[c]++;
    }

    for (int i = 1; i <= H; i++) rowPre[i] += rowPre[i - 1];
    for (int i = 1; i <= W; i++) colPre[i] += colPre[i - 1];

    for (int i = 0; i < Q; i++)
    {
        long long t, a, b;
        cin >> t >> a >> b;

        if (t == 1)
            cout << rowPre[b] - rowPre[a - 1] << '\n';
        else
            cout << colPre[b] - colPre[a - 1] << '\n';
    }
}