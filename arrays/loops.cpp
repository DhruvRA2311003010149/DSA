#include <iostream>
using namespace std;

int main(){
    // int marks[5]={99,100,54,36,88};
    // int size=5;
    // for(int i =0;i<size;i++){
    //     cout<<marks[i]<<endl;
    // }

    int size=5;
    int marks[size];
    for(int i=0;i<size;i++ ){
        cin>>marks[i];
    }
    for(int i =0;i<size;i++){
        cout<<marks[i]<<endl;
    }
    return 0;
}