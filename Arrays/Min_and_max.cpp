#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <chrono>
#include <complex>
using namespace std;



int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, a[50];
	cout << "Enter the no. of components in the array:" << endl;
	cin >> n;

	cout << "Enter the components of array:"<<endl;
	for (int i=0; i<n; i++)
		cin >> a[i];

	//Algorithm to find the minimum and maximum value of an array

	int max = INT_MIN;
	int min = INT_MAX;

	for (int i=0; i<n; i++){
		if (a[i] > max)
			max = a[i];
		if (a[i] < min)
			min = a[i];
	}

	cout << "Minimum value of the array is "<< min << " and the maximum value is "<< max<<"."<< endl;
}
