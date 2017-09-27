#include <iostream>
#include <vector>

using namespace std;

int main() {
    string input1 = "";
    while(input1 != "0 0") {
        vector<pair <int, int>> offers;
        int n,m;
    getline(cin, input1);
        if(input1 == "0 0") {break;}
    n = stoi(input1.substr(0,1));
    m = stoi(input1.substr(2,1));
    for(int i = 0; i < n; i++) {
        int a,b;
        getline(cin, input1);
        a = stoi(input1.substr(0,1));
        b = stoi(input1.substr(2,1));
        offers.push_back({b, a});
//        cout << i << " <- is i" << endl;
    }
    sort(offers.begin(), offers.end());
    for(int i = 0; i < offers.size(); i++) {
        if(offers[i].second > m - 1){
            offers.pop_back();
        }
    }
    sort(offers.begin(), offers.end());
        if(offers.size() == 0) {cout << "No suitable tickets offered" << endl;}
        else {
                int offersnum = offers.size() - 1;
                cout << "Buy " << offers[offers.size() - 1].second << " tickets for $" << offers[offers.size() - 1].first << endl;
             cout << "---------------------------------" << endl;
        }


}



    return 0;
}