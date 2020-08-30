#include<iostream>
using namespace std;

class Complex{
private:
    int real,img;
public:
    Complex(int h=0,int m=0)
    {
        real=h;
        img=m;
    }
    void printf(){
        if(real==img)
      cout<<"true"<<endl;
      else
        cout<<"false"<<endl;
    }
    Complex operator==(const Complex &obj){
     return Complex(real==obj.real,img==obj.img);
    }
    };
    int main()
    {
        Complex c1(2,2),c2(3,2),c3;
        c3=(c1==c2);
        c3.printf();

    }
