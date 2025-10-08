#include <iostream>
using namespace std;

int sum(double a,double b){

    double s=a+b;
    return s;
}

int minofTwo(int a,int b){
  if(a<b){
    return a;
  }else{
    return b;
  }
}
int main(){
  cout<< " min = "<<minofTwo(5,3)<<endl;

    return 0;
}