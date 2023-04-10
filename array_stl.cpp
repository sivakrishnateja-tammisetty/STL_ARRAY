#include<iostream>
#include<array>
using namespace std;
int main()
{
	array<int,5>values1{11,22,33,44,55};
	array<int,5>values2{10,20,30,40,50};
	array<int ,5>::iterator it;
	cout<<values1.front()<<endl;
	cout<<values1.back()<<endl;
	for(it=values1.begin();it !=values1.end();it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;
	cout<<"array element at particular index using []:";
	cout<<values1[3]<<endl;
	cout<<"Array element at particular index using at():";
	cout<<values1.at(3)<<endl;
	cout<<"Before swap:"<<endl;
	for(it=values1.begin();it!=values1.end();it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;
	for(it=values2.begin();it!=values2.end();it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;
	values1.swap(values2);
	cout<<"After swap:"<<endl;
	for(it=values1.begin();it!=values1.end();it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;
	for(it=values2.begin();it!=values2.end();it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;
	values1.fill(1);
	for(it=values1.begin();it!=values1.end();it++)
	{
		cout<<*it<<" ";
	}


	return 0;
}
