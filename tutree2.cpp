#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


void findAllsubstrings(string X, string Y)
{

	int m, n;
	if ((m = Y.length()) > (n = X.length()))
		return;

	for (int i = 0; i <= n - m; i++)
	{
		if (is_permutation(X.begin() + i, X.begin() + i + m, Y.begin()))
		{
			cout << "substring '" << X.substr(i, m) <<"' present at index " << i << '\n';
		}
	}
}

int main()
{
	string X;
	string Y;
	cout<<"Enter str1:";
	cin>>X;
	cout<<"Enter str2:";
	cin>>Y;
	findAllsubstrings(X, Y);

	return 0;
}
