#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int size;
	cout<<"size of array :";
	cin>>size;
	int arr[size];
	cout<<"enter the elements of array:"<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	int ele,flag=0,index;
	cout<<"enter the element to delete :";
	cin>>ele;
	for(int j=0; j<size; j++)
        {
                if(arr[j]==ele)
                {
                        flag=1;
                        index=j;
                        break;
                }
        }  
    if(flag==1)
     {
           for(int i=index;i<size-1;i++)
           {
        	    arr[i]=arr[i+1];
            }
            size--;
           for(int i=0;i<size;i++)
           {
		cout<<arr[i]<<" ";
       	}
      }
      else
  	{
	 	cout<<" element not found ";
	  }
}
