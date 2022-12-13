#include <iostream>
#include <windows.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

    int a;
    int pinoldricha;
    int pinpepka;
    int pinhonzika;
    int x = 700;
    int y = 500;
    int z = 300;
    int o;
    int u;
    int e;
    int g;
    int sum;
    int cum;

int main() {
    zacatek:
    cout << "Vitejte v bance \n\n";
    cout << "cisla uzivatelu jsou:\nPepa = 1\nOldrich = 2\nJenda = 3";
    cout << "\nzadejte cislo uzivatele:";
    cin >> a;
switch (a){
 case 1:
  cout << "\n\n\n\n\n vitej pepo. zadej pin:";
  cin >> pinpepka;
  if (pinpepka == 787332){
        system("CLS");
     cout << "super, vitej ve svem bankovnictvi \n\n\n";
     cout << "vas aktualni zustatek na uctu je: ";
     cout << x;
     cout << "\n\n\n\n\nprejete si ve vasem udelat akci?";
     cout << "\n1   odeslat na ucet";
     cout << "\n2   vyber z bankomatu\n";
     cin >> o;
        if (o == 1){
                system ("CLS");
            cout << "jak velkou transakci byste si prali odeslat?\n";
            cin >> u;
            cout << "\nna jaky ucet byste si prali udelat transakci\nOldrich = 1\nJan = 2\n";
            cin >> e;
            y = y + u;
            x = x - u;
            z = z + u;
            if (e == 1) {
                cout << "Oldrich ma aktualne ";
                cout << y;
                cout << "\nVy aktualne mate ";
                cout << x;
                Sleep (5000);
                system ("cls");
                goto zacatek;
            } else {

            cout << "Jan ma aktualne ";
            cout << z;
            cout << "\nVy aktualne mate ";
            cout << x;
            Sleep (5000);
                system ("cls");
                goto zacatek;
            }
        } else {
            system ("CLS");
        cout << "Jakou castku byste si prali vybrat?";
        cin >> g;
        cout << "aktualne mate na uctu ";
        x = x - g;
        cout << x;}
        Sleep (5000);
                system ("cls");
                goto zacatek;
     } else {
         system("CLS");
  cout << "ty nejsi pepa!!!!";}
  goto zacatek;
  break;
 case 2:
    cout << "\n\n\n\n\n vitej oldrichu. zadej pin:";
    cin >> pinoldricha;
    if (pinoldricha == 787333){
     system("CLS");
 cout << "super, vitej ve svem bankovnictvi \n\n\n";
     cout << "vas aktualni zustatek na uctu je: ";
     cout << y;
     cout << "\n\n\n\n\nprejete si ve vasem udelat akci?";
     cout << "\n1   odeslat na ucet";
     cout << "\n2   vyber z bankomatu\n";
     cin >> o;
        if (o == 1){
                system ("CLS");
            cout << "jak velkou transakci byste si prali odeslat?\n";
            cin >> u;
            cout << "\nna jaky ucet byste si prali udelat transakci\nPepa = 1\nJan = 2\n";
            cin >> e;
            y = y - u;
            x = x + u;
            z = z + u;
            if (e == 1) {
                cout << "Pepa ma aktualne ";
                cout << x;
                cout << "\nVy aktualne mate ";
                cout << y;
                Sleep (5000);
                system ("cls");
                goto zacatek;
            } else {
            cout << "Jan ma aktualne ";
            cout << z;
            cout << "\nVy aktualne mate ";
            cout << y;
            Sleep (5000);
                system ("cls");
                goto zacatek;
            }
        } else {
            system ("CLS");
         cout << "Jakou castku byste si práli vybrat?";
        cin >> g;
        cout << "aktualne mate na uctu ";
        cout << y - g;}
        Sleep (5000);
                system ("cls");
                goto zacatek;
     } else {
         system("CLS");
  cout << "ty nejsi oldrich!!!!";
  Sleep (5000);
                system ("cls");
                goto zacatek;

    }
    break;
case 3:
  cout << "\n\n\n\n\n vitej honzo. zadej pin:";
  cin >> pinhonzika;
  if (pinhonzika == 787334){
        system("CLS");
     cout << "super, vitej ve svem bankovnictvi \n\n\n";
     cout << "vas aktualni zustatek na uctu je: ";
     cout << z;
     cout << "\n\n\n\n\nprejete si ve vasem udelat akci?";
     cout << "\n1   odeslat na ucet";
     cout << "\n2   vyber z bankomatu\n";
     cin >> o;
        if (o == 1){
                system ("CLS");
            cout << "jak velkou transakci byste si prali odeslat?\n";
            cin >> u;
            cout << "\nna jaky ucet byste si prali udelat transakci\nPepa = 1\nOldrich = 2\n";
            cin >> e;
              z = z - u;
            x = x + u;
            y = y + u;
            if (e == 1) {

                cout << "Pepa ma aktualne ";
                cout << x;
                cout << "\nVy aktualne mate ";
                cout << z;
                Sleep (5000);
                system ("cls");
                goto zacatek;
            } else {

            cout << "Oldrich ma aktualne ";
            cout << y;
            cout << "\nVy aktualne mate ";
            cout << z;
            Sleep (5000);
                system ("cls");
                goto zacatek;
            }

             } else {
         system("CLS");
        cout << "Jakou castku byste si pøáli vybrat?";
        cin >> g;
        cout << "aktualne mate na uctu ";}
        cout << z - g;}
  break;

}
}

