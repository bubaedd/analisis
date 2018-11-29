//
//  main.cpp
//  Fibonacci
//
//  Created by Eduardo Osorio Venegas on 11/23/18.
//  Copyright © 2018 Eduardo Osorio Venegas. All rights reserved.
//
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
using namespace std;


long long r_fibonacci(long long n)
{
    if(n == 0 || n == 1)
        return n;
    else
        return (r_fibonacci(n - 1) + r_fibonacci(n - 2));
}

long long l_fibonacci(long long n){
    long long x=0,y=1,z=1;

    if(n == 0)
        return n;
    if(n == 1 || n == 2)
        return 1;

    for(long long i= 1; i<n; i++){
        z = x+y;
        x = y;
        y = z;
    }
    return z;
}

int main(){

    long long n=0, option=0;
    clock_t start, end;
    double cpu_time_used;

    while (option < 3){

        cout << "===> TRABAJO 1 ANALISIS <===" << endl << endl ;
        cout << "* * * * * * MENU DEL PROGRAMA * * * * * *" << endl << endl;
        cout << "OPCION 1) FIBONACCI RECURSIVO" << endl;
        cout << "OPCION 2) FIBONACCI LINEAL" << endl;
        cout << "OPCION 3) SALIR DEL PROGRAMA" << endl << endl ;
        cout << "DIGITE UNA OPCION ======> ";
        cin >> option;

        switch (option) {
            case 1:
                system("cls");
                start = clock();
                cout << "NUMERO A EVALUAR EN FIBONACCI ===> ";
                cin >> n;
                for (long long i=0; i<=n; i++){
                    cout << "SECUENCIA FIBONACCI RECURSIVO " << i << " es ===> " << r_fibonacci(i) << endl;
                }
                cout << "TOTAL FIBONACCI RECURSIVO: " << r_fibonacci(n) << endl << endl << endl ;
                end = clock();
                cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
                cout<<cpu_time_used<<" segundos"<<endl;
                system("pause");
                system("cls");
                break;

            case 2:
                system("cls");
                start = clock();
                cout << "NUMERO A EVALUAR EN FIBONACCI ===> ";
                cin >> n;
                for (long long i=0; i<=n; i++){
                    cout << "SECUENCIA FIBONACCI lineal " << i << " es ===> " << l_fibonacci(i) << endl;
                }
                cout << "TOTAL FIBONACCI LINEAL: " << l_fibonacci(n) << endl;
                end = clock();
                cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
                cout<<cpu_time_used<<" segundos"<<endl;
                system("pause");
                system("cls");
                break;

            case 3:
            		system("cls");
                cout << "SALIR DEL PROGRAMA" << endl;
                system("pause");
                system("cls");
                break;


            default:
                system("cls");
                	if (option < 1 ){
                    cout << "ESTE NUMERO NO ES VALIDO";
                }
                system("pause");
                system("cls");
                break;
        }
    }
}
