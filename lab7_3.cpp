#include<iostream>
using namespace std;

int adiff(int x, int y )
{
int a = x%360 ;
int b = y%360 ;
int c = a-b ;
if(c>=0) 
  {
    c=c ;
  }
  else
  {
    c = 0-c ;
  }
if(c<=180)
  {
    c=360-c ;
  }
}


int main(){
  cout << adiff(180,270);
  cout << adiff(210,45);
  cout << adiff(0,360);
  cout << adiff(10,350);
  cout << adiff(95,260);
  cout << adiff(90,-90);
  cout << adiff(1000,280);
  cout << adiff(60,244);
}
