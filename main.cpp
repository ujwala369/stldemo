#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    cout<<"v1: {";
    vector<int>v1 ={10,20,30};
    for_each(begin(v1),end(v1),[](const auto& x){cout<<x<<" ";});
    cout<<"}";
    cout<<endl;
    return 0;

}