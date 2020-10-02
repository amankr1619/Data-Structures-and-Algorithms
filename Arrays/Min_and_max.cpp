#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
int a[N];
int n;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cout << "Enter the no. of components in the array:" << endl;
	cin >> n;

	cout << "Enter the components of array:"<<endl;
	for (int i=0; i<n; i++)
		cin >> a[i];

	//Algorithm to find the minimum and maximum value of an array

	int maxx = INT_MIN;
	int minn = INT_MAX;

	for (int i=0; i<n; i++){
		maxx = max(maxx, a[i]);
		minn = min(minn, a[i]);
	}

	cout << "Minimum value of the array is "<< minn << " and the maximum value is "<< maxx <<"."<< endl;
}
