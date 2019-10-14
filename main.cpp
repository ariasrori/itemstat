#include <iostream>

using namespace std;

int main()
{
    string item[100];
    int stat[100];
    int terhebat = 0, terlemah = 0;
    char ulang;

    int i = 0;
    while(i<100){
        cout << "Masukan item : "; cin >> item[i];
        cout << "Masukan stat : "; cin >> stat[i];
        cout << "Item anda adalah : " << item[i] << endl;
        cout << "stat anda : " << stat[i] << endl;

        if(i > 0){
            cout << "item sebeleumnya adalah : " << item[i-1] << endl;
        }else{
            cout << "Nothing" << endl;
        }
        if(i > 0 && stat[i] > stat[terhebat]){
            terhebat = i;
        }
        if(i > 0 && stat[i] < stat[terlemah]){
            terlemah = i;
        }

        cout << "item terhebat: " << item[terhebat] << endl;
        cout << "item terlemah: " << item[terlemah] << endl;

        cout << "lagi ? (y/n) "; cin >> ulang;
        if(ulang == 'n' || ulang == 'N'){
            break;
        }
        cout << "\n";
        i++;
    }


    return 0;
}
