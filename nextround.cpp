#include<iostream>

int main()
{
	int n,k,flag=0;
	std::cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++)
	{
		std::cin>>a[i];
		
	}
	int pla=a[k-1];
	for(int i=0;i<n;i++)
	{
	      if(a[0]==0)
	      {
		flag=0;
	 	break;
	      }
	      if(a[i]>=pla && a[i]!=0)
	      {
		flag++;
	      }	
	}
	std::cout<<flag<<std::endl;

return 0;
}