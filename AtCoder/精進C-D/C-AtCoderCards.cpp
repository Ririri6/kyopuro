#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string S;
  cin>>S;
  string T;
  cin>>T;

  int s=0;
  int t=0;
  for(int i=0;i<S.length();i++){
    if(S[i]=='@'){
        s++;
    }

    if(T[i]=='@'){
        t++;
    }
  }

  map<char,int> A;
  map<char,int> B;

  for(int i=0;i<S.length();i++){
    if(S[i]!='@'){
        A[S[i]]++;
    }
     if(T[i]!='@'){
        B[T[i]]++;
    }
  }

  for(auto a:A){
    if(B.count(a.first)==0){
        if(a.first=='a'||a.first=='t'||a.first=='c'||a.first=='o'||a.first=='d'||a.first=='e'||a.first=='r'){
            if(t < a.second){
                cout<<"No"<<endl;
                return 0;
            }else{
                t-=(a.second);
            }
        }else{
            cout<<"No"<<endl;
            return 0;
        }
    }else if(B.at(a.first)!=a.second){
        if(a.first=='a'||a.first=='t'||a.first=='c'||a.first=='o'||a.first=='d'||a.first=='e'||a.first=='r'){
            if((t < abs(a.second - B.at(a.first)))|| (s<abs(a.second - B.at(a.first)))){
                cout<<"No"<<endl;
                return 0;
            }else{
                if(B.at(a.first)<a.second){
                   t-=(abs(a.second-B.at(a.first)));
                }else{
                    s-=(abs(a.second-B.at(a.first)));
                }
                
            }
        }else{
            cout<<"No"<<endl;
            return 0;
        }
    }
  }

  
  for(auto b:B){
    if(A.count(b.first)==0){
        if(b.first=='a'||b.first=='t'||b.first=='c'||b.first=='o'||b.first=='d'||b.first=='e'||b.first=='r'){
            if(s < b.second){
                cout<<"No"<<endl;
                return 0;
            }else{
                 s-=(b.second);
            }
        }else{
            cout<<"No"<<endl;
            return 0;
        }
    }else if(A.at(b.first)!=b.second){
        if(b.first=='a'||b.first=='t'||b.first=='c'||b.first=='o'||b.first=='d'||b.first=='e'||b.first=='r'){
            if((s < abs(b.second - A.at(b.first)) ) || (t<abs(b.second - A.at(b.first)))){
                cout<<"No"<<endl;
                return 0;
            }else{
                if(A.at(b.first)<b.second){
                   s-=(abs(b.second-A.at(b.first)));
                }else{
                    t-=(abs(b.second-A.at(b.first)));
                }
            }
        }else{
            cout<<"No"<<endl;
            return 0;
        }
    }
  }
  
  cout<<"Yes"<<endl;
}

/*
#include <bits/stdc++.h>
using namespace std;

bool is_atcoder(char c) {
    return string("atcoder").find(c) != string::npos;
}

int main() {
    string S, T;
    cin >> S >> T;

    map<char, int> A, B;
    int s_at = 0, t_at = 0;

    for (int i = 0; i < S.size(); i++) {
        if (S[i] == '@') s_at++;
        else A[S[i]]++;

        if (T[i] == '@') t_at++;
        else B[T[i]]++;
    }

    for (char c = 'a'; c <= 'z'; c++) {
        int a = A[c];
        int b = B[c];
        if (a == b) continue;

        if (a > b) {
            if (!is_atcoder(c) || t_at < a - b) {
                cout << "No\n";
                return 0;
            }
            t_at -= (a - b);
        } else {
            if (!is_atcoder(c) || s_at < b - a) {
                cout << "No\n";
                return 0;
            }
            s_at -= (b - a);
        }
    }

    cout << "Yes\n";
}

*/