#include <iostream>
#include <string>
using namespace std;

string a;
char flag;
int ans = 1;

int main(){
    cin >> a;
    flag = a[0];
    for (int i = 1; i < a.size(); ++ i){
        if (a[i] == a[i - 1]) {
            ans += 1;
        }
        else {
            cout << ans << flag;
            ans = 1;
            flag = a[i];
        }
    }
    cout << ans << flag << endl;
    return 0;
}
