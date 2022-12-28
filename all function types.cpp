#include<iostream>
using namespace std;
void fun1(); // f1
void fun2(int a); //f2
string  fun3(); //f3
string fun4(int x); //f4
int main()
{
  
    fun1(); //f1
     int x;
     cout<<"enter the number";
     cin>>x;
     fun2(x);// f2
     cout<<fun3(); // f3
	 int a;// f4
     cout<<"enter the number";
     cin>>a;
     cout<<fun4(a);
	
}
//function number 1
void fun1()
{
     int a;
     cout<<"enter the number";
     cin>>a;
             if(a%2==0)
             {
               cout<<"number is even \n"<<a;
              }
              else
                 {
                  cout<<"number is odd\n";
                 }
             
    }
	//function number 2
    void fun2(int a){
	if(a%2==0)
             {
               cout<<"number is even \n"<<a;
              }
              else
                 {
                  cout<<"number is odd\n";
                 }
                 }
                 
   //function number 3              
string fun3()
{
	  int a;
     cout<<"enter the number:";
     cin>>a;
             if(a%2==1)
             {
               return "the number is odd\n";
              }
              else
                {
                   return  "the number is even\n";
                 }
             
	

	
}
	//function number 4
string fun4(int x){
	if(x%2==0)
             {
               return "the number is even\n";
              }
              else
                 {
                  return "the number is odd";
                 }
                 }
	

