//time of start: 5:32
//time of finish: 5:40
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    int a;
    string s;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        a = 0;
        cin >> s;
        vector<char> v(s.begin(),s.end());
        for(char l : v){
            if(tolower(l) == 'u'){
                a++;
            }else{
                break;
            }
        }
        cout << a << endl;
    }
    
    return 0;
}