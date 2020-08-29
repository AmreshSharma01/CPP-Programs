#include <queue>
#include <vector>
#include <iostream>
using namespace std;
 
class Number{
    public:
    int num;
    Number(int a){
        num=a;
    }
};
//priority queue for class
class Compare{
    public:
    bool operator()(Number const& p1, Number const& p2){
        return p1.num<p2.num;
    }
};
int main(){
    priority_queue<Number, vector<Number>, Compare> q4;
    int arr[]={1,8,5,6,3,4,0,9,7,2};

    for(int i=0;i<10;i++){
        Number x1(arr[i]);
        q4.push(x1);
    }
  while (!q4.empty()) { 
        Number p = q4.top(); 
        q4.pop(); 
        cout << p.num << " "; 
    } 

    return 0;
}