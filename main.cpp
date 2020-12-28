#include <iostream>
using namespace std;
/*                                                                    Yunus Genç                                                                                 */
int main(){
	setlocale(LC_ALL, "Turkish");
	int yukseklik,genislik;
	cout<<"***********************************";
	cout<<endl;
	
	cout<<"Lutfen dikdorgenin yuksekligini giriniz :";
    cin>>yukseklik;
    cout<<"***********************************";
	cout<<endl;
    cout<<"Lutfen dikdortgenin genisligini giriniz :";
    cin>>genislik;
    for (int i = 1; i <= yukseklik; i++)
            {
                for (int j = 1; j <= genislik; j++)
                {
                    if (i == 1 || i == yukseklik)
                        cout<<"*";
                    else
                        if (j == 1 || j == genislik)
                            cout<<"*";
                        else
                            cout<<" ";
                }
                cout<<endl;
            }
                
return 0;
}

