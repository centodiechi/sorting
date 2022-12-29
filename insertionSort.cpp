#include<iostream>
using namespace std;

void insertionSort(int a[],int n){
for(int i=1;i<n;i++)
{
    int current = a[i];
    int prev  = i-1;
    while(prev>=0 and a[prev] > current){
        a[prev+1] = a[prev];
        prev--; 
    }
    a[prev+1] = current;
}
} 
int main(){
int a[] = {5,4,3,2,1};
int n = sizeof(a)/sizeof(int); 
insertionSort(a,n);
for(auto e: a){
    cout<<e<<" ";
}    
return 0;
}