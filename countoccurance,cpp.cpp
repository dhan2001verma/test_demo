#include<bits/stdc++.h>
using namespace std;
int count(int a[],int n,int x,int i,int &ans)
{

if(i==n)
{return 0;
}
if(a[i]==x)
{
ans++;
}
return count(a,n,x,i+1,ans);
}


int main()
{

int ans=0;
int a[]={2,3,4,5,3,4,5,6,3,4,6};
count(a,11,4,0,ans);
cout<<ans;


return 0;
}
