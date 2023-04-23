// --------------------- program to check pelidrome of a number-------------------
/* pelidrome mean the reverse of a number is equal to the num
ex- n=454 , rev=454 this is pelidrome num*/
#include<iostream>
using namespace std;

int main(){
    int n , r , rev=0 , m;
    cout<<"enter the value of n "<<endl;
    cin>>n;
    m=n;

    while(n>0){
        r=n%10;
        n=n/10;
        rev=rev*10+r;
    }
    cout<<"reverse of the num is"<<rev<<endl;
    if(rev==m)
    cout<<"pelidrome num"<<endl;
    else
    cout<<"not pelidrome num"<<endl;




    return 0;
}
