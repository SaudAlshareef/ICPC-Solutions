//Time of Start : 5:45
//Time of Finish : 6:05
#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int z = 0; z < t; z++){
        map<string,int> f2k;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++){
            string name;
            int id;
            cin >> name >> id;
            if (f2k.find(name) == f2k.end()) {
                f2k.insert(pair<string,int>(name,id));
            }else if(f2k.find(name)->second >= id){
                f2k.find(name)->second = id;
            }
        }

        vector<int> values;

        for (map<string,int>::iterator i = f2k.begin(); i != f2k.end(); ++i) {
            values.push_back(i->second);
        }

        sort(values.begin(), values.end());

        for (int i = 0; i < values.size(); i++){
            cout << values[i] << " ";
        }
    }
    return 0;
}