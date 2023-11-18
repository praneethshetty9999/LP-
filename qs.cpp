#include<bits/stdc++.h>
using namespace std;
int partition(vector<int>&t, int low, int high){
    int pt= rand()%(high-low)+ low;
    swap(t[pt],t[low]);
    int pivot= t[low];
    int i=low;
    int j= high;
    while(i<j){
        while(t[i]<=pivot){
            i++;
        }
        while(t[j]>pivot){
            j--;
        }
        if(i<j)swap(t[i],t[j]);
    }
    swap(t[j],t[low]);
    return j;
}
void quicksort(vector<int>&t,int low, int high){
    if(low<high){
        int p= partition(t,low,high);
        quicksort(t, low,p-1);
        quicksort(t, p+1, high);
    }
}
int main(){
    vector<int>t={12,5,2,4};
    quicksort(t,0,t.size()-1);
    for(auto c: t){
        cout<<c<<" ";
    }
}
