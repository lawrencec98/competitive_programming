#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>


using namespace std;



int main()
{
    vector<char> s;

    for (int i =0;i<4;i++)
    {
        char in;
        cin >> in;
        s.push_back(in);
    }

    if (s[0] == 'A')
    {
        if (s[1] == 'D' || s[2] == 'D') cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    else if (s[1] == 'A')
    {
        if (s[0] == 'D' || s[3] == 'D') cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    else if (s[2] == 'A')
    {
        if (s[0] == 'D' || s[3] == 'D') cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    else if (s[3] == 'A')
    {
        if (s[1] == 'D' || s[2] == 'D') cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}