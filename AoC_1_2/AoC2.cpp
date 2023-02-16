#include <iostream>
#include <string>
#include <fstream>
#include <array>

using namespace std;

bool insertN(int sum, array<int,3> &topThree){
    if(sum > topThree.at(0)){
        topThree.at(2) = topThree.at(1);
        topThree.at(1) = topThree.at(0);
        topThree.at(0) = sum;
    }else{
        if(sum > topThree.at(1)){
            topThree.at(2) = topThree.at(1);
            topThree.at(1) = sum;
        }else{
            if(sum > topThree.at(2)){
                topThree.at(2) = sum;
            }
        }
    }
    return true;
}

int main(){
    string inputStr;
    int inN = 0, sum = 0, max = 0;
    array<int,3> topThree = {0,0,0};

    while(getline(cin,inputStr)){
        inN = atoi(inputStr.c_str());
        if(inN == 0){
            cout << "SUM: " << sum << endl;
            insertN(sum, topThree);
            sum = 0;
        }else{
            sum += inN;
            cout << inN << endl;
        }
    }
    cout << "SUM: " << sum << endl;
    insertN(sum, topThree);

    cout << "TOP 3: " << endl;
    for(int el : topThree){
        cout << el << endl;
        max += el;
    }
    
    cout << "MAX: " << max << endl;
    return 0;
}