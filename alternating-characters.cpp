//alternating-characters.cpp
//Alternating Characters
//Weekly Challenges - Week 10
//Author: derekhh

#include<iostream>
#include<string>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string str;
		cin >> str;
		int len = (int)str.size();
		int cnt = 0, ans = 0;
		for (int i = 0; i < len; i++)
		{
			if (i == 0 || str[i] == str[i - 1])
				cnt++;
		}
		cout << cnt-1 << endl;
	}
	return 0;
}
