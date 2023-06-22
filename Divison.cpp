#include<iostream>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n>=1900)
        {
            cout<<"Division 1"<<endl;
        }
        else if(n>=1600 && n<=1899)
        {

            cout<<"Division 2"<<endl;
        }
        else if(n>=1400&&n<=1599)
        {

            cout<<"Division 3"<<endl;
        }
        else if(n<=1399)
        {

            cout<<"Division 4"<<endl;
        }
    }


return 0;
}
// For Division 1: 1900≤rating
// For Division 2: 1600≤rating≤1899
// For Division 3: 1400≤rating≤1599
// For Division 4: rating≤1399