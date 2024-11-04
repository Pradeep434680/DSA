#include<iostream>
using namespace std;
#include<bits/stdc++.h>

// class Person
// {
//     public:
//     int age;
//     string name;

//     bool operator<(const Person &other)
//     const{
//         return age < other.age;
//     }
// };

int main()
{
    // pair<int,int>p;
    // pair<string,int>p;
    // // p = make_pair(10,20);
    // p= make_pair("pradeep",10);
    // cout<<p.first<<" "<<p.second<<endl;
    // i want to store name age and weight
    // pair<string,pair<int,int> >p;
    // p = make_pair("pradeep",make_pair(20,60));
    // cout<<"My name is "<<p.first<<"& my age is"<<p.second.first<<"& my weight is :"<<p.second.second<<endl;
    // here i want to store store 4 things
    // pair< pair<string,string>,pair<int,int> >p;
    // p = make_pair(make_pair("pradeep","varsha"),make_pair(20,18));
    // cout<<p.first.first<< " and " <<p.first.second<<" both are same "<<" and age of both are "<<p.second.first<<" and "<<p.second.second<<endl;

// LIST 
//    list<int>l;
//    l.push_back(10);
//    l.push_back(20);
//    l.push_back(30);
//    l.push_back(40);
//    l.push_front(50);
//    l.push_front(60);
//    l.push_front(70);
// //    l.sort();
// // l.assign(1,100);
// cout<<l.back()<<endl;
// cout<<l.size()<<endl;
// // l.clear();
// // for(auto it = l.begin(); it!= l.end(); it++)
// // {
// //     cout<<*it<<" ";
// // }



// SET
// set<int,greater<int> >s;
// s.insert(10);
// s.insert(10);
// s.insert(20);
// s.insert(30);
// s.insert(120);
// s.insert(201);
// s.insert(330);
// s.erase(10);
// if(s.find(220) != s.end())
// cout<<"element is present\n";
// else
// cout<<"element absent\n";
// cout<<s.count(120);
// Person p1,p2,p3;
// set<Person>s;
// p1.age=10,p2.age=20,p3.age=30;
// p1.name = "pradeep",p2.name="pradeep",p3.name="krishna";
// s.insert(p1);
// s.insert(p2);
// s.insert(p3);
// here one error will come according to which variable it will
// sort the set 

//MULTISET
// multiset<int>s;
// s.insert(10);
// s.insert(20);
// s.insert(30);
// s.insert(10);
// s.insert(40);
// s.insert(20);
// s.insert(30);
// // all sunctionality is same as set

//UNORDERED SET
// it stores the unique elements
// it stores data in unOrdered way
// it is impliment using Hashing


// unordered_set<int>s;

// s.insert(10);
// s.insert(100);
// s.insert(90);
// s.insert(10);
// s.insert(30);
// s.insert(60);
// s.insert(40);
// cout<<s.size()<<endl;
// s.begin();
// cout<<s.bucket(10);
array<int,5>arr1{{1,2,3,4,5}};
array<int,6>arr2{{6,5,4,3,2,1}};
array<string,3>arr3{{"pradeep","and","varsha"}};

cout<<"sizes of arrays are\n";
cout<<arr1.size()<<endl;
cout<<arr2.size()<<endl;
cout<<arr3.size()<<endl;

for(auto it :arr1)
cout<<it<<" ";
cout<<endl;
for(auto it :arr2)
cout<<it<<" ";
cout<<endl;
for(auto it :arr3)
cout<<it<<" ";











// for(auto it = s.begin(); it != s.end(); it++)
// {
//     cout<<*it<<" ";
// }








}
