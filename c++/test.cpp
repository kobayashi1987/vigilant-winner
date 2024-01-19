#include <iostream>
#include <string>
#include <cmath>
using namespace std;



class myclass
{
public:

int num;

myclass (int x);
};

myclass::myclass (int x)

{
  num = x;
  cout<<"This is NUM: "<<num<<" ."<<endl;
  
  
}


int main() {

  myclass object001(5);
  cout<<endl;
  object001.num = 6;
  cout<<object001.num<<endl;
 
  return 0;
}