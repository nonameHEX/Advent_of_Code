#include <iostream>
#include <cstring>
using namespace std;

int main(){
    //int aa = int('a')-'a'+1;
    //int AA = int('A')-'A'+27;
    string inputRuck = "";
    bool found = false;
    int sum = 0;

    while(cin >> inputRuck){

        cout << inputRuck << endl;
        for(int i = 0; i < inputRuck.length()/2; i++){
            cout << inputRuck.at(i);
        }
        cout << endl;
        for(int j = (inputRuck.length()/2); j < inputRuck.length(); j++){
            cout << inputRuck.at(j);
        }
        cout << endl << endl;

        for(int i = 0; i < inputRuck.length()/2; i++){
            for(int j = (inputRuck.length()/2); j < inputRuck.length(); j++){
                if(!found && inputRuck.at(i) == inputRuck.at(j)){
                    if(inputRuck.at(i) >= 'a' && inputRuck.at(i) <= 'z') {
                        cout << "1: " << inputRuck.at(i) << " - 2: " << inputRuck.at(j)  << endl;
                        sum += int(inputRuck.at(i))-'a'+1;
                    }
                    if(inputRuck.at(i) >= 'A' && inputRuck.at(i) <= 'Z') {
                        cout << "1: " << inputRuck.at(i) << " - 2: " << inputRuck.at(j)  << endl;
                        sum += int(inputRuck.at(i))-'A'+27;
                    }
                    found = true;
                }
            }
        }
        found = false;
        cout << "SUM: " << sum << " | f:" << found << endl << endl;
    }
    return 0;
}