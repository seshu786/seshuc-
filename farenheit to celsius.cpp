#include<iostream>
using namespace std;
int main()
{
	int cel,far;
	cout<<"enter the temp in farenheit:";
	cin>>far;
	cel=((far-32)*5)/9;
	cout<<"temp in celcius is:"<<cel;
	return 0;
}
