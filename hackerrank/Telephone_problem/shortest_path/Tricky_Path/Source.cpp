#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdlib>
using namespace std;

void print(std::vector <int> const& a) {
	std::cout << "The vector elements are : ";

	for (int i = 0; i < a.size(); i++)
		std::cout << a.at(i) << ' ';
}
bool isvisited(vector<int> visited,int value) {
	auto it = find(visited.begin(), visited.end(), value);
	if (it != visited.end())
			return true;
		
	return false;
}

int min_value(int **arr, int size) {
	/*vector<int> visited(size);
	vector<int> Nonvisited(size);

	for (int i = 0; i < size; i++) {
		Nonvisited.at(i) = i;
	}*/

	bool visited = new bool[size];
	for (int i = 0; i < size; i++) {
		visited = false;
	}


	int minvalue = 0, i=0;

	while (!Nonvisited.empty()) {
		int min_v = 1000;
		int second_min=0;
		int secondmin_i=0,index;
		int idx = i;
		

		for (int j = 0; j < size; j++) {
			
			if (i!=j && arr[i][j] < min_v && !isvisited(visited,j)) {
				cout << "dfghj";
				i = j;
				/*second_min = min_v;
				index = secondmin_i;
				secondmin_i = j;

				min_v = arr[i][j];
				i = index;*/
		    }
		
		}
		auto it = find(Nonvisited.begin(), Nonvisited.end(), idx);
		if (it != Nonvisited.end())
			Nonvisited.erase(it);

		visited.push_back(idx);
		
		print(Nonvisited);

		cout << second_min<<"  "<<i<<endl;
		minvalue += second_min;
	}

	return minvalue;
}
int main() {
	int size;
	cin >> size;
	int** arr = new int* [size];
	
	for (int i = 0; i < size; i++) {
		arr[i] = new int[size];
	}

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			cin >> arr[i][j];
		}
	}

	cout<<min_value(arr, size);

}