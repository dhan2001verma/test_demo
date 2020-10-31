#include<bits/stdc++.h>
using namespace std;
int count(int n)
{if(n==0)
{return 0;
}
int smallans=count(n/10);
int lastdigit=n%10;
if(lastdigit==0)
{return smallans+1;
}
else
{return smallans;
}

}
int main()
{cout<<count(10000008);
return 0;
}
