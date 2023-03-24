#include<iostream>
#include<vector>
using namespace std;

//FIND THE MAX SUM 
int maxsum(vector<int> arr) {
    int sum=0;
	int max = -2147483645;
	for (int i = 0; i < arr.size()-2; i++) {
		sum = sum + arr[i] + arr[i + 1] + arr[i + 1];
		if (sum > max)
			max+=sum;
		if(sum<0)
			sum =0;
    }
	return max;
}

//Return the Triplet whose Sum is Maximum in an Array" 
//With Return the Triplet(consecutive) whose Sum is 
//Maximum in an Array
void triplet_MaxSum(vector<int> arr) {
	vector<int> res(3);
	int sum = 0;
	int max = -2147483645;
	int x = 0;
	for (int i = 0; i<= arr.size() - 3; i++) {   
		sum =  arr[i] + arr[i + 1] + arr[i + 2];
		if (sum > max) {
			max = sum;
			x = i;
		}
		sum = 0;
	}
	for (int k = 0; k<= 3; k++) {
		res[k] = arr[x];
		cout << res[k] << " ";
		x = x + 1;
	}
}
int main() {
	vector<int> arr = { 2, 5, 3, 1, 2 , 9 };
	vector<int> res(3);
	triplet_MaxSum(arr);
	return 0;
}