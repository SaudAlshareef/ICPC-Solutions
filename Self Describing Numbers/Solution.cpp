//Time of Start: 6:17
//Time of End: 6:25
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        int digits , number;
        cin >> number;
        digits = int(log10(number)+1);
        string numbers = to_string(number);
        bool flag = true;
        for (int i = 0; i < digits; i++)
        {
            if(((int)numbers[i]-48) != count(numbers.begin(),numbers.end(),to_string(i)[0])){
                flag = false;
                break;
            }
        }
        if(flag){
            cout << "self-describing" << endl;
        }else{
            cout << "not self-describing" << endl;
        }
        
    }
    
}