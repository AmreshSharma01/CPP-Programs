// Cpp program to demonstrate 
// generalized lambda expressions 
//   lambda function syntax  
                // [ capture clause ] (parameters) -> return-type  
                // {   
                //    definition of method   ;
                // };
#include <iostream> 
#include <string> 
#include <vector> 
#include <algorithm> 

using namespace std; 

// Utility Function to print the elements of a collection 
// template<typename T>
// void printElements(vector<T> const& C) 
// { 

// 	for (auto e : C) 
// 		cout << e << " "; 

// 	cout << endl; 
// } 
template<typename Container>
void printElements(Container const& C) 
{ 

	for (auto e : C) 
		cout << e << " "; 

	cout << endl; 
} 
int main() 
{ 
    //Initialize vectors of different data types
    vector<int> vi = { 1, 4, 2, 1, 6, 62, 636 }; 
    vector<double> vd = { 4.62, 161.3, 62.26, 13.4, 235.5 }; 
    vector<string> vs = { "Tom", "Harry", "Ram", "Shyam" }; 
    int arr[]={4,6,8,0,3};

	// Declare a generalized lambda and store it in sum and greater 
	auto sum = [](auto a, auto b) { 
		return a + b; 
	}; 
    auto greater = [](auto a, auto b) -> bool { 
        return a > b; 
    };  
	cout << sum(1, 6) << endl; 
	cout << sum(1.0, 5.6) << endl; 
	cout << sum(string("HI"), string("-aks")) << endl; 


  
    // Sort integers ,doubles,string
    sort(vi.begin(), vi.end(), greater);  
    sort(vd.begin(), vd.end(), greater); 
    sort(vs.begin(), vs.end(), greater); 
  
    printElements(vi); 
    printElements(vd); 
    printElements(vs);
    printElements(arr);

	return 0; 
} 
