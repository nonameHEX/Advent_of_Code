#include <iostream>
#include <array>
#include <cstring>
using namespace std;

int main(){
    array<string,3> enemyA = {"A","B","C"};         //A = 0 ROCK, B = 1 PAPER, C = 2 SCISSORS
    array<string,3> meA = {"X","Y","Z"};            //X = 0 ROCK, Y = 1 PAPER, Z = 2 SCISSORS
    string enemyIn = "";
    string meIn = "";

    int indexE = -1, indexM = -1, sum = 0;
    while(cin >> enemyIn && cin >> meIn){

        for(int i = 0; i < 3; i++){
            if(enemyIn == enemyA.at(i)) indexE = i;
            if(meIn == meA.at(i)) indexM = i;
        }

        if(indexM == 0) sum+=1;
        else if(indexM == 1) sum+=2;
        else if(indexM == 2) sum+=3;

        if(indexE == indexM) sum+=3;
        else if((indexE == 0 && indexM == 1) || (indexE == 1 && indexM == 2) || (indexE == 2 && indexM == 0)) sum +=6;

        cout << "E:" << enemyIn << " " << indexE << " -- M:" << meIn << " " << indexM << endl;

        cout << "SUM: " << sum << endl;
    }

    return 0;
}