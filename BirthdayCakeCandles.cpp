#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
  int numOfCandels;  
  cin>>numOfCandels;  
    
  vector<int> candels;
  int candle;
  for(int i = 0; i<numOfCandels; i++){
      cin>>candle;
      candels.push_back(candle);
  }
    
  for(int i = 0; i<numOfCandels; i++){
      //cout<<candels.at(i)<<" ";
  }
    
  int maxHeights = *max_element(candels.begin(), candels.end());  
  //cout<<maxHeights<<" ";
    
  int countCandles;  
  for(int i = 0; i<candels.size();i++){
      if(candels.at(i) == maxHeights){
          ++countCandles;
      }
  }  
   
  cout<<countCandles;
  return 0;
}
