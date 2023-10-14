#include <iostream>
using namespace std;

int calculator() {
    cout << "enter: " ;
    int a; cin >> a;
    cout << "enter: " ;
    int b; cin >> b;
    return a+b ;
}

void selection(){
    cout << "enter: ";
    int c; cin >> c;
    cout << "enter: ";
    int d; cin >> d;
    if (c>d) {
        cout << to_string(c) +  " is greater";
    }
    else if (c==d){
        cout << "they are equal";
    }
    else {
        cout << to_string(d) + " is greater";
    }

}

int main() {
    //cout << calculator() ;
    selection();
    return 0;
}