#include<iostream>
using namespace std;
class student{

int age;

public:
	//default constructor
	student ()
	{cout<<"constructure called"<<endl;
	}
	//parametersied constructor
	student (int r)
	{cout<<"constructor 2"<<endl;
	int roll=r;
	cout<<roll;
	}
	
	student(int r,int m)
	{
	cout<<"this"<<this<<endl;
	cout<<"consturctor 3 called"<<endl;
       roll=r;
       int marks=m;
       cout<<roll<<" "<<marks<<endl;
	}
    int roll;
    void display()
    {cout<<age<<"  "<<roll<<endl;
	}
    int getage()
    {return age;
	}
    void setage(int a)
    {age=a;
	}
	
	~student()
	{cout<<" destructure is called"<<endl;
	}
};


