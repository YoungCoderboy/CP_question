#include<iostream>
using namespace std;


int main(){
/*your code come here */
int a,p,q,r,s,t;
cin>>a;
while(a!=0)
{
 p=a/5;
 a=a%5; 

 q=a/4;
 a=a%4; 

 r=a/3;
 a=a%3;
 
 s=a/2;
 a=a%2;   
 
 t=a/1;
 a=a%1;

    
}
int mins=p+q+r+s+t;
cout<<mins<<endl;


return 0;
}