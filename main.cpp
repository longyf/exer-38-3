#include "numOfPermutations.h"
#include <vector>
#include <iostream>
using namespace std;

int main() {
	vector<int> v1 = {0, 1, 2, 3, 4, 5, 6, 7};
	int count = 0;
	numOfPermutations(v1, 0, count);
	cout<<"The result is "<<count<<endl;
	return 0;
}
