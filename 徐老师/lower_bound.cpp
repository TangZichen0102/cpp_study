#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool ignore_case(char a, char b) {
	return(tolower(a) == tolower(b));
}

int main(void) {
	vector<char> v = {'A', 'b', 'C', 'd', 'E'};
	auto it = lower_bound(v.begin(), v.end(), 'C') ;
	
	cout << it- v.begin() <<endl;
	cout << "First element which is greater than \'C\' is " << *it << endl;
	
	it = lower_bound(v.begin(), v.end(), 'C', ignore_case);
	
	cout << "First element which is greater than \'C\' is " << *it << endl;
	
	it = lower_bound(v.begin(), v.end(), 'z', ignore_case);
	
	cout << "All elements are less than \'z\'." << endl;
	
	return 0;
}
