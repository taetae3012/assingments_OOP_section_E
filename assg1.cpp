#include<iostream>
using namespace std;
void insertionSort(int [],int);
void printArray(int [],int);

void insertionSort(int a[],int n)
{
    int i,j,key;
    for(i=1;i<n;i++){
        key=a[i];
        j=i-1;
        while(j>=0&&a[j]>key){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
}


void printArray(int a[],int n)
{
    int i;
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";

    }


}

int main(){
int arr[]={12,11,13,5,6};
int n=sizeof(arr)/sizeof(arr[0]);
insertionSort(arr,n);
printArray(arr,n);
}
