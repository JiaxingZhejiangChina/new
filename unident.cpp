﻿#include<iostream>;
#include<cstdio>
#include<string>
#include<math.h>

using namespace std;

int main()
{
	double a, b, r;
	int k;
	cin >> a >> b;
	k = a / b;
	r = a - b * k;
	cout << r;
	return 0;


}