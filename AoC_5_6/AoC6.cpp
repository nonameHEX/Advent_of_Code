#include <iostream>
#include <cstring>
#include <array>
using namespace std;

int main(){
    array<string,3> inputRucks;
    bool found = false;
    int sum = 0;

    while(cin >> inputRucks.at(0) && cin >> inputRucks.at(1) && cin >> inputRucks.at(2)){
        for(int i = 0; i < inputRucks.at(0).length(); i++){
            // First rucksack inventory
            for(int j = 0; j < inputRucks.at(1).length(); j++){
                // Second rucksack inventory
                if(inputRucks.at(0).at(i) == inputRucks.at(1).at(j)){
                    for(int k = 0; k < inputRucks.at(2).length(); k++){
                        // Third rucksack inventory
                        if(!found && inputRucks.at(0).at(i) == inputRucks.at(1).at(j) && inputRucks.at(1).at(j) == inputRucks.at(2).at(k)){
                            cout << "1: " << inputRucks.at(0).at(i) << " - 2: " << inputRucks.at(1).at(j) << " - 3: "  << inputRucks.at(2).at(k) << endl;
                            if(inputRucks.at(0).at(i) >= 'a' && inputRucks.at(0).at(i) <= 'z'){
                                sum += int(inputRucks.at(0).at(i))-'a'+1;
                            }
                            if(inputRucks.at(0).at(i) >= 'A' && inputRucks.at(0).at(i) <= 'Z'){
                                sum += int(inputRucks.at(0).at(i))-'A'+27;
                            }
                            found = true;
                        }
                    }
                }
            }
        }
        found = false;
        cout << "SUM: " << sum << " | f:" << found << endl << endl;
    }
    return 0;
}

//int aa = int('a')-'a'+1;
//int AA = int('A')-'A'+27;
/*
cout << endl;
for(int x = 0; x < 3; x++){
    for(int i = 0; i < inputRucks.at(x).length()/2; i++){
        cout << inputRucks.at(x).at(i);
    }
    cout << endl;
    for(int j = (inputRucks.at(x).length()/2); j < inputRucks.at(x).length(); j++){
        cout << inputRucks.at(x).at(j);
    }
    cout << endl << endl;
}*/