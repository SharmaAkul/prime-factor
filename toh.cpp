#include<iostream>
using namespace std;

void toh(int n,char s[],char d[],char a[]){
if(n==1){
cout<<"move disk"<<n<<" from "<<s<<" to "<<d<<endl;
}
else{
toh(n-1,s,a,d);
cout<<"move disk"<<n<<" from "<<s<<" to "<<d<<"456"<<endl;
toh(n-1,a,d,s);
}
}

int main(){
int n;
cin>>n;
toh(n,"a","c","b");
}
