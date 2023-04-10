#include <iostream>

using namespace std;

class part{
private:
    int modelnumber;
    int partnumber;
    float cost;
public:
    void setpart(int mm, int ptn , float cs){
        modelnumber = mm;
        partnumber = ptn;
        cost = cs;

    }

    void showpart(){
    cout << "model " << modelnumber << endl << " part number " << partnumber << endl << "cost is " << cost<< endl;

    }
};

int main(){
    part car;
    car.setpart(12,24,23.5);
    car.showpart();


    return 0;
}
