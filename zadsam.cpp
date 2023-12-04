#include <iostream>

using namespace std;

int main(){


struct sam {
  string model;
  int year;
  string color;
  int mileage_km;
  int horse;
  int price_$;
};

sam myCar1[10];
for(int i=0;i<10;i++){
cout << "Podaj model ";
cin >> myCar1[i].year;
cout << "Podaj color ";
cin >> myCar1[i].color;
cout << "Podaj probieg ";
cin >> myCar1[i].mileage_km;
cout << "Podaj konie mechaniczne ";
cin >> myCar1[i].horse;
cout << "Podaj cene ";
cin >> myCar1[i].price_$;
}


for(int a=0;a<10;a++){
cout << myCar1[a].model << " " << myCar1[a].year <<  " " << myCar1[a].color << " " << myCar1[a].mileage_km << " " << myCar1[a].horse << " " << myCar1[a].price_$ << "\n";}
}
