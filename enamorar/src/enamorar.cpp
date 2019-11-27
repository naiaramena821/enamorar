#include "Enamorar.h"
#include <fstream>
#include <iostream>
using namespace std;

Enamorar::Enamorar()
{
    cout << "BIENVENIDO" << endl;
    cout << endl;
}

void Enamorar::inicio()
{
    cout << "Quedate conmigo y sere tu mejor aliado con estos pasos\n muy valiosos para ti,\n es hora de ir por ella!" << endl;
    cout << "VAMOS (I)" << endl;
    char empezar;
    cin >> empezar;
    if(empezar == 'I')
    {
        paso_1();
    }
}
void Enamorar::paso_1()
{
    int a= 1;
    ifstream archivo;
    string texto;
    archivo.open("paso_1.txt",ios::in);
    while(!archivo.eof())
    {
        getline (archivo,texto);
        cout << texto << endl;
    }
    archivo.close();

    cout << "Siguiente paso?\n yes\n no" << endl;
    string sig;
    cin >> sig;
    if(sig == "yes")
    {
        paso_2();
    }
}

void Enamorar::paso_2()
{
    int b= 2;
    ifstream archivo;
    string texto;
    archivo.open("paso_2.txt",ios::in);
    while(!archivo.eof())
    {
        getline (archivo,texto);
        cout << texto << endl;
    }
    archivo.close();

        cout << "Siguiente paso?\n yes\n no" << endl;
    string sig;
    cin >> sig;
    if(sig == "yes")
    {
        paso_3();
    }
}

void Enamorar::paso_3()
{
    int c= 3;
    ifstream archivo;
    string texto;
    archivo.open("paso_3.txt",ios::in);
    while(!archivo.eof())
    {
        getline (archivo,texto);
        cout << texto << endl;
    }
    archivo.close();

        cout << "Siguiente paso?\n yes\n no" << endl;
    string sig;
    cin >> sig;
    if(sig == "yes")
    {
        paso_4();
    }
}

void Enamorar::paso_4()
{
    int d= 4;
    ifstream archivo;
    string texto;
    archivo.open("paso_4.txt",ios::in);
    while(!archivo.eof())
    {
        getline (archivo,texto);
        cout << texto << endl;
    }
    archivo.close();

        cout << "Siguiente paso?\n yes\n no" << endl;
    string sig;
    cin >> sig;
    if(sig == "yes")
    {
        paso_5();
    }
}

void Enamorar::paso_5()
{
    int f= 5;
    ifstream archivo;
    string texto;
    archivo.open("paso_5.txt",ios::in);
    while(!archivo.eof())
    {
        getline (archivo,texto);
        cout << texto << endl;
    }
    archivo.close();

        cout << "Siguiente paso?\n yes\n no" << endl;
    string sig;
    cin >> sig;
    if(sig == "yes")
    {
        paso_6();
    }
}

void Enamorar::paso_6()
{
    int g= 6;
    ifstream archivo;
    string texto;
    archivo.open("paso_6.txt",ios::in);
    while(!archivo.eof())
    {
        getline (archivo,texto);
        cout << texto << endl;
    }
    archivo.close();

        cout << "Siguiente paso?\n yes\n no" << endl;
    string sig;
    cin >> sig;
    if(sig == "yes")
    {
        paso_7();
    }
}

void Enamorar::paso_7()
{
    int h= 7;
    ifstream archivo;
    string texto;
    archivo.open("paso_7.txt",ios::in);
    while(!archivo.eof())
    {
        getline (archivo,texto);
        cout << texto << endl;
    }
    archivo.close();

        cout << "Siguiente paso?\n yes\n no" << endl;
    string sig;
    cin >> sig;
    if(sig == "yes")
    {
        paso_8();
    }
}

void Enamorar::paso_8()
{
    int i= 8;
    ifstream archivo;
    string texto;
    archivo.open("paso_8.txt",ios::in);
    while(!archivo.eof())
    {
        getline (archivo,texto);
        cout << texto << endl;
    }
    archivo.close();

        cout << "Siguiente paso?\n yes\n no" << endl;
    string sig;
    cin >> sig;
    if(sig == "yes")
    {
        paso_9();
    }
}

void Enamorar::paso_9()
{
    int j= 9;
    ifstream archivo;
    string texto;
    archivo.open("paso_9.txt",ios::in);
    while(!archivo.eof())
    {
        getline (archivo,texto);
        cout << texto << endl;
    }
    archivo.close();

    cout << "Siguiente paso?\n yes\n no" << endl;
    string sig;
    cin >> sig;
    if(sig == "yes")
    {
        paso_10();
    }
}

void Enamorar::paso_10()
{
    int k= 10;
    ifstream archivo;
    string texto;
    archivo.open("paso_10.txt",ios::in);
    while(!archivo.eof())
    {
        getline (archivo,texto);
        cout << texto << endl;
    }
    archivo.close();

    cout << "Siguiente paso?\n yes\n no" << endl;
    string sig;
    cin >> sig;
    if(sig == "yes")
    {
        paso_11();
    }


}

void Enamorar::paso_11()
{
    int l= 11;
    ifstream archivo;
    string texto;
    archivo.open("paso_11.txt",ios::in);
    while(!archivo.eof())
    {
        getline (archivo,texto);
        cout << texto << endl;
    }
    archivo.close();

        cout << "Siguiente paso?\n yes\n no" << endl;
    string sig;
    cin >> sig;
    if(sig == "yes")
    {
        paso_12();
    }
}

void Enamorar::paso_12()
{
    int m= 12;
    ifstream archivo;
    string texto;
    archivo.open("paso_12.txt",ios::in);
    while(!archivo.eof())
    {
        getline (archivo,texto);
        cout << texto << endl;
    }
    archivo.close();

    cout << "Siguiente paso?\n yes\n no" << endl;
    string sig;
    cin >> sig;
    if(sig == "yes")
    {
        mensaje();
    }
}

void Enamorar::mensaje()
{
    int n=13;
    cout << "te resulto util?\n responde con si o no" << endl;
    string respuesta;
    cin >> respuesta;
    if(respuesta == "si"){
    cout << "sigue asi!! \n muy pronto lo lograras\n" << endl;
    }
    if(respuesta == "no"){
    cout << "no tengo la culpa de que seas feo :-)" << endl;
    }
}
void Enamorar::siguiente_paso()
{
    int *pt1=&a;
    int *pt2=&c;
    int *pt3=&d;
    int *pt4=&e;
    int *pt5=&f;
    int *pt6=&g;
    int *pt7=&h;
    int *pt8=&i;
    int *pt9=&j;
    int *pt10=&k;
    int *pt11=&l;
    int *pt12=&m;
    int *pt13=&n;
    if()
}
Enamorar::~Enamorar()
{
}
