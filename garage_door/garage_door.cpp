#include <iostream>

using namespace std;

int cList[4] = {};

void getCommands(){
    int x = 0;

    cout << "Please input a series of commands.\n" << "1 = single click\n" << "2 = double click" << endl;

    while (cList[3] == 0){
        cin >> cList[x];
        x++;
    }
}



int main(){

    int doorStatus = 1;

    getCommands();

    for(int i = 0; cList[i<=4]; i++){
        switch(cList[i]){
            case 1: cout << "button click" << endl;
                    //1 = closed
                    if(doorStatus == 1) doorStatus += 1;
                    //2 = open
                    if(doorStatus == 2) doorStatus -= 1;
                    //3 = stuck closing
                    if(doorStatus == 3) doorStatus -= 1;
                    //4 = stuck opening
                    if(doorStatus == 4) doorStatus -= 3;
                    break;
            case 2: cout << "button click\n button click" << endl;
                    if(doorStatus == 1) doorStatus += 3;
                    if(doorStatus == 2) doorStatus += 1;
                    if(doorStatus == 3) doorStatus += 1;
                    if(doorStatus == 4) doorStatus -= 1;
                    break;
        }
        switch(doorStatus){
            case 1: cout << "DOOR STATUS: Closed" << endl;
                    break;
            case 2: cout << "DOOR STATUS: Open" << endl;
                    break;
            case 3: cout << "DOOR STATUS: Stuck closing" << endl;
                    break;
            case 4: cout << "DOOR STATUS: Stuck Opening" << endl;
                    break;
        }
    }

    return 0;
}    
