#include<iostream>
#include<cmath>
using namespace std;
const int factorial[]={1,1,2,6,24,120,720,5040,40320,362880,3628800};
int gs,rank;
bool used[11];
int decantor(int x,int gs){
    int ans=0;
    int sum=0;
    int quotient,remainder;
    for(int i=gs-1;i>=1;i--){
        quotient=x/factorial[i];
        remainder=x%factorial[i];
        for(int j=1;j<=gs;j++){
            if(!used[j])
                sum++;
            if(sum==quotient+1){
                ans+=j*pow(10,i);
                sum=0;
                x=remainder;
                used[j]=true;
                break; 
            }
        }
    }
    for(int i=1;i<=gs;i++){
        if(!used[i]){
            ans+=i;
            break;
        }
    }
    return ans;
}
int main(){ 
    for(int i=1;i<=10;i++)
        used[11]=false;
    cin>>gs; 
    cin>>rank;
    rank--;
    cout<<decantor(rank,gs);
    return 0;
}
