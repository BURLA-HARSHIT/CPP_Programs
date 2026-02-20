#include<iostream>
#include<climits>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int
	a[n],max_v=INT_MIN,min_v=INT_MAX;
	for(int i=0;i<n;++i)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;++i)
	{
		if(a[i]>max_v)
		max_v=a[i];
		if(a[i]<min_v)
		min_v=a[i];
	}
	cout<<max_v<<" "<<min_v;
	return 0;
}
