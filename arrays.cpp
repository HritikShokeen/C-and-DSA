#include <iostream>
using namespace std;



void linearsearch(int arr[],int n){
    int copy[]={};
    for (int i=0;i<n;i++){
        copy[i]=arr[n-1-i];




        

    }
    for(int j=0;j<n;j++){
        cout<<copy[j]<<" ";
    }
    



}
int main(){

    //define the array
    int arr[]={1,2,34,56,23,78,90};

    int n=sizeof(arr)/sizeof(int);

    linearsearch(arr,n);
    


    return 0;


}