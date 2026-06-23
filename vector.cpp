#include<iostream>
#include<vector>
// #include<algorithm>
using namespace std;
int main()
{
    // create vector,declare
    vector<int>v;
    vector<int>v1(5,1);
    // sizw and capacity
    cout<<"Size of v:"<<v.size()<<endl;
    cout<<"Capacity of v:"<<v.capacity()<<endl;
    v.push_back(2);
    v.push_back(3);
    v.push_back(10);
    cout<<"Size of v:"<<v.size()<<endl;
    cout<<"capacity of v:"<<v.capacity()<<endl;
    // upadate value
    v[1]=5;
    cout<<"Size of v1:"<<v1.size()<<endl;
    cout<<"capacity of v1:"<<v1.capacity()<<endl;
    v1.push_back(8);
    cout<<"Size of v1:"<<v1.size()<<endl;
    cout<<"capacity of v1:"<<v1.capacity()<<endl;
    // delete vlaue from vector
    vector<int>vnew;
    vnew.push_back(4);
    vnew.push_back(41);
    vnew.push_back(14);
    vnew.push_back(42);
    vnew.push_back(84);
    vnew.pop_back(); 
    cout<<"Size of vnew:"<<vnew.size()<<endl;
    cout<<"Capacity of vnew:"<<vnew.capacity()<<endl;
    vnew.erase(vnew.begin()+1);
    cout<<"Size of vnew:"<<vnew.size()<<endl;
    cout<<"Capacity of vnew:"<<vnew.capacity()<<endl;
    for(int i=0;i<vnew.size();i++)
    cout<<vnew[i]<<" ";
    vnew.insert(vnew.begin()+1,50);
    cout<<endl;
    
    vnew[1]=37;
    for(int i=0;i<vnew.size();i++)
    cout<<vnew[i]<<" ";
    cout<<endl;
    vnew.clear();    //remove all the element
    cout<<"Size of vnew:"<<vnew.size()<<endl;
    cout<<"Capacity of vnew:"<<vnew.capacity()<<endl;
    


}

