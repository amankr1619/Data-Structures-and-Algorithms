// Implementation of Insertion Sort Algorithm

#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <chrono>
#include <complex>
using namespace std;

//Insertion Sort Algorithm

void insertion_sort(int a[], int n){
	int temp;

	for (int i = 1; i < n; i++){
        int key = a[i];
        int j = i-1;
        while(j>=0 && a[j]>key){
            a[j+1] = a[j];
            j = j-1;
        }
        a[j+1] = key;
	}

	cout << "Sorted Array:"<<endl;
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";

}



int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, a[50];
	cout << "Enter the no. of components in the array:" << endl;
	cin >> n;

	cout << "Enter the components of array:"<< endl;
	for (int i=0; i<n; i++)
		cin >> a[i];

	insertion_sort(a, n);

	return 0;
}
