#include <iostream>
using namespace std;

class Swap{
    private:
    int var1;
    int var2;
    
    public:
    Swap(){
        var1 = 0;
        var2 = 0;
    }
    Swap(int x, int y){
        var1 = x;
        var2 = y;
    }
    int swapNumbers(int *var1, int *var2){
        int temp = *var1;
        *var1 = *var2;
        *var2 = temp;
    }
};

int main(){
    int x,y;
    cout<<"Enter value of var1: ";
    cin>>x;
    cout<<endl;
    cout<<"Enter value of var2: ";
    cin>>y;
    cout<<endl;
    Swap s1(x,y);
    cout<<"Value of variables before swapping "<<endl;;
    cout<<"var1 = "<<x<<endl;
    cout<<"var2 = "<<y<<endl;
    cout<<endl;
    cout<<"Value of variables after swapping "<<endl;
    s1.swapNumbers(&x,&y);
    cout<<"var1 = "<<x<<endl;
    cout<<"var2 = "<<y<<endl;
}

