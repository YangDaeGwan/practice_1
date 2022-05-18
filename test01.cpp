#include <iostream>

using namespace std;

int main() {
    int a = 0;
    cout<< "정수를 입력하시오: " <<endl;
    cin>> a;
    for(int i=1; i<10; i++){
        cout<< a*i <<endl;
    }
    return 0;
}
