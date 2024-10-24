#include <bits/stdc++.h>
using namespace std;
//solution by aindrelasaha
//HARE KRISHNA ॐ
#define ll long long
#define Prith ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007
/* Donot panic Pritha */
// Solution is very easy you just need to figure it out
// try focusing on the inputs
// if nothing comes to mind take a break of 2 mins
 
int main() {
Prith;
ll n;
cin>>n;

cout<<n<<" ";

while(n!=1){
    if(n%2==0){
        n/=2;
    }
    else{
        n=n*3+1;
    }
    cout<<n<<" ";
}
cout<<endl;
    return 0;
}