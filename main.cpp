#include <iostream>
using namespace std;
/*                                                                    Yunus Gen�                                                                                 */
int main(){
	setlocale(LC_ALL, "Turkish");
	int yukseklik,genislik;
	
	cout<<"L�tfen dikd�rtgenin y�ksekli�ini giriniz :";
    cin>>yukseklik;
    cout<<"L�tfen dikd�rtgenin geni�li�ini giriniz :";
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

