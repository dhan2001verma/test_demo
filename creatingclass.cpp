#include<iostream>
using namespace std;
class student{

              private:
            	int mark=20;






 
             public:

               int age;
               int roll;
               
               
            
            
		    
					
					int getmark()
            	{
				
			    cout<<"marks:"<<mark<<endl;
				}
				
				int setmark()
			{
				if(mark<33)
				{cout<<"fail"<<endl;
				}
				else
				{
				return mark;
		        }
		    }
          
          
          
          
         
        
};
int main()
{
student s1;    //statically 
student s2;
student s3,s4,s5;

s1.age=24;
s1.roll=100;

cout<<s1.age<<endl;
cout<<s1.roll<<endl;
cout<<s1.getmark()<<endl;
cout<<s1.setmark()<<endl;
student *s6= new student; //dynamically
 
s6->age=34;
s6->roll=123;

cout<<s6->age<<endl;
cout<<s6->roll<<endl;
return 0;
}
