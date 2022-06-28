#include<iostream>;
#include<cstdio>
#include<string>
#include<math.h>

using namespace std;

int main()
{
	string s, s1;
	int n;
	cin >> n;
	s = to_string(n);
	s1 = s.substr(2, 1) + s.substr(1, 1) + s.substr(0, 1);
	cout << s1;
	return 0;


}