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


void true_false() {
    int a;
    do {
        cout << "Enter a number between 1 and 100: ";
        cin >> a;
    } while (a <= 0 || a >= 101);
}

int select(){
    int a; int b;
    cin >> a;
    cin >> b;
    if (a==b){
        cout << 'yaxshi' ;
    } else if (a>b){
        cout << 'ya' ;
    } else{
        cout << 'yamon' ;
    }
}

int main() {
    //cout << calculator() ;
    //selection();
    //true_false();
    select();
    return 0;
}
