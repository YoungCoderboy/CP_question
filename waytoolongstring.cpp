#include<iostream>
#include<string>

int main()
{
	int n;
	std::cin>>n;
	while(n--)
	{
	   std::string s;
	   std::cin>>s;
	if(s.length()>10)
	{
	    std::cout<<s[0]<<(s.length()-2)<<s[s.length()-1]<<std::endl;
	}
	else
	{
	   std::cout<<s<<std::endl;
	}
}		

	return 0;
}