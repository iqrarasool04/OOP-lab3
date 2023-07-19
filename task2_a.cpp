#include <iostream>
using namespace std;

class Cel_to_Feh{
    private:
    float temp;
    
    public:
    Cel_to_Feh(){
        temp = 0;
    }
    Cel_to_Feh(int c){
        temp = c;
    }
    float celsiustofahrenheit ( float *temp){
        return (*temp * (9.0/5.0))+32;
    }
};

int main(){
    float cel;
    cout<<"Enter temperature in celsius: ";
    cin>>cel;
    cout<<endl;
    Cel_to_Feh o1(cel);
    cout<<"Temperature in fahrenheit is: "<<o1.celsiustofahrenheit(&cel)<<endl;
}
