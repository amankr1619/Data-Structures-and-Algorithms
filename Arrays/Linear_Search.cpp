// Implementation of Linear Search Algorithm

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;

int array[N];
int number;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

		int key;
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
