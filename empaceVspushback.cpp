// C++ code to demonstrate difference between 
// emplace_back and insert_back 
#include<bits/stdc++.h> 
using namespace std; 
	
int main() 
{ 
	// declaring priority queue 
	vector<pair<char, int>> vect; 
		
	// using emplace() to insert pair in-place 
	vect.emplace_back('a', 24); 
		
	// using push_back() to insert 
	vect.push_back(make_pair('b', 25));	 
		
	// printing the vector 
	for (int i=0; i<vect.size(); i++) 
		cout << vect[i].first << " " << vect[i].second 
			<< endl; 

	return 0; 
} 
