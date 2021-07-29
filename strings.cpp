#include<iostream>
#include<string>
using namespace std;
int main()
{
    // string s1="abc";
    // string s2="xyz";
    // cout<<s2.compare(s1)<<endl;
    string s1="hasmitha";
    string s2;
    cout<<"enter the string:\n";
    cin>>s2;
    if(s1.compare(s2)==0)
    {
        cout<<"they're the same string!"<<endl;
    }
    else{
        cout<<"they're different strings!"<<endl;
    }
    return 0;
} 