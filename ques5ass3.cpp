#include<iostream>
using namespace std;
int main(){
int carnumber,i;
float carhours,carfair,extrahours;
cout<<"Enter carnumber"<<' '<<"Enter carhours"<< endl;
for(i=1;i<=3;i++){
cin >> carnumber >> carhours;
if(carhours>=24){
    carfair=10.00;
}
else if(carhours<=3){
    carfair=carhours*2;
}
else if(carhours>3&&carhours<25){
    extrahours=carhours-3;
    carfair=carhours*3+extrahours*0.5;
}
cout<<"carnumber="<<carnumber<<' '<<"carhours="<<carhours<<' '<<"carfair="<<carfair<< endl;
}
}
