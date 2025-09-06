#include<iostream>
#include<string>
using namespace std;

class Car{ // Abastract Class or Interface
    public:
        virtual void brake() = 0;
        virtual void startEngine() = 0;
        // virtual void shiftGear() = 0;
        // virtual void stopEngine() = 0;
};

class SportCar : public Car{
    public:
        string brand;
        string model;

        SportCar(string b, string m){
            this->brand = b;
            this->model = m;
        }

        void brake(){
            cout<<"brake!"<<endl;
        }
        void startEngine(){
            cout<<"Engine started!"<<endl;
        }
};


int main(){

    // cout<<"Hello World!\n";

    Car * c = new SportCar("Ford", "X2");
    c->brake();

    return 0;
}