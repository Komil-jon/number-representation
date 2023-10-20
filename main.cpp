#include <iostream>
using namespace std;

void one(int a){
    if (a==1){
        cout << "bir";
    } else if (a==0){
        cout << "";
    } else if(a==2){
        cout << "ikki";
    } else if(a==3){
        cout << "uch";
    } else if(a==4){
        cout << "to'rt";
    } else if (a==5){
        cout << "besh";
    } else if (a==6){
        cout << "olti";
    } else if (a==7){
        cout << "yetti";
    } else if (a==8){
        cout << "sakkiz";
    } else {
        cout << "to'qqiz";
    }
}

void two(int number){
    int b = number % 10;
    int a = number / 10;
    if (a==1){
        cout << "o'n";
    } else if (a==0){
        cout << "";
    } else if(a==2){
        cout << "yigirma";
    } else if(a==3){
        cout << "o'ttiz";
    } else if(a==4){
        cout << "qirq";
    } else if (a==5){
        cout << "ellik";
    } else if (a==6){
        cout << "oltmish";
    } else if (a==7){
        cout << "yetmish";
    } else if (a==8){
        cout << "sakson";
    } else {
        cout << "to'qson";
    }
    if (a!=0){
        cout << " ";
    }
    one(b);
}

void three(int number){
    int a = number / 100;
    int b = number - 100*a;
    one(a);
    if (a!=0){
        cout << " yuz ";
    }
    two(b);
}

void four(int number){
    int a = number / 1000;
    int b = number - 1000*a;
    one(a);
    if (a!=0){
        cout << " ming ";}
    three(b);
}

void five(int number){
    int a = number / 1000;
    int b = number - 1000*a;
    two(a);
    if (a!=0){
        cout << " ming "; }
    three(b);
}

void six(int number){
    int a = number / 1000;
    int b = number - 1000*a;
    three(a);
    if (a!=0){
        cout << " ming ";}
    three(b);
}

void seven(int number){
    int a = number / 1000000;
    int b = number - 1000000*a;
    one(a);
    if (a!=0){
        cout << " million ";}
    six(b);
}

void eight(int number){
    int a = number / 1000000;
    int b = number - 1000000*a;
    two(a);
    if (a!=0){
        cout << " million ";}
    six(b);
}

void nine(int number){
    int a = number / 1000000;
    int b = number - 1000000*a;
    three(a);
    if (a!=0){
        cout << " million ";}
    six(b);
}

void ten(long long int number){
    int a = number / 1000000000;
    int b = number - 1000000000*a;
    one(a);
    if (a!=0){
        cout << " milliard ";
    }
    nine(b);
}
int main() {
    long long int number;
    cout << "Enter a number: ";
    cin >> number;
    string str = to_string(number);
    int len = str.length();
    if (len==1){
        one(number);
    } else if(len==2){
        two(number);
    } else if (len==3){
        three(number);
    } else if (len==4){
        four(number);
    } else if (len==5){
        five(number);
    } else if (len==6){
        six(number);
    } else if (len==7){
        seven(number);
    } else if (len==8){
        eight(number);
    } else if (len==9){
        nine(number);
    } else if (len==10){
        ten(number);
    } else{
        cout << "error :(";
    }

    return 0;
}
