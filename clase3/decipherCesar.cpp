#include <iostream>

using namespace std;

int main(){

    string s = "rlcopy";
    char temp;

    for (int i = 1; i < 27; ++i){
        for(int j = 0; j < s.length(); ++j){
            if(s[j]+i <= 'z')
                temp = s[j]+i;
            else
                temp = 97+s[j]+i-123;
            cout << temp;
        }
        cout << endl;
    }

    return 1;
}
