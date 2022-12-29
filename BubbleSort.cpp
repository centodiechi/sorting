#include<iostream>
using namespace std;

template<typename t>
void BubbleSort(t* begin,t* end){
for(t* i=begin;i<=end;i++)
{    
    for(t* j=begin;j<end-(i-begin);j++)
    {
        if(*j > *(j+1))  swap(*j,*(j+1));
    }
} 
}

int main()
{   
    int a[] = {42,2,4,15};
    BubbleSort<int>(a,a+3);
    for(auto e: a){
        cout<<e<<" ";
    }
    return 0;
}