#include <iostream>
#include <string.h>
#include<time.h>
#include <locale.h>
#include <string>
#include <cmath>
#include <vector>
#include <cstdlib>
#include <stdlib.h>

using namespace std;

struct Otomobil{


    string marka;
    int model;
    int yil;
    string yakit;
    float km;
    float fiyat;

};

int main() {

    Otomobil binek,suv,ticari;

    string Cesit[3];
    Cesit[1]= "Binek";
    Cesit[2]= "SUV";
    Cesit[3]= "Ticari";

    for(int i = 1; i<4; i++){
        cout<<Cesit[i]<< " aracinizin markasini giriniz: "<<endl;
        if (i==1) {
            cin>>binek.marka;
        }
        else if(i==2){
            cin>>suv.marka;
        }
        else{
            cin>>ticari.marka;
        }
        

        cout<<Cesit[i]<< " aracinizin modelini giriniz: "<<endl;
        if (i==1) {
            cin>>binek.model;
        }
        else if(i==2){
            cin>>suv.model;
        }
        else{
            cin>>ticari.model;
        }

        cout<<Cesit[i]<< " aracinizin uretim yilini giriniz: "<<endl;
        if (i==1) {
            cin>>binek.yil;
        }
        else if(i==2){
            cin>>suv.yil;
        }
        else{
            cin>>ticari.yil;
        }

        cout<<Cesit[i]<<" aracinizin yakit türünü giriniz: "<<endl;
        cout<<"(LPG ise 1 "<<endl;
        cout<<"Dizel ise 2 "<<endl;
        cout<<"Petrol ise 3 "<<endl;
        cout<<"Hibrit ise 4'e basiniz) "<<endl;
        if (i==1) {
            cin>>binek.yakit;
        }
        else if(i==2){
            cin>>suv.yakit;
        }
        else{
            cin>>ticari.yakit;
        }

        cout<<Cesit[i]<<" aracinizin kilometresini giriniz: "<<endl;
        if (i==1) {
            cin>>binek.km;
        }
        else if(i==2){
            cin>>suv.km;
        }
        else{
            cin>>ticari.km;
        }

        cout<<Cesit[i]<<" aracinizin fiyatini giriniz: "<<endl;
        if (i==1) {
            cin>>binek.fiyat;
        }
        else if(i==2){
            cin>>suv.fiyat;
        }
        else{
            cin>>ticari.fiyat;
        }


    }

    for(int i = 1; i<4; i++){

        cout << Cesit[i] << " araciniz icin: "<<endl;
        cout << "------------------------"<<endl;

        if (i == 1){
            cout<< Cesit[i] << " aracin modeli: "<< binek.model<<endl;
            cout<< Cesit[i] << " aracin uretim yili: "<< binek.yil<<endl;
            cout<< Cesit[i] << " aracin yakiti: "<< binek.yakit<<endl;
            cout<< Cesit[i] << " aracin kilometresi: "<< binek.km<<endl;
            cout<< Cesit[i] << " aracin fiyati: "<< binek.fiyat<<endl;

        }
        else if (i == 2){
            cout<< Cesit[i] << " aracin modeli: "<< suv.model<<endl;
            cout<< Cesit[i] << " aracin uretim yili: "<< suv.yil<<endl;
            cout<< Cesit[i] << " aracin yakiti: "<< suv.yakit<<endl;
            cout<< Cesit[i] << " aracin kilometresi: "<< suv.km<<endl;
            cout<< Cesit[i] << " aracin fiyati: "<< suv.fiyat<<endl;

        }
        else{
            cout<< Cesit[i] << " aracin modeli: "<< ticari.model<<endl;
            cout<< Cesit[i] << " aracin uretim yili: "<< ticari.yil<<endl;
            cout<< Cesit[i] << " aracin yakiti: "<< ticari.yakit<<endl;
            cout<< Cesit[i] << " aracin kilometresi: "<< ticari.km<<endl;
            cout<< Cesit[i] << " aracin fiyati: "<< ticari.fiyat<<endl;

        }
        

    }
    return 0;
}