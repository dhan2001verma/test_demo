#include<iostream>
using namespace std;


int lenth(char name[20] )
{
int count =0;
for (int i=0;name[i]!='\0';i++)
{count++;
}

return count;

}




int main()
{
char name[20];
cout<<"what is your name?"<<endl;
cin.getline(name,100) ;
/*name[2]='\0'; 
name[3]='d';
name[4]='x';*/
cout<<"my name is "<<name;
cout<<"lenth: "<<lenth(name);

return 0;  
}
