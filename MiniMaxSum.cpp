#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    vector<int> array;
    int element;
    for(int i = 0; i<5; i++){
        cin>>element;
        array.push_back(element);
    }
    
    for(int i = 0; i<5; i++){
        //cout<<array.at(i)<<" ";
    }
    
    int64_t sumTotal = 0;
    for(int i = 0; i<5; i++){
        sumTotal+=array.at(i);
    }
    
    int64_t  maxResult = sumTotal - array.at(0);
    int64_t  minResult = sumTotal - array.at(0);
    
    for(int i = 1; i<5; i++){
        
        int64_t  sum = sumTotal - array.at(i);   
        
        if(sum>maxResult){
            maxResult = sum;
            continue;
        }
        if(sum<minResult){
            minResult = sum;
            continue;
        }
    }
    
    cout<<minResult<<" "<<maxResult<<endl;
    
    return 0;
}
