#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int trap_Water(vector<int> arr, int s) {
	vector<int> leftheight(s);
	vector<int> rightheight(s);
	vector<int> trap_water;

	int water_r = 0;
	leftheight.at(0) = arr.at(0);
	rightheight.at(s - 1) = arr.at(s - 1);
	for (int i = 1; i < s; i++) {
		leftheight.at(i)=max(leftheight[i - 1], arr[i]);

	}
	for (int i = s- 2; i > 0; i--) {
		rightheight.at(i) = max(arr[i], rightheight[i + 1]);
	}

	for (int i = 0; i < s; i++) {
		int minvalues = leftheight[i] < rightheight[i] ? leftheight[i] : rightheight[i];

		int minvalue = minvalues - arr.at(i);
		
		if (minvalue == 0) {
			trap_water.push_back(water_r);
			water_r = 0;
		}
		else if(minvalue>0) {
			water_r += minvalue;
		}
	}
	return *max_element(trap_water.begin(), trap_water.end());
}
int main() {
	int n;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	cout<<trap_Water(v, n);
}