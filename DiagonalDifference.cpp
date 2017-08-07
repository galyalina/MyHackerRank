#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
	cin >> n;
     
    int matrix[n][n];
    
    for(int i = 0; i<n*n; i++){
        cin>>matrix[(int)i/n][i%n];
    }
    
    for(int i = 0; i<n; i++){
         for(int j = 0; j<n; j++){
             //cout<<matrix[i][j]<<" ";
         }
        //cout<<endl;
    }
    
    int sumLR = 0;
    int sumRL = 0;

    for(int i = 0; i<n; i++){
       sumLR+=matrix[i][i];
       sumRL+=matrix[i][(n-1)-i]; 
    }
    
    int result = abs(sumLR - sumRL);
    cout<<result;
    return 0;
}
