#include<iostream>
#include<cctype>
#include<algorithm>
#include<string>

int main()
{
std::string f,s;
std::cin>>f>>s;
std::transform(f.begin(),f.end(),f.begin(),::tolower);
std::transform(s.begin(),s.end(),s.begin(),::tolower);

if(f.compare(s)==0)
{
std::cout<<0<<std::endl;
}
else if(f.compare(s)>0)
{
std::cout<<1<<std::endl;
}
else
{
std::cout<<-1<<std::endl;
}



return 0;
}