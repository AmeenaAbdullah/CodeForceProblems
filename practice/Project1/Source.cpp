
#include <iostream>
using namespace std;
int mysecretkey(int key) {
	std::cout << key;
	if (key < 22) {
		mysecretkey(mysecretkey(mysecretkey(++key)));

	}
	return key;
}
void longruningfucntion(int* arr,int size) {
	int idx=0,f=0;
	for (int i = 0; i < size; i++) {
		 idx = i;
		for (int j = i + 1; j < size; j++) {
			if (arr[idx] > arr[j]) {
				idx = j;
			}
			f++;
			
		}
		
		swap(arr[i], arr[idx]);
	}
	cout << f;
}


int min_jumpss(int arr[], int s, int e) {
	int min = INT_MAX;
	for (int idx = 1; arr[s] >= idx && e >= s + idx; idx++) {
		int jumps = min_jumpss(arr, s + idx, e) + 1;
		if (min > jumps)
			min = jumps;
	}
	return min;
}

int min_jumps(int arr[], int start, int end)
{
	if (start == end)
		return 0;

	int min = INT_MAX;  // Max value of int

	for (int idx = 1; arr[start] >= idx && end>= start + idx; idx++)
	{
		int jumps = min_jumps(arr, start + idx, end) + 1;
		if (min> jumps)
			min = jumps;
	}
	return min;
}
int stepsToPalindrome(string s) {
	int steps = 0;
	for (int i = 0; i < s.length() / 2; i++) {
		int len1 = abs(s[i] - s[s.length() - i - 1]);
		if (len1 > 13)
			steps += 26 - len1;
		else
			steps += len1;
	}
	return steps;
}
int func(int num1, int num2)
{
	if (num1 % 5 == 0)
		return num1 + num2;
	return func(num1 + 1, num2 / 2);
}


void longRunningFunction(int* arr, int n) {
	int count = 0;
	for (int i = 0; i < n; i++) {
		int idx = i;
		for (int j = i + 1; j < n; j++) {
			if (arr[idx] > arr[j]) {
				idx = j;
				count++;
			}
		}
		swap(arr[i], arr[idx]);
	}
	cout << count;
}
int foo(int *arr,int size) {
	if (size == 1)
		return arr[0];


		int last = arr.pop();
	int x = foo(arr,8);

	if (x > last)
		return x;
	else
		return last;
		
}

int main() {
	

	cout<<func(67, 73);
	return 0;

}

