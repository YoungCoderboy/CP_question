#include<iostream>
using namespace std;


int main(){
    int num=5;
    int *ptr;
    ptr=&num;
    int &num2=num;
    // cout<<ptr<<" "<<*ptr<<" "<<&(*ptr)<<" "<<*(&ptr)<<endl;
    // cout<<ptr<<" "<<*ptr<<" "<<&(*ptr)<<" "<<*(&ptr)<<endl;
    num2*=89;
    cout<<num2<<" "<<num<<endl;

return 0;
}