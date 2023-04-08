#include <iostream>

using namespace std;

void repchar(char ch, int in){
    for(int j= 0 ; j< in ;j++){
        cout << "answer is "<< ch << endl;
    }
}

int main(){


int chin;
char val;

cout << "enter a value"<< endl;
cin >> chin;


cout << "enter a character"<< endl;

cin >> val;

repchar(val, chin);



};
//passing by reference changes the actual value in memory