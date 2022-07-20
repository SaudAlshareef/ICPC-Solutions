//Time of Start: 6:28
//Time of End: 6:34
#include <bits/stdc++.h>
using namespace std;


int main(){
    long long Max = 10e8;
    long long Min = 1;
    bool flag = true;
    for (int i = 0; i < 30; i++){
        char a;
        long long guess = (Min + Max) / 2;
        cout << guess << endl;
        cin >> a;
        fflush(stdout);
        if(a == '='){
            cout << "! " << guess;
            flag = false;
            break;
        }
        if(a == '>'){
            Min = guess+1;
        }else{
            Max = guess-1;
        }
    }
    if(Max < Min){
        cout << "INVALID NUMBER" << endl;
    }
    if(flag){
        cout << "FAILED" << endl;
    }
}