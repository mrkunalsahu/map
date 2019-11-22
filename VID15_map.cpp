#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
map<string,int> ages;//This works same as dictionary as in python means that key and its value shit
ages["Mike"]=40;
ages["Sachin"]=10;
ages["Shubh"]=16;
ages["Mini"]=100;
//Inserting the data in the map

ages.insert(make_pair("Krishna",10000));
map<string,int>::iterator it;

if(ages.find("Sachin")!=ages.end())
{
	cout<<"Found Sachin";
}
else
cout<<"\nKey not Found ";

cout<<endl;
for(it=ages.begin();it!=ages.end();++it)
{
cout<<it->first<<" : "<<it->second;
cout<<endl;
}


//Another way of iterating
for(it=ages.begin();it!=ages.end();++it)
{
	pair<string,int> age=* it;

cout<<age.first<<" : "<<age.second;
cout<<endl;
}


} 