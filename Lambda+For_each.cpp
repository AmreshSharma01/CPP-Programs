#include<vector>
#include <algorithm>
#include <iostream>
using namespace std;
 
int main()
{
    std::vector<int> nums{3, 4, 2, 8, 15, 267};

 //lambda expression
    auto print = [](const int& n) { std::cout << " " << n; };
 
    cout << "before:";
    for_each(nums.begin(), nums.end(), print);
    cout << '\n';
 
    for_each(nums.begin(), nums.end(), [](int &n){ n++; });
 
    cout << "after: ";
    for_each(nums.begin(), nums.end(), print);
    cout << '\n';
    return 0;
}