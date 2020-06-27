// Implementation of Selection Sort Algorithm

#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <chrono>
#include <complex>
using namespace std;

//Bubble Sort Algorithm

void bubble_sort(int a[], int n){
	int temp;

	for (int i = n; i > 0; i--){
		for (int j = 0; j < i-1; j++){
			if (a[j] > a[j+1]){

				// Swap	
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}

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

	bubble_sort(a, n);

	return 0;
}
