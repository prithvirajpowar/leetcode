#include<iostream>
using namespace std;
main(){
    int a[100],b,n,i;
    cout<<"Enter total array elements"<<endl;
    cin>>n;
    for(i=0;i<n;i++){
        cout<<"Enter element at "<<i<<endl;
        cin>>a[i];
    }
    cout<<"Enter the sum";
    cin>>b;
    for(i=0;i<n;i++){
        if(b=i+(i+1)){
            cout<<"["<<i<<","<<(i+1)<<"]";
            break;
        }
    }

}