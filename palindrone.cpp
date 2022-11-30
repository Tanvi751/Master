#include<iostream>
using namespace std;
int main()
{
  int a,rem,reverse=0,temp;
  cout<<"enter the number"<<endl;
  cin>>a;
  temp=a;
  while(a!=0)
  { 
    rem=a%10;
    reverse=reverse*10+rem; 
    a=a/10;   
  }
  if(temp==reverse)
  { 
    cout<<"Is Palindrone"<<endl;
  }
  else
  {
    cout<<"Not Palindrone"<<endl;
  }
  return 0;
}