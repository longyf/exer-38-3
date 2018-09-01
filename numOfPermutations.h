#ifndef NUM_OF_PERMUTATIONS_H
#define NUM_OF_PERMUTATIONS_H
#include <iostream>
#include <vector>
using namespace std;
bool validPermutation(vector<int> &v1) {
	for (int i = 0; i != v1.size(); ++i) {
		for (int j = i + 1; j != v1.size(); ++j) {
			if ((i - j == v1[i] - v1[j]) || (j - i == v1[i] - v1[j])) {
				return false;
			}
		}
	}
	return true;
}

void print(vector<int> &v1) {
	for (auto iter = v1.begin(); iter != v1.end(); ++iter) {
		cout<<*iter<<" ";
	}
	cout<<endl;
}

void numOfPermutations(vector<int> &v1, vector<int>::size_type index, int &count) {
	if (index == v1.size()) {
//		print(v1);
		if (validPermutation(v1)) {
			count++;
		}
	}
	auto next = index;
	while (next != v1.size()) {
		swap(v1[index], v1[next]);
		numOfPermutations(v1, index + 1, count);
		swap(v1[index], v1[next]);
		next++;
	}
}

#endif
