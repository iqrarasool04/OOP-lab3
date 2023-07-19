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
    void PrintNumbers(){
        cout<<"var1 = "<<var1<<endl;
        cout<<"var2 = "<<var2<<endl;
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
    s1.swapNumbers(&x,&y);
    s1.PrintNumbers();
}
