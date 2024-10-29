#include<iostream>

using namespace std;

main()
{
	float a,b,c,d,max;
	cin>>a;
	cin>>b;
	cin>>c;
	//max=a>b ||a>c?a?b>a||b>c:b:c>b || c>a? c;
	max=a>=b?a>=c?a:b>=c?b:a:c;
	cout<<max;
	
}
