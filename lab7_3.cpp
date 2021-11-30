#include<iostream>

using namespace std;

int x, A, B, result;
int ab(int x){
  if(x >= 0){
    return x;
  }else{
    return -x;
  }

}
int adiff(int A, int B){
  if(ab(A) > 360){
    A = A%360;
  }else{
    A = A;
  }

  if(ab(B) > 360){
    B = B%360;
  }else{
    B = B;
  }

  result = ab(A - B);

  if(result > 180){
    return 360 - result;
  }else{
    return result;
  }
}

int main(){
  cout << adiff(180,270) << "\n";
  cout << adiff(210,45) << "\n";
  cout << adiff(0,360) << "\n";
  cout << adiff(10,350) << "\n";
  cout << adiff(95,260) << "\n";
  cout << adiff(90,-90) << "\n";
  cout << adiff(1000,280) << "\n";
  cout << adiff(60,244) << "\n";
}
