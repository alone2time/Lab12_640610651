#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;


int main(){
    
    cout << "Press Enter 3 times to reveal your future.";
    cin.get();
    cin.get();
    cin.get();
    
    srand(time(0));
    int x = rand()%9+1;
    
    string Grade;
    if(x == 1){
        Grade = "A";
    }
    else if(x == 2){
        Grade = "B+";
    }
    else if(x == 3){
        Grade = "B";
    }
    else if(x == 4){
        Grade = "C+";
    }
    else if(x == 5){
        Grade = "C";
    }
    else if(x == 6){
        Grade = "D+";
    }
    else if(x == 7){
        Grade = "D";
    }
    else if(x == 8){
        Grade = "F";
    }else{
        Grade = "W";
    }
    cout << "You will get "<< Grade <<" in this 261102.";
    return 0;
}


