#include<iostream>
using namespace std;
int main() {
  int num;
  cout<<"Enter how many numbers to print: "<<endl;
  cin>>num;

    for(int i=1; i<=num; i++) {
        if(i % 4 == 0) {
          cout<<i<<endl;
        }
        else {

        }
    }
}