#include<iostream>
using namespace std;
int main()
{
	int a[10]={3,10,6,9,19,15,21,1,2,12};
	int temp,i,u;
	for(i=0;i<10;i++){
	 for(u=i;u<10;u++){
	  if(a[i]>a[u+1]){
	   temp=a[i];
	   a[i]=a[u+1];
	   a[u+1]=temp;}}}
	 for(i=1;i<10;i++)
	  cout<<a[i]<<endl;
	   }
