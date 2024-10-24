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
int n;
cin>>n;
ll ts=(ll)n*(n+1)/2;
ll cs=0;
for(int i=0;i<n-1;i++){
    int nn;
    cin>>nn;
    cs+=nn;
}
cout<<ts-cs<<endl;
    return 0;
}