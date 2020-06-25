// Implementation of Linear Search Algorithm

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

		int number =0, array[50], key=0;
		cout << "Enter the no. of components:" << endl;
		cin >> number;

		cout << "Enter the array components:" << endl;		
		for (int i=0; i < number; i++)
			cin >> array[i];

		cout << "Enter the no. you want to search:" << endl;
		cin >> key;

		//Linear Search Algorithm

		int i;

		for (i=0; i < number; i++){
			if (array[i] == key){
				cout << "Element "<<key <<" found at index "<< i+1 << endl;
				break;
			}

		}
		if(i == number)
			cout << "Not Found in the given array." <<endl;

	return 0;

}
