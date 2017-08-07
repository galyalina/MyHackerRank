#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool check(int num){
        if(num<1 || num>100){
            return false;
        }
        return true;
}
   
int* solve(int a0, int a1, int a2, int b0, int b1, int b2){
        
        int* results = new int[2]{0};
        
        int A[] = { a0, a1, a2 };
        int B[] = { b0, b1, b2 };
        
        if(!check(a0)||!check(a1)||!check(a2)||!check(b0)||!check(b1)||!check(b2)){
            return results;
        }
        
        for(int i = 0;i<3;i++){
           A[i] = A[i]-B[i]; 
        }
        
        for(int i = 0;i<3;i++){
           if(A[i] == 0){
               continue;
           }
           if(A[i] > 0){
               ++results[0];
           }else{
               ++results[1];
           }
        }
        return results;
    }


int main() {
   int a1;
   std::cin >> a1;
   int a2;
   std::cin >> a2;
   int a3;
   std::cin >> a3;
   int b1;
   std::cin >> b1;
   int b2;
   std::cin >> b2;
   int b3;
   std::cin >> b3;
 
   int* results = solve(a1, a2, a3, b1, b2, b3);
    
   cout<<results[0]<<" "<<results[1]<<endl; 
   return 0;
}
