#include<bits/stdc++.h>
using namespace std;
int sum(int a[],int n)
{if(n==0)return 0;

return a[0]+sum(a+1,n-1);
}
int sum1(int a[],int n)
{

if(n==0)return 0;
return a[n-1]+sum1(a,n-1);

}
int sum2(int a[],int n,int i)
{
if(n==0) return 0;
return a[i]+sum2(a,n,i+1);

}
int main()
{int a[]={1,2,3,4,5};
cout<<sum2(a,5,0)<<endl;
}
