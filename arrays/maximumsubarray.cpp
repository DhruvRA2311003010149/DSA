#include <iostream>
using namespace std;
int main(){
    int n=5;
    int arr[]={3,-4,5,4,-1,7,-8};
    int maxSum=INT64_MIN;
    for(int st=0;st<n;st++){
         int currSum=0;
        for(int end=st;end<n;end++){  
           currSum +=arr[end];
           maxSum = max(currSum,maxSum);
        }
    
    }
    cout<<"max subarray sum = "<<maxSum<<endl;
    return 0;
}