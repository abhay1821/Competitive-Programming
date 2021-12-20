
#include <bits/stdc++.h>
using namespace std;

int firstRepeating(int ar[], int n)
{
	// Your code here
	unordered_map<int, int> m;
	for (int i = 0; i < n; i++)
	{
		if (m.find(ar[i]) == m.end())
		{
			m[ar[i]] = i;
		}
		else
		{
			return ar[i];
		}
	}
	return -1;
}

int main()
{
	int n;
	cin >> n;
	int ar[n];
	for (int i = 0; i < n; i++)
	{
		cin >> ar[i];
	}
	cout << firstRepeating(ar, n);
	return 0;
}

//first rrepeating element in an array
