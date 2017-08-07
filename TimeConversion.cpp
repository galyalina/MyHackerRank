#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string strTime;
    std::getline (std::cin, strTime);
    
    string timeFormat = strTime.substr(8,9); 
    //cout<<timeFormat<<endl;
    strTime.replace(8,9,""); 

    vector<string> timeVector;
    
    std::string delimiter = ":";
    size_t pos = 0;
    std::string token;
    
    while ((pos = strTime.find(delimiter)) != std::string::npos) {
        token = strTime.substr(0, pos);     
        strTime.erase(0, pos + delimiter.length());
        timeVector.push_back(token);
    }
    timeVector.push_back(strTime);
    
    for(int i =0;i<timeVector.size();i++){
        //cout<<timeVector.at(i)<<" "; 
    }
        
    std::string::size_type sz; 
    
    int i_dec_hour = std::stoi (timeVector.at(0),&sz);
    if(timeFormat == "PM"){    
         if(i_dec_hour == 12){
             timeVector.at(0) = "12";
         }else{       
             timeVector.at(0) = to_string(i_dec_hour+12);
         }
    }else{   
        int i_dec_min  = std::stoi (timeVector.at(1),&sz);
        int i_dec_sec  = std::stoi (timeVector.at(2),&sz);
        if(i_dec_hour == 12){
          timeVector.at(0) = "00";
        }
    }
    
     for(int i =0;i<timeVector.size();i++){
        if(timeVector.at(i).size() == 1){
            timeVector.at(i) = "0"+timeVector.at(i);
        }
        
        if( i == timeVector.size()-1){
            cout<<timeVector.at(i);
        }else{
            cout<<timeVector.at(i)<<":";
        }
    }
    
    return 0;
}
