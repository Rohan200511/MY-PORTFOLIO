#include<bits/stdc++.h>
#include<vector>
using namespace std;
void MergeSort(vector<int>&arr,int low,int high);
void Merge(vector<int>&arr,int low,int mid,int high);
void MergeSort(vector<int>&arr,int low,int high){
int mid=(low+(high-low))/2;
MergeSort(arr,low,mid);
MergeSort(arr,mid+1,high);
Merge(arr,low,mid,high);
}

void Merge(vector<int>&arr,int low,int mid,int high){
int left=low;
int right=mid+1;
vector<int>temp;
while(left<=mid && right<=high){
    if(arr[left]<=arr[right]){
        temp.push_back(arr[left]);
        left++;
    }
    else{
        temp.push_back(arr[right]);
        right++;
    }
}
while(left<=mid){
    temp.push_back(arr[left]);
    left++;
}
while(right<=high){
    temp.push_back(arr[right]);
        right++;
}
for (int i = low; i <= high; i++) {
    arr[i] = temp[i - low];
}
}

int main(){
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Array before Sorting"<<endl;
    for(int j=0;j<n;j++){
        cout<<arr[j]<<" ";
    }
    cout<<endl<<"Array after Sorting"<<endl;
    MergeSort(arr,0,n-1);
    for(int k=0;k<n;k++){
        cout<<arr[k];
    }
    return 0;
}