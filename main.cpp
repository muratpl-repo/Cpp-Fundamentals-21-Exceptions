#include <iostream>

using namespace std;

int main()
{
    string websitesi;
    cout<<"Lutfen baglanmak istediginiz websitesini giriniz"<<endl;
    cin>>websitesi;

    try{

        if (websitesi != "www.google.com"){
            throw 404;

        }

    }
    catch(int hatakodu) {

    cout<<"Aradiginiz websitesi bulunamadi. Hata kodu: "<<hatakodu<<endl;

    }


    return 0;
}

