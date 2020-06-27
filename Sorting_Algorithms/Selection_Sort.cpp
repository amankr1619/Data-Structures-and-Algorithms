// Implementation of Selection Sort Algorithm

#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <chrono>
#include <complex>
using namespace std;

// Selection Sort Algorithm

void selection_sort(int a[], int n){
	int temp;

	for (int i = 0; i < n-1; i++){
		int min = i;
		for (int j = i+1; j < n; j++)
			if (a[j] < a[min])
				min = j;

		// Swap
		temp = a[min];
		a[min] = a[i];
		a[i] = temp;
	}
	
	cout << "Sorted Array:"<<endl;
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
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

	selection_sort(a, n);

	return 0;
}
