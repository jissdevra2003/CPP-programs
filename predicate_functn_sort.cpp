#include<iostream>
#include<forward_list>
using namespace std;
int myComparator(int a,int b)   //predicate
{
    cout<<"My comparator"<<a<<","<<b<<endl;
    return a>b;
}

int main()
{
    forward_list<int> list;
    forward_list<int>::iterator i=list.before_begin();
    list.insert_after(i,21);
    list.insert_after(i,212);
    list.insert_after(i,11);
    list.insert_after(i,54);
    list.insert_after(i,91);
    list.insert_after(i,65);
    list.insert_after(i,36);

    cout<<"Sorting list"<<endl;
    list.sort(myComparator);
    for(i=list.begin();i!=list.end();++i) cout<<*i<<endl;
    cout<<"List sorted"<<endl;
    return 0;

}