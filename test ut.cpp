#include <iostream>
using namespace std ;
 
int main() {
    int nomer ;
 
    cout<<"Input Nomer Loker : ";cin>>nomer;
    if (nomer<=9){
        cout<<"Tersedia Di lantai 1 "<<endl;
    }else if(nomer<=12){
        cout<<"Tersedia Di lantai 2 "<<endl;
    }else if(nomer<=19){
        cout<<"Tersedia Di lantai 3 "<<endl;
    }else if(nomer<=21){
        cout<<"Tersedia Di Lantai 4 "<<endl;
    }else if(nomer<=30){
        cout<<"Tersedia Di Lantai 5 "<<endl;
    }else if(nomer<=33){
        cout<<"Tersedia Di Lantai 6 "<<endl;
	}else if(nomer<=40){
        cout<<"Tersedia Di Lantai 7 "<<endl;
	}else if(nomer<=42){
        cout<<"Tersedia Di Lantai 8 "<<endl;    
    }else{
        cout<<"Tersedia Diatas Lantai 8 "<<endl;
    }
    return 0 ;
}
