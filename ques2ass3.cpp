#include<iostream>
using namespace std;
class complex{
  private:
      int a,b;
  public:
    void setdata(int h,int m){
    a=h;
    b=m;
    }
    void showdata(){
    cout<<"a="<<a<<"\nb="<<b<< endl;
    }
    complex operator*(complex c){
    complex temp;
    temp.a=a*c.a;
    temp.b=b*c.b;
    return(temp);
    }
};
int main()
{
complex c1,c2,c3;
c1.setdata(4,5);
c2.setdata(3,8);
c3=c1*c2;
c3.showdata();

}
