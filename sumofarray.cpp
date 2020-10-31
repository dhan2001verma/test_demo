#include<iostream>
using namespace std;
int main(){
	int n;
	int a[20];
	int sum=0;
	cout<<"enter the no to be added"<<endl;
	cin>>n;
   

    for(int i=0;i<n;i++)
    {
	cout<<"enter the no"<<endl;
	cin>>a[i];
	}
    cout<<endl; 
    for(int i=0;i<n;i++)
    {sum=sum+a[i];
	}
    cout<<"the sum is"<<sum;
    
    
    
    return 0;













}
