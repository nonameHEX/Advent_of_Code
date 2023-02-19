#include <iostream>
#include <array>
#include <cstring>
using namespace std;

int main(){
    array<string,3> enemyA = {"A","B","C"};         //A = 0 ROCK, B = 1 PAPER, C = 2 SCISSORS
    array<string,3> meA = {"X","Y","Z"};            //X = 0 LOSE, Y = 1 DRAW, Z = 2 WIN
    string enemyIn = "";
    string meIn = "";

    int indexE = -1, indexM = -1, sum = 0;
    while(cin >> enemyIn && cin >> meIn){

        for(int i = 0; i < 3; i++){
            if(enemyIn == enemyA.at(i)) indexE = i;
            if(meIn == meA.at(i)) indexM = i;
        }

        if(indexM == 0){
            //LOSE
            if(indexE == 0) sum+=3;
            if(indexE == 1) sum+=1;
            if(indexE == 2) sum+=2;
        }
        else if(indexM == 1){
            //DRAW
            sum += (indexE+1) + 3;
        }
        else if(indexM == 2){
            //WIN
            if(indexE == 0) sum+=8;
            if(indexE == 1) sum+=9;
            if(indexE == 2) sum+=7;
        }

        cout << "E:" << enemyIn << " " << indexE << " -- M:" << meIn << " " << indexM << endl;

        cout << "SUM: " << sum << endl;
    }

    return 0;
}