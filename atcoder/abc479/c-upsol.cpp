#include <iostream>
#include <vector>

using namespace std;

int n;
long long W;
vector<long long> a;
vector<long long> b; 

long long ans;

void rec(int i, long long suma, long long sumb)
{
    if (i == n)
    {
        ans = max(ans, suma);
        return;
    }

    rec(i+1, suma, sumb);

    if (sumb + b[i] <= W)
    {
        rec(i+1, suma += a[i], sumb += b[i]);
    }
}


int main()
{
    cin >> n >> W;

    for (int i=0;i<n;i++)
    {
        int nn;
        long long ww;
        cin >> nn >> ww;

        a.push_back(nn);
        b.push_back(ww);
    }

    rec(0,0,0);

    cout << ans << endl;
}