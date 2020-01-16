#include <bits/stdc++.h>
using namespace std;

void printPermutation(string str, string output)
{
	if(str.size() == 0)
	{
		cout << output << endl;
		return;
	}

	for(int i = 0 ; i < str.size() ; i++)
	{
		string sub = str.substr(0, i) + str.substr(i + 1);
		printPermutation(sub, output + str[i]);

	}

}

int main()
{
	string str, output = "";
	cout << "Enter a string: ";
	cin >> str;
	printPermutation(str, output);
	return 0;
}