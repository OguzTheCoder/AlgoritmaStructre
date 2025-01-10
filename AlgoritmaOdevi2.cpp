#include <iostream>

using namespace std;

struct kumas
{
    string ipliktipi;
    int dm2agirlik;
    string dokumatipi;
    string renk;
    int miktar;
};

struct iskelet
{
    string malzeme;
    string tarz;
    string birlestirme;
    int boyut;
    int miktar;
};

struct mobilya
{
    kumas kaplama;
    iskelet malzeme;
    int fiyat;
    int adet;
};

int main()
{
    
    
    mobilya esya[10];
    int topla = 0;

    for (int i = 0;i < 10;i++)
    {
        cout << "-----------------------------------------------" << endl;
        cout << "-----------------------------------------------" << endl;

        cout <<i+1<< ". Mobilyanin kumas malzemesini giriniz : ";
        cin >> esya[i].malzeme.malzeme;
        cout << i+1 << ". Mobilyanin kumas tarzini giriniz ; ";
        cin >> esya[i].malzeme.tarz;
        cout << i+1 << ". Mobilyanin kumas birlesme seklini giriniz : ";
        cin >> esya[i].malzeme.birlestirme;
        cout << i+1 << ". Mobilyanin kumas boyutunu giriniz : " ;
        cin >> esya[i].malzeme.boyut;
        cout << i+1 << ". Mobilyanin kumas miktarini giriniz : ";
        cin >> esya[i].malzeme.miktar;


        cout <<i+1 <<". Mobilyanin iplik tipini giriniz : ";
        cin >> esya[i].kaplama.ipliktipi;
        cout << i+1 << ". Mobilyanin dm2 agirligini giriniz : ";
        cin >> esya[i].kaplama.dm2agirlik;
        cout << i+1 << ". Mobilyanin dokumatipini giriniz : ";
        cin >> esya[i].kaplama.dokumatipi;
        cout << i+1 << ". Mobilyanin rengini giriniz : ";
        cin >> esya[i].kaplama.renk;
        cout << i+1 << ". Mobilyanin miktarini giriniz : ";
        cin >> esya[i].kaplama.miktar;
        
        cout << i + 1 << ". Mobilyanin fiyatini giriniz : ";
        cin >> esya[i].fiyat;
        cout << i + 1 << ". Mobilyanin adetini giriniz : ";
        cin >> esya[i].adet;

        cout << "-----------------------------------------------" << endl;
        cout << "-----------------------------------------------" << endl;
    }

    for (int i = 0;i < 10;i++)
    {
        cout << "-----------------------------------------------" << endl;
        cout << "-----------------------------------------------" << endl;
        
        cout << i + 1 << ". Mobilyanin malzemesi :"<< esya[i].malzeme.malzeme<<endl;

        cout << i + 1 << ". Mobilyanin kumas tarzi :"<< esya[i].malzeme.tarz<<endl;
        cout << i + 1 << ". Mobilyanin kumas birlesme sekli :"<< esya[i].malzeme.birlestirme<<endl;
        cout << i + 1 << ". Mobilyanin kumas boyutu :"<< esya[i].malzeme.boyut<<endl;
        cout << i + 1 << ". Mobilyanin kumas miktari:"<< esya[i].malzeme.miktar<<endl;

        cout << i + 1 << ". Mobilyanin iplik tipi :"<< esya[i].kaplama.ipliktipi<<endl;
        cout << i + 1 << ". Mobilyanin dm2 agirligi :"<< esya[i].kaplama.dm2agirlik<<endl;
        cout << i + 1 << ". Mobilyanin dokuma tipi :"<< esya[i].kaplama.dokumatipi<<endl;
        cout << i + 1 << ". Mobilyanin rengi :"<< esya[i].kaplama.renk<<endl;
        cout << i + 1 << ". Mobilyanin miktari :"<< esya[i].kaplama.miktar<<endl;

        cout << i + 1 << ". Mobilyanin fiyati : "<< esya[i].fiyat<<endl;
        cout << i + 1 << ". Mobilyanin adeti : "<< esya[i].adet<<endl;

        topla += esya[i].fiyat*esya[i].adet ;
        cout << "-----------------------------------------------" << endl;
        cout << "-----------------------------------------------" << endl;
    }
    
    cout << "Mobilyalarin toplam fiyati : " << topla << endl;
    cout << "-----------------------------------------------";

    return 0;
}
