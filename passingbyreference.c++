#include <iostream>

using namespace std;

void order(int& asdf, int& apo){
if(asdf > apo){
    int temp= asdf;
    asdf = apo;
    apo = temp;
}

}

int main(){
int n1=99,n2=90;
order(n1,n2);


cout << "n1 " << n1 << endl;
cout << "n2 " << n2 << endl;

    return 0;
}
