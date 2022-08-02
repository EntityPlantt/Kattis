// GitHub: EntityPlantt/Kattis
#include <bits/stdc++.h>
using namespace std;
template <class Array>
size_t mergeSort(Array& arr) {
	if (is_sorted(arr.begin(), arr.end()))
		return 0;
	size_t swaps = 0;
	int center = arr.size() / 2;
	int newCenter = (arr.size() - 1) / 2;
	Array left_arr(arr.begin(), arr.begin() + center),
		right_arr(arr.begin() + center, arr.end());
	swaps += mergeSort(left_arr);
	swaps += mergeSort(right_arr);
	int pointer1 = 0, pointer2 = 0;
	Array left_arr_copy(left_arr), right_arr_copy(right_arr);
	while (pointer1 < left_arr_copy.size() && pointer2 < right_arr_copy.size()) {
		if (left_arr_copy[pointer1] >= right_arr_copy[pointer2]) {
			arr[pointer1 + pointer2] = right_arr_copy[pointer2];
			pointer2++;
		}
		else {
			arr[pointer1 + pointer2] = left_arr_copy[pointer1];
			swaps += newCenter - pointer1 + 1;
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
	cout << swaps << endl;
	return swaps;
}
int main() {
	int n;
	cin >> n;
	vector <int> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cout << mergeSort(arr);
	return 0;
}