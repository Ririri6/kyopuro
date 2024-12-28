#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;


int main(){
    string S;
    cin >> S;

    int count = 0; 

    for (size_t i = 0; i < S.length(); ++i) {
        if (i + 1 < S.length() && S[i] == '0' && S[i + 1] == '0') {
            count++;
            i++; 
        } else {
            
            count++;
        }
    }

    cout << count << endl;
    

}