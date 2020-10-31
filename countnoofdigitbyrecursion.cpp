 #include<bits/stdc++.h>
 using namespace std;
 int count(int n)
 {
 if(n==0)
 {return 0; 
 }
 int smallno=count(n/10);
 return smallno+1;
 
 }
 int main()
 {cout<<count(78546);
 return 0;
 }
