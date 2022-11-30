#include<iostream>
using namespace std;
int main()
{ int a;
cout<<" Enter a number"<<endl;
cin>>a;
  while(a>0)
{ 
  int p=a%10;
  cout<<p<<endl;
  a=a/10;
}
  return 0;
}