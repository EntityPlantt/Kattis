// GitHub: EntityPlantt/Kattis
#include <bits/stdc++.h>
using namespace std;
#define debug(code) cout << code << '\n'
template <class Array>
void mergeSort(Array& arr) {
	if (arr.size() < 2)
		return;
	int center = arr.size() / 2;
	Array left_arr(arr.begin(), arr.begin() + center),
		right_arr(arr.begin() + center, arr.end());
	mergeSort(left_arr);
	mergeSort(right_arr);
	int pointer1 = 0, pointer2 = 0;
	Array left_arr_copy(left_arr), right_arr_copy(right_arr);
	while (pointer1 < left_arr_copy.size() && pointer2 < right_arr_copy.size()) {
		if (left_arr_copy[pointer1] >= right_arr_copy[pointer2]) {
			arr[pointer1 + pointer2] = right_arr_copy[pointer2];
			pointer2++;
		}
		else {
			arr[pointer1 + pointer2] = left_arr_copy[pointer1];
			pointer1++;
		}
	}
	while (pointer1 < left_arr_copy.size()) {
		arr[pointer1 + pointer2] = left_arr_copy[pointer1];
		pointer1++;
	}
	while (pointer2 < right_arr_copy.size()) {
		arr[pointer1 + pointer2] = right_arr_copy[pointer2];
		pointer2++;
	}
}
int main() {
	int n;
	cin >> n;
	vector <int> arr(n);
	for (int &x : arr)
		cin >> x;
	mergeSort(arr);
	for (int &x : arr)
		cout << x << ' ';
	return 0;
}