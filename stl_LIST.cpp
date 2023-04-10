#include<iostream>
#include<list>
using namespace std;
int main()
{
	list<int>integers{1,7,7,3,9,5,1,7};
	list<int>evens{2,4,6,8,10};
	list<int>::iterator itr;
	integers.insert(integers.begin(),2,0);
	integers.push_front(-1);
	integers.push_front(-2);
	integers.push_back(6);
	integers.push_back(7);
	integers.pop_front();
	integers.pop_front();
	integers.pop_front();
	integers.pop_front();
	integers.pop_back();
	integers.pop_back();
	
	evens.resize(3);
	for(auto &x:evens)
	{
		cout<<x<<" ";
	}
	cout<<endl;
	
	evens.resize(7);
	for(auto &x:evens)
	{
		cout<<x<<" ";
	}

	
	cout<<"unique() removing consceuctive duplicate elements from a list :"<<endl;
	integers.unique();
	for(auto &x:integers)
	{
		cout<<x<<" ";
	}


	cout<<"sorting will automatically done in ascending order:"<<endl;
	integers.sort();
	for(auto &x:integers)
	{
		cout<<x<<" ";
	}
	
	cout<<"Merging in ascending order:"<<endl;
	integers.merge(evens);
	for(auto &l:integers)
	{
		cout<<l<<" ";
	}
	
	for(auto &x:integers)
	{
		cout<<x<<" ";
	}
	cout<<"List size is :"<<integers.size()<<endl;
	cout<<"List is empty or not :"<<integers.empty()<<endl;
	cout<<"First element is :"<<integers.front()<<endl;
	cout<<"Last element is :"<<integers.back()<<endl;
	cout<<"Reversing evens :"<<endl;
	evens.reverse();
	for(auto &z:evens)
	{
		cout<<z<<" ";
	}
	
	integers.swap(evens);
	cout<<"Swapping two lists(integers & evens) :"<<endl;
	for(auto &x:integers)
	{
		cout<<x<<" ";
	}
	cout<<endl;
	for(auto &y:evens)
	{
		cout<<y<<" ";
	}

	return 0;
}
