#include<iostream>
using namespace std;
int main()
{
  int n,count=0;
  cout<<"Enter a value:";
  cin>>n;
  for(int i=1;i<=n;i++);
{
  if(n%1==0)
  {
    count ++;
  }
}
  cout<<count;
  return 0;
}
