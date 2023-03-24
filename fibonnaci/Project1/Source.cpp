#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;


long long medium(vector<int> a) {
	size_t size = a.size();

	if (size == 0)
	{
		return 0;  // Undefined, really.
	}
	else
	{
		sort(a.begin(), a.end());
		if (size % 2 == 0)
		{
			return a[size / 2 - 1];
		}
		else
		{
			return a[size / 2];
		}
	}
}
#include <iostream>
#include <vector>
using namespace std;



vector<int> find_ta(int h, vector<int> q) {
	vector<int> tas(q.size());

	for (int i = 0; i < q.size(); i++) {

		if (q[i] == (1 << h) - 1) {
			tas[i]= - 1;
		}
		int totalnodes = pow(h, 2);
		for(int i=0;i<totalnodes;i++) 
		{
	    int left_child = i * 2 + 1;
		int right_child = i * 2 + 2;
		tas[i] = (left_child + right_child) / 2;
		}

		//int left_child = q[i] * 2 + 1;
		//int right_child = q[i] * 2 + 2;
		//tas[i] = (left_child + right_child) / 2;

		
	}
	return tas;
}

int main() {
	int h = 3;
	vector<int> q = { 1, 4, 7 };
	vector<int> tas = find_ta(h, q);

	for (int i = 0; i < tas.size(); i++) {
		cout << tas[i] << " ";
	}
	cout << endl;
	return 0;
}

vector<vector<int>> findAllSubarrays(vector<int>& nums) {
	int n = nums.size();
	vector<vector<int>> subarrays;
	int start = 0;
	int end = 0;

	for (int i = 0; i < n; i++) {
		// check if the current element is the end of a subarray
		if (i > 0 && nums[i] != nums[i - 1] + 1) {
			end = i - 1;
			subarrays.push_back(vector<int>(nums.begin() + start, nums.begin() + end + 1));
			start = i;
		}
	}

	// add the last subarray
	subarrays.push_back(vector<int>(nums.begin() + start, nums.end()));
	
	return subarrays;
}
//long long countSubarray(int N, vector<int> A, int M) {
//	// code here
//	vector<vector<int> > res = findAllSubarrays(A);
//	long long flag = 0, median;
//	for (int i = 0; i < res.size(); i++) {
//		sort(res[i].begin(), res[i].end());
//		median = medium(res[i]);
//		if (median == M) {
//			flag++;
//
//			for (int j = 0; j < res[i].size(); j++)
//				cout << res[i][j] << " ";
//			cout << endl;
//		}
//	}
//	return flag;
//
//}


//int main() {
//	vector<int> nums = { 1, 2, 3 };
//
//	vector<vector<int>> subarrays = findAllSubarrays(nums);
//
//	for (int i = 0; i < subarrays.size(); i++) {
//		for (int j = 0; j < subarrays[i].size(); j++) {
//			cout << subarrays[i][j] << " ";
//		}
//
//		cout << endl;
//	}
//	return 0;
//
//}