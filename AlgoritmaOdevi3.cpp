#include <iostream>
#include <string>

using namespace std;

enum garanti
{
    hayir,evet
};

struct gonderen
{
    string ad_soyad;
    string adres;
    string tel_no;
};

struct alici
{
    string ad_soyad;
    string adres;
    string tel_no;
};

struct gonderi
{
    string gonderi_no;
    double agirlik;
    double hacim;
    double ucret;
    garanti grnti;
};

struct kurye
{
    string ad_soyad;
    string telefon_no;
};
int main()
{
    
    gonderen gonderenler[5];
    alici alicilar[5];
    gonderi gonderiler[5];
    kurye kuryeler[5];
    int a[5];
    
    for (int i = 0;i < 5;i++)
    { 
        a[i] = gonderiler[i].grnti;
        cout << "----------------------------------------------------"<<endl;
        cout <<i+1 <<". Paketi siparis veren kisi ad soyadi : ";
        cin>> alicilar[i].ad_soyad;
        cout << i+1 << ". Paketi siparis veren kisi adresi : ";
        cin >> alicilar[i].adres;
        cout << i+1 << ". Paketi siparis veren kisi telefon numarasi : ";
        cin >> alicilar[i].tel_no;
        
        cout << i+1 << ". Paketi gonderen kisi ad soyadi : ";
        cin>> gonderenler[i].ad_soyad;
        cout << i+1 << ". Paketi gonderen kisi adresi : ";
        cin >> gonderenler[i].adres;
        cout << i+1 << ". Paketi gonderen kisi telefon numarasi : ";
        cin >> gonderenler[i].tel_no;

        cout << i+1 << ". Paketin gonderi numarasi : ";
        cin >> gonderiler[i].gonderi_no;
        cout << i+1 << ". Paketin agirligi : ";
        cin >> gonderiler[i].agirlik;
        cout <<i+1 << ". Paketin hacmi : ";
        cin >> gonderiler[i].hacim;
        cout << i+1 << ". Paketin ucreti : ";
        cin >> gonderiler[i].ucret;
        cout << i+1 << ". Pakette garanti istiyormusunuz (Evet ise 1 hair ise 0 a bas : ";
        cin >> a[i];

        cout << i+1 << ". Kuryenin ismini giriniz : ";
        cin>> kuryeler[i].ad_soyad;
        cout << i+1 << ". Kuryenin telefon numarasini giriniz : ";
        cin >> kuryeler[i].telefon_no;
    }

    for (int i = 0;i < 5;i++)
    {
        cout << i + 1 << ". Paketi siparis veren kisi ad soyadi : "<< alicilar[i].ad_soyad<<endl;
        cout << i + 1 << ". Paketi siparis veren kisi adresi : "<< alicilar[i].adres<<endl;
        cout << i + 1 << ". Paketi siparis veren kisi telefon numarasi : "<< alicilar[i].tel_no<<endl;

        cout << i + 1 << ". Paketi gonderen kisi ad soyadi : "<< gonderenler[i].ad_soyad<<endl;
        cout << i + 1 << ". Paketi gonderen kisi : "<< gonderenler[i].adres<<endl;
        cout << i + 1 << ". Paketi gonderen kisi : "<< gonderenler[i].tel_no<<endl;

        cout << i + 1 << ". Paketin gonderi numarasi : "<< gonderiler[i].gonderi_no<<endl;
        cout << i + 1 << ". Paketin agirligi : "<< gonderiler[i].agirlik<<endl;
        cout << i + 1 << ". Paketin hacmi : "<< gonderiler[i].hacim<<endl;
        cout << i + 1 << ". Paketin ucreti : "<< gonderiler[i].ucret<<endl;
        cout << i + 1 << ". Paketin garanti durumu : "<< a[i]<<endl;

        cout << i + 1 << ". Kuryenin ismini giriniz : "<< kuryeler[i].ad_soyad<<endl;
        cout << i + 1 << ". Kuryenin telefon numarasini giriniz : "<< kuryeler[i].telefon_no<<endl;
    }

    return 0;
}

