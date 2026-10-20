#include <iostream>
using namespace std;
class Animal{
    public:
    virtual void sound()=0;
};
class Dog :public Animal{
    public:
    void sound()override{
        cout<<"The loyal Dogs barks at strangers this is the sign of loyal dog :"<<endl;

    }
};
class Cat : public Animal{ public:
    void sound ()override{
        cout<<"The cats sound is mewo mwo"<<endl;
    }

};
int main(){

Dog d;
Cat c;
d.sound();
c.sound();


    return 0;
}