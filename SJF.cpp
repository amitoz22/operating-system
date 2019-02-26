#include<iostream>
using namespace std;
#include<algorithm>
int main()
{
	int p;
	cout<<"Enter the number of processes-"<<endl;
	cin>>p;
	int BT[p],CT[p],TAT[p],WT[p];
	for(int i=0;i<p;i++)
	{
		cout<<"Enter the burst time for P"<<i+1<<"=";
		cin>>BT[i];
	}
	
	sort(BT,BT+p);
	CT[0]=BT[0];
	for(int i=1;i<p;i++)
	{
		CT[i]=CT[i-1]+BT[i];
	}
	for(int i=0;i<p;i++)
	{
		TAT[i]=CT[i];
	}

	for(int i=0;i<p;i++)	//Waiting Time (WT)
	{
		WT[i]=CT[i]-BT[i];
	}
	for(int i=0;i<p;i++)
	{
		cout<<"Completion time="<<CT[i]<<endl;
	}
	for(int i=0;i<p;i++)
	{
		cout<<"Turn Around time="<<TAT[i]<<endl;
	}
	for(int i=0;i<p;i++)
	{
		cout<<"Waiting Time="<<WT[i]<<endl;
	}
}

