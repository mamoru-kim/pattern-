#include <iostream>
 
using namespace std;

class Flashlight{
public:
    virtual ~Flashlight(){} 
   
    virtual void info(){
        cout << "Flashlight on!\n";
    }
}; 


class Factory{
public:
    virtual ~Factory(){} 
    Flashlight* Create(){
        return new Flashlight;
    }
};
 

Flashlight* foo(Factory *value){
    return value->Create(); 
}
 
 

int main(){      
      
	Factory Flash;
 
    Factory *ptr = &Flash;
 
    Flashlight *ObjectNature = foo(ptr); 

    ObjectNature->info();
    
    delete ObjectNature; 
}
