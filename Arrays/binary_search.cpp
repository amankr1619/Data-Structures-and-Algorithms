// Basic implementation of Binary Search in Sorted array

#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <chrono>
#include <complex>
using namespace std;

//Binary Search Implementation

int binary_search(int a[], int n, int key){

	int start = 0, end = n-1;
	
	
	while (start <= end){
		int mid = (start + end)/2;

		if(a[mid] == key)
			return mid;

		else if (a[mid] > key)
			end = mid -1;

		else
			start = mid + 1;

	}
	return -1;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, a[50], key;
	cout << "Enter the no. of components in the array:" << endl;
	cin >> n;

	cout << "Enter the components of array:"<< endl;
	for (int i=0; i<n; i++)
		cin >> a[i];

	cout << "Enter the value you want to search:"<< endl;
	cin >> key;

	int value = binary_search(a , n, key);
	if (value == -1)
		cout << "Not Found in the given array"<< endl;
	else
		cout << "The given value "<< key <<" is found at "<< value + 1<< "th position."<< endl;
}
