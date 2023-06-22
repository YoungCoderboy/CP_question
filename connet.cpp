#include<iostream>

#include<algorithm>
n  
using namespace std;


int main(){
pair<int ,int>XY[3];
for(int i=0;i<3;i++)
{
    cin>>XY[i].first;
    cin>>XY[i].second;
}
sort(XY,XY+3);
cout<<XY[0].first<<" "<<XY[0].second<<" "<<XY[0].first<<" "<<XY[1].second<<endl;
cout<<XY[0].first<<" "<<XY[1].second<<" "<<XY[2].first<<" "<<XY[1].second<<endl;
cout<<XY[2].first<<" "<<XY[1].second<<" "<<XY[2].first<<" "<<XY[2].second<<endl;

return 0;
}