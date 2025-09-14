#include<iostream>
using namespace std;
void swapValue(int &a,int &b){
    int temp = a;
    a =b;
    b = temp;
    
}
int main(){
    int a;
    int b;
    cout<<"The value of a is"<<endl;
cin>>a;
cout<<"The value of b is"<<endl;
    cin>>b;
swapValue(a,b);
   cout<<"The value of a is"<<a<<endl;
   cout<<"The value of b is "<<b<<endl;
   
   

}