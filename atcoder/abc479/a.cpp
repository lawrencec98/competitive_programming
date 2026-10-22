#include <iostream>
#include <string>
#include <vector>


using namespace std;



int main()
{
    int n;
    std::cin >> n;

    std::vector<int> inputs;
    for (int i = 0; i < n; i++)
    {
        int in;
        cin >> in;
        inputs.push_back(in);
    }

    int sum = 0;

    for (int i = 0; i < n; i+=2)
    {
        sum += inputs[i];
    }

    std::cout << sum << std::endl;
}