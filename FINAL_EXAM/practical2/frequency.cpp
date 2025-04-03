#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
    string str="hello world";
    unordered_map<char,int> freq;
    for(char c:str)
    {
        if(freq.find(c)!= freq.end())
        {
            freq[c]=freq[c]+1;
        }
        else{
            freq[c]=1;
        }
    }
    for(auto pair:freq)
    {
        cout<<"'"<<pair.first<<"':"<<pair.second<<endl;
    }
    return 0;
}