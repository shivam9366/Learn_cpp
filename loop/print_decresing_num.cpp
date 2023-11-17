#include<iostream>
using namespace std;
int main() {
  int num;
  cout<<"Enter the number to print decresing order: ";
  cin>>num;
        for(int i=num; i>=1; i--) { //1<=i
          cout<<i<<" ";
        }
}