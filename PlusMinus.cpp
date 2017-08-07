#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int n;
	cin >> n;
     
    int array[n];
    
    for(int i = 0; i<n; i++){
        cin>>array[i];
    }
    
    int positive = 0;
    int negative = 0;
    int zeros    = 0;
    
    for(int i = 0; i<n; i++){
        if(array[i] == 0){
            ++zeros;
            continue;
        }
        
        if(array[i] > 0){
            ++positive;
        }else{
            ++negative;
        } 
    }
    
    cout<<(float)positive/n<<endl;
    cout<<(float)negative/n<<endl;
    cout<<(float)zeros/n<<endl;
    
    return 0;
}
