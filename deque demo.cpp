#include <iostream>
#include <deque> 
using namespace std;

void printKMax(int arr[], int n, int k){ 
    std::deque<int> Qi(k); 
    int i; 
    for (i = 0; i < k; ++i) { 
        while ((!Qi.empty()) && arr[i] >= arr[Qi.back()]) 
            Qi.pop_back();
			   
            Qi.push_back(i);
        
      }  
    for (; i < n; ++i) {  
        cout << arr[Qi.front()] << " ";
        while ((!Qi.empty()) && Qi.front() <= i - k) 
            Qi.pop_front();  
 
        while ((!Qi.empty()) && arr[i] >= arr[Qi.back()]) 
            Qi.pop_back(); 
 
        Qi.push_back(i); 
    } 
 
    cout << arr[Qi.front()];
    cout<<endl; 
}

/*method2
long long int max; 
for(int i=0;i<=n-k;i++)
{
       max=arr[i];

       for(int j=1;j<k;j++)
       {
           if(arr[i+j]>max)
           {
               max=arr[i+j];
           }

       }
       cout<<max<<" ";
}
    
cout<<endl;
}*/

int main(){
  
	int t;
	cin >> t;
	while(t>0) {
		int n,k;
    	cin >> n >> k;
    	int i;
    	int arr[n];
    	for(i=0;i<n;i++)
      		cin >> arr[i];
    	printKMax(arr, n, k);
    	t--;
  	}
  	return 0;
}
 

