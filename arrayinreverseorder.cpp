#include<iostream>
using namespace std;
int main()
{int n,i;
int a[20];
cout<<"enter the no to be reversed"<<endl;
cin>>n;
cout<<"the no are"<<endl;
for(int i=0;i<n;i++)
{cin>>a[i];
cout<<"  ";
}
cout<<"the reverse order no"<<endl;
for(int i=n-1;i>=0;i--)
{cout<<a[i]<<"  ";
}
return 0;







}
