#include <iostream>
using namespace std;

int main(){
    int nums[]={5,15,21,1,-15,-24};
    int size=6;
    int smallest = INT16_MAX;
    for(int i =0;i<size;i++){
      smallest = min(nums[i],smallest);
    }
    cout<<"smallest ="<<smallest<<endl;
    return 0;
}