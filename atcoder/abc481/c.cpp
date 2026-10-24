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

map<string, int> account;
int lowest_available_id = 1;


int get_id()
{
    int tmp = lowest_available_id;
    lowest_available_id++;
    return tmp;
}


void process(string s)
{
    if (account.find(s) != account.end()) // means we found an account for this pumpkin
    {
        cout << account.at(s) << endl;
    }
    else // this pumpkin does not have an account yet
    {
        account.insert(std::make_pair(s, get_id()));
        cout << account.at(s) << endl;
    }
}


int main()
{
    long q;
    cin >> q;

    for (int i=0;i<q;i++)
    {
        string s;
        cin >> s;
        process(s);
    }

}