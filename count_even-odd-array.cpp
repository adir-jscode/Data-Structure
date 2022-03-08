#include <iostream>

using namespace std;

int main()
{
    int size;
    cout<<"Enter the size of the array"<<endl;
    cin>>size;
    
    int Arr[size];
    
    cout<<"Enter the elements of Array"<<endl;
    for(int i=0;i<=size-1;i++){
        cin>>Arr[i];
    }
    
    cout<<"Showing Array"<<endl;
    for(int i=0;i<=size-1;i++){
        cout<<Arr[i]<<" , ";
    }
    cout<<" ";
    
    int even=0,odd=0;
    for(int i=0;i<=size-1;i++){
        if(Arr[i]%2==0){
            even = even +1;
        }
        else{
            odd=odd+1;
        }
    }
    cout<<endl<<endl;
    cout<<"The number of even integer in this Array "<<even<<endl;
    cout<<"The number of odd integer in this Array "<<odd<<endl;

    return 0;
}
