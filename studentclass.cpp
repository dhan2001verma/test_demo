#include<iostream>
#include "constructer.cpp"
using namespace std;
int main()
{
student s1;
s1.display(); 

student s2;
s2.display();

student *s3 = new student;
s3->display();

student s4(10);
s4.display(); 

student s5(10,100);
cout<<"addres of s5"<<&s5<<endl;
s5.display();


student s6(20,100);
cout<<"address of s6"<<&s6<<endl;
delete s3;
return 0;

}
