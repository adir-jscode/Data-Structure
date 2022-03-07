#include <iostream>

using namespace std;

int main()
{
    
    int A[5] = {2,4,5,6,7};
    int B[] = {1,2,3,4,5,5,5,5};
    
    //intiger takes 4 bytes
    cout<<"Sizeof A "<<sizeof(A)<<endl;
    cout<<"sizeof B "<<sizeof(B)<<endl;
    
    //Print an Array
    for(int i=0;i<5;i++){
        cout<<A[i]<<endl;
    }
    
    //print using for each
    cout<<"Using for each loop"<<endl;
    for(int x:B){
        cout<<x<<endl;
    }
    
    //take input from user
    int size;
    cout<<"Enter the size of the Array";
    cin>>size;
    
    int Arr[size];
    cout<<"Please Enter the element of an array ";
    
    for(int i=0;i<=size-1;i++){
        cin>>Arr[i];
    }
    
    cout<<"Array in normal order : ";
    for(int i=0;i<=size-1;i++){
        cout<<Arr[i]<<","<<endl;
    }
    
    cout<<"Array in reverse order ";
    for(int i=size-1; i>=0;i--){
        cout<<Arr[i]<<",";
    }

    return 0;
}
