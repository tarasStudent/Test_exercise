#include<iostream>
#include<vector>
#include<string>
#include<bitset>
#include<algorithm>

using namespace std;

void print_vec(vector<int> v) {
	cout << endl;
	for (int element : v)
		cout << element << " ";
	cout << endl;
}

int main() {

	vector<int> ts = { 7, -10, 13, -7, 4, -7, -10, -3, 3, -9, 6, -1, -6, 7 };
	print_vec(ts);

	vector<int> new_ts = { ts[0] };

	while (!ts.empty()) {
		ts.erase( remove( ts.begin(), ts.end(), new_ts.back()), ts.end() );
		if (!ts.empty())
			new_ts.push_back(ts[0]);
		else break;
	}

	print_vec(new_ts);

	system("pause");
	return 0;
}