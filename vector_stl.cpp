#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<string>languages1{"C","C++","Java"};
	vector<string>languages2{"HTML","CSS","Javascript"};
	vector<string>::iterator it=languages1.begin();
	cout<<"Emplace function used to add new element just before specified position:"<<endl;
	languages1.emplace(it,"COBAL");
	for(auto &X:languages1)
	{
		cout<<X<<" ";
	}
	cout<<endl;
	cout<<"Erase() is used to erase  particular element"<<endl;
	languages1.erase(it);
	for(auto &x:languages1)
	{
		cout<<x<<" ";
	}

   

	cout<<"Size of languages1 :"<<languages1.size()<<endl;
	cout<<languages1.front()<<endl;
	cout<<languages1.back()<<endl;
	cout<<"Index:"<<languages1.at(1)<<endl;
	for(auto &x:languages1)
	{
		cout<<x<<" ";
	}
	cout<<endl;
	languages1.push_back("GoLang");
	languages1.push_back("Python");
	languages1.pop_back();
	for(const auto &x:languages1)
	{
		cout<<x<<" ";
	}
	cout<<endl;
	cout<<"Before swap:"<<endl;

	for(auto &x:languages1)
	{
		cout<<x<<" ";
	}
	cout<<endl;
	for(auto &x:languages2)
	{
		cout<<x<<" ";
	}
	cout<<endl;
//	languages1.swap(languages2);
	cout<<"After swap:"<<endl;
	for(auto &x:languages1)
	{
		cout<<x<<" ";
	}
	cout<<endl;
	for(auto &x:languages2)
	{
		cout<<x<<" ";
	}
	cout<<endl;
	cout<<"Vector is empty or not:";
	cout<<languages1.empty()<<endl;
	cout<<"Printing array elements using iterator:"<<endl;
	for(it=languages1.begin();it !=languages1.end();it++)
	{
		cout<<*it<<" ";
	}
	cout<<"Insert an element at particular position using insert():"<<endl;
	languages1.insert(languages1.begin(),2,"COBAL");
	for(auto &x:languages1)
	{
		cout<<x<<" ";
	}
	cout<<endl;
	cout<<"Reverse iterator:";
	vector<string>::reverse_iterator ritr=languages2.rbegin();
	for(ritr;ritr!=languages2.rend();ritr++)
	{
		cout<<*ritr<<" ";
	}

       cout<<endl;

	return 0;
}
