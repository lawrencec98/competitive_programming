#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>


using namespace std;

// DID NOT FINISH

// int main()
// {
//     double n, w;
//     cin >> n >> w;

//     vector<double> a;
//     vector<double> b;

//     // maximise sum-d, while keeping sum-v under w

//     for (int i = 0; i < n; i++)
//     {
//         double ina, inb;
//         cin >> ina >> inb;

//         a.push_back(ina);
//         b.push_back(inb);
//     }

//     // map<index, ratio>
//     map<int, double> ratios;

//     for (int i = 0; i < n; i++)
//     {
//         double rat = a[i] / b[i];
//         ratios.insert(make_pair(i, rat));
//     }

//     int max_index = 0;
//     int totald = 0;
//     int maxv = 0;

//     for (int j = 0 ; j < n; j++)
//     {
//         // find highest ratio
//         for (int i = 0 ; i < ratios.size(); i++)
//         {
//             cout << "ratios[i] = " << ratios.at(i) << endl;
//             cout << "ratios[max_index] = " << ratios.at(max_index) << endl;
//             if (ratios.at(i) > ratios.at(max_index))
//             {
//                 max_index = i;
//             }
//         }

//         cout << "Max index = " << max_index << endl;

//         // check if it would take v over w
//         if (maxv + b[max_index] <= w)
//         {
//             totald += a[max_index];
//             maxv += b[max_index];
//         }

//         ratios.at(max_index) = 0;
//     }

//     cout << totald << endl;
// }


// go through option one at a time
// is this option better than what i already have?
// 

int main()
{
    double n, w;
    cin >> n >> w;

    vector<double> a;
    vector<double> b;

    // maximise sum-d, while keeping sum-v under w

    for (int i = 0; i < n; i++)
    {
        double ina, inb;
        cin >> ina >> inb;

        a.push_back(ina);
        b.push_back(inb);
    }

    double maxd = 0;
    double runningd = 0;

    // for each entry
    // add its value, to one, then two , then three....
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            runningd += a[i] + a[j];
            double runningv = b[i] + b[j];
            if (runningd >= maxd && runningv <= w)
            {
                maxd = runningd;
            }
        }
    }
}