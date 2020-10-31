#include<iostream>
using namespace std;
class student{
public:
student(int a,int b)
{
  int age=a;
  int mark=b;
  
  cout<<"age is"<<age<<"  "<<"marks is "<<mark<<endl;
}


};
int main()
{
student s1(36,199);
student s2(s1);

return 0;

}
