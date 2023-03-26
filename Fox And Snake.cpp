#include<bits/stdc++.h>
using namespace std;

int main() {
   int n,m;
   cin>>n>>m;
   string S1(m,'#');
   string S2(m,'.');
   
   int direction = 0;
   for(int row = 0;row<n;row++){
       if(row%2 == 0){
           cout<<S1<<endl;
       }
       else{
           if(direction == 0) S2[0] = '.',S2[m-1]= '#';
           else S2[0]='#',S2[m-1]='.';
           cout<<S2<<endl;
           direction = 1 - direction;
       }
   }
   return 0;
   
}
