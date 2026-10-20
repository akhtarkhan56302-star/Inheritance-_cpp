#include <iostream>
using namespace std;
class Calculator{
    public:
    int add(int a,int b){
        return a+b;
    }
    int add(int a ,int b,int c){
        return a+b+c;
    }
};
int main(){
Calculator c;
cout<<"first function contain:"<<c.add(2,3)<<endl;
cout <<"second function contain"<<c.add(2,3,5)<<endl;




    return 0;
}