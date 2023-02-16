#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(){
    string inputStr;
    int inN = 0, sum = 0, max = 0;
    while(getline(cin,inputStr)){
        inN = atoi(inputStr.c_str());
        if(inN == 0){
            cout << "SUM: " << sum << endl;
            if(sum > max) max = sum;
            sum = 0;
        }else{
            sum += inN;
            cout << inN << endl;
        }
    }
    cout << "SUM: " << sum << endl;
    cout << "MAX: " << max << endl;
    return 0;
}