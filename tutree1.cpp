#include<iostream>
using namespace std;
int main()
{

    int i,j,spc,rows=7,k,t=1;
    spc=0;
    for(i=1;i<=rows-1;i++)
    {
         for(k=spc;k>=1;k--)
            {
              cout<<" ";
            }
	   for(j=i;j<=rows;j++)
	   
	   {
	   	if(j==7)
	   		cout<<j;
	   	else
	   		cout<<j<<" ";
	   	 
	   }
	cout<<endl;
    spc++;
    }
    spc=rows-1;
    for(i=rows;i>=1;i--)
    {
        for(k=spc;k>=1;k--)
        {
            cout<<" ";
        }
	    for(j=i;j<=rows;j++)
	    {
	    if(j==7)
	   		cout<<j;
	   	else
	   		cout<<j<<" ";
	   	 
		}
	   cout<<endl;
       spc--;
    } 
}

