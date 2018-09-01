#include<iostream>
using namespace std;
class prime{
public:
int c=2,i=0;
int arr[100],b[1000]={0};
    void input(int num){
        while (num>1){
            if( num%c==0)
                {
                num=num/c;
                arr[i]=c;
                c=arr[i];
                b[arr[i]]++;
                i++;
            }
            else {
                c++;
            }
        }
}
    void display(int num){
        cout<<"Prime factors of "<<num<<" arev : ";
        for(int j=0;j<1000;j++)
            {
            if(b[j]>0)
                cout<<j<<"^"<<b[j]<<"  ";
        }
        cout<<endl;
    }
};

int  main(){
    prime p;
    prime p1;
    int num1,num2;
    cout<<"enter num1 :";
    cin>>num1;
    cout<<"enter num 2 :";
    cin>>num2;
    p.input(num1);
    p.display(num1);
    p1.input(num2);
    p1.display(num2);
return 0;
}
