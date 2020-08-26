#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

void print(int a){
    cout<<a+1<<" ";
}
int main() {
    int arr[]={4,5,2,7,9};
    vector<int> nums{3, 4, 2, 8, 15, 267};
    int n=sizeof(arr)/sizeof(arr[0]);
    for_each(arr,arr+n,print);
    auto printx = [](int& n) { std::cout << n+1<<" "; };
    cout<<endl;
    for_each(nums.begin(), nums.end(),printx);
    return 0;
    
}
