#include <iostream>
using namespace std;
int main()
{
  int n;
  int fact = 1;
  cout << "enter a number ";
  cin >> n;
  while (n > 0)
  {                  // 4  3  2  1
    fact = fact * n; //(1) 1*4 =4  (2) 4*3 =12 , (3) 12*2 =24  (4) 24 *1 =24 ans
    n = n - 1;       // 4-1 =3    (2) 3-1 =2    (3) 2-1 =1
  };
  cout << fact;
}


// Using function 
// #include<iostream>
// using namespace std;
// void factorial(int n){
//   int f=1;
//   for(int i=1;i<=n;i++){
//     f*=i;
//     cout<<f<<endl;
//   }
// }
// int main(){
//   factorial(5);
// }

