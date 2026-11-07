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

vector<pair<int, bool>> cards;


void flip(int end)
{
    int left = 0;
    int right = end - 1;

    while (left < right)
    {
        swap(cards[left], cards[right]);

        cards[left].second = !cards[left].second;
        cards[right].second = !cards[right].second;

        left++;
        right--;
    }

    if (left == right)
    {
        cards[left].second = !cards[left].second;
    }
}


void print()
{
    for (long unsigned int i  = 0; i < cards.size(); i++)
    {
        if (cards[i].second == true)
        {
            cout << cards[i].first << endl;
        }
        else {
            cout << cards[i].first * -1 << endl;
        }
    }
}


int main()
{
    int N, Q;
    cin >> N >> Q;

    for (int i = 1; i <= N; i++)
    {
        cards.push_back(pair<int,bool>(i, true)); // true is faceup
    }

    vector<int> queries;
    while(Q--)
    {
        int tmp;
        cin >> tmp;
        queries.push_back(tmp);
    }

    for (long unsigned int query = 0; query < queries.size(); query++)
    {
        int i = queries[query];

        flip(i);
    }

    print();
}