#include <iostream>
#include <vector>
#include <algorithm>
 using namespace std;
 int main(){
    vector<int> v;
    int n,x;
    cin >> n;
     for(int i = 0; i < n; i++){
        cin >> x;
        v.push_back(x);
    }
     vector<int> one;
    vector<int> two;
    vector<int> three;
     vector<int> :: iterator it;
    int i = 1;
    it = v.begin();
    while(it != v.end()){
        if(*it == 1){
            one.push_back(i);
        }else if(*it == 2){
            two.push_back(i);
        }else{
            three.push_back(i);
        }
        it++;
        i++;
    }
    int team = min(min(one.size(),two.size()),three.size());
    cout << team << "\n";
     vector<int> :: iterator a;
    vector<int> :: iterator b;
    vector<int> :: iterator c;
    a = one.begin();
    b = two.begin();
    c = three.begin();
     while(team--){
        cout << *a << " " << *b << " " << *c << "\n";
        a++;
        b++;
        c++;
    }
    return 0;
}