#include <iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

bool comparar_cadena(char [], char []);
int longitud(char *);
void convertir_numero (int *);
bool numero_amigable(int);
int main()
{
    int opcion = 1;
    while( opcion != 0){
        cout << endl << "-----------BIENVENIDO-----------" << endl;
        cout << "1. Problema 2." << endl;
        cout << "2. Problema 3." << endl;
        cout << "3. Problema 5." << endl;
        cout << "4. Problema 7." << endl;
        cout << "5. Problema 10." << endl;
        cout << "6. Problema 11." << endl;
        cout << "7. Problema 13." << endl;
        cout << "8. Problema 14." << endl;
        cout << "9. Problema 16." << endl;
        cout << "10. Problema 17" << endl;
        cout << "Elija una opcion del menu o 0 para salir: ." << endl;
        cin >> opcion;

        switch (opcion) {
        case 0: break;
        case 1:{
            char *matriz = NULL, num = 0;
            matriz = new char [100];
            for (int i = 0; i < 100; i++){
                num = 65+rand()%(90-65);
                matriz[i] = num;
            }
            for (int i = 0; i < 100; i++){
                cout << matriz[i];
            }
            cout << endl;
            num = 'A';
            while (num <= 'Z'){
                int o = 0;
                for (int i = 0; i<100; i++){
                    if (matriz [i]== num ){
                        o++;
                    }
                }
                cout << num << " : " << o << endl;
                num ++;
            }
            delete [] matriz;
        }break;
        case 2:{
            char c1[100], c2[100];
            cout << "Ingrese la primera cadena de caracteres: " << endl;
            cin >> c1;
            cout << "Ingrese la primera cadena de caracteres: " << endl;
            cin >> c2;
            if (comparar_cadena(c1, c2)== true){
                cout << "Son iguales" << endl;
            }
            else{
                cout << "No son iguales" << endl;
            }
        }break;
        case 3:{
            int num;
            cout << "Ingrese el numero: " << endl;
            cin >> num;
            convertir_numero(&num);
            return 0;
        }break;
        case 4:{
            char c1[50], c2[25];
            int j,i;
            cout << "Ingrese una cadena de caracteres: " << endl;
            cin >> c1;
            for (i=0; *(c1+i) != '\0'; i++){
                int o = 0;
                for (j = 0; *(c2+j) != '\0'; j++){
                    if (*(c1+i) == *(c2+j)){
                        o++;
                    }
                }
                if (o == 0){
                    c2[j]= c1[i];
                }
            }
            cout << c2 << endl;
        }break;
        case 5:{
            char *roma = NULL;
            roma = new char[25];
            int i,suma=0,m=0,d=0,c=0,l=0,x=0,v=0,I=0,cm=0,cd=0,xc=0,xl=0,ix=0,iv=0;
            cout << "Ingrese el numero romano(TODAS LAS LETRAS DEBEN ESTAR EN MAYUSCULA): " << endl;
            cin >> roma;
            for (i = 0; *(roma+i) != '\0'; i++){
                if (*(roma+i) == 'M'){
                    if (m >= 3){
                        cout << "El numero romano ingresado es incorrecto. Excede el numero de M" << endl;
                        break;
                    }
                    suma += 1000;
                    m++;
                }

                else if (*(roma+i) == 'D'){
                    if (d >= 1){
                        cout << "El numero romano ingresado es incorrecto. Excede el numero de D" << endl;
                        break;
                    }
                    suma += 500;
                    d++;
                }

                else if (*(roma+i) == 'C'){
                    if (c >= 3){
                        cout << "El numero romano ingresado es incorrecto. Excede el numero de C" << endl;
                        break;
                    }
                    i++;
                    cout << *(roma+i) << endl;
                    if (*(roma+i) == 'M'){
                        if (cm >= 1){
                            cout << "El numero romano ingresado es incorrecto. Excede el numero de CM" << endl;
                            break;
                        }
                        suma += 900;
                        i++;
                        cm++;
                    }
                    else if (*(roma+i) == 'D'){
                        if (cd >= 1){
                            cout << "El numero romano ingresado es incorrecto. Excede el numero de CD" << endl;
                            break;
                        }
                        suma+=400;
                        i++;
                        cd++;}
                    else{
                        suma += 100;
                        i--;
                        c++;}
                }

                else if (*(roma+i) == 'L'){
                    if (l >= 1){
                        cout << "El numero romano ingresado es incorrecto. Excede el numero de L" << endl;
                        break;}
                    suma += 50;
                    l++;
                }

                else if (*(roma+i) == 'X'){
                    if (x >= 3){
                        cout << "El numero romano ingresado es incorrecto. Excede el numero de C" << endl;
                        break;
                    }
                    i++;
                    if (*(roma+i) == 'L'){
                        if (xl >= 1){
                            cout << "El numero romano ingresado es incorrecto. Excede el numero de XL" << endl;
                            break;
                        }
                        xl++;
                        suma += 40;
                    }
                    else if (*(roma+i) == 'C'){
                        if (xc >= 1){
                            cout << "El numero romano ingresado es incorrecto. Excede el numero de XC" << endl;
                            break;
                        }
                        xc++;
                        suma += 90;
                    }
                    else {
                     suma += 10;
                     i--;
                     x++;
                    }
                }

                else if (*(roma+i) == 'V'){
                    if (v >= 1){
                        cout << "El numero romano ingresado es incorrecto. Excede el numero de V" << endl;
                        break;
                    }
                    suma += 5;
                    v++;
                }

                else if (*(roma+i) == 'I'){
                    i++;
                    if (I >= 3){
                        cout << "El numero romano ingresado es incorrecto. Excede el numero de I" << endl;
                        break;
                    }
                    if (*(roma+i)=='X'){
                        if (ix >= 1){
                            cout << "El numero romano ingresado es incorrecto. Excede el numero de IX" << endl;
                            break;
                        }
                        suma +=9;
                        ix++;
                    }
                    else if (*(roma+i)=='V'){
                        if (iv >= 1){
                            cout << "El numero romano ingresado es incorrecto. Excede el numero de IV" << endl;
                            break;
                        }
                        iv++;
                        suma += 4;
                    }
                    else {
                        suma += 1;
                        i--;
                        I++;}
                }

                else{
                    cout << "El numero ingresado no se encuentra en las letras permitidas."<< endl;
                    break;
                }
            }
            if (*(roma+i) == '\0'){cout << suma << endl;}
            delete [] roma;
        }
        case 6:{
            char matriz[15][20] ;
            for (int i = 0; i < 15; i++){
                for (int j = 0; j < 20; j++){
                    matriz[i][j] = 0;
                }
            }
            int opcion = 1;
            while( opcion != 0){
                char letra='A';
                cout << "  ";
                for (int o = 1; o <= 20; o++ ){cout << " " << o;}
                cout << endl;
                for (int i = 0; i < 15; i++){
                    cout << letra;
                    for (int j = 0; j < 20; j++){
                        if (matriz[i][j] == 0){
                            cout << " +";
                        }
                        else if (matriz[i][j] == 1){
                            cout << " -";
                        }
                    }
                    cout << endl;
                    letra ++;
                }
                cout << endl << "----BIENVENIDO AL CINE----" << endl;
                cout << "0. Para salir." << endl;
                cout << "1. Hacer una reserva." << endl;
                cout << "2. Hacer una cancelacion." << endl;
                cout << "Ingrese una opcion del menu." << endl;
                cin >> opcion;
                switch (opcion) {
                case 0:break;
                case 1:{
                     int num,m;
                     char letra;
                     cout << "Ingrese la letra de la fila en mayuscula: " << endl;
                     cin >> letra;
                     cout << "Ingrese el numero de la columna" << endl;
                     cin >> num;
                     m = (int)(letra-65);
                     num --;
                     if (m <= 14 && num < 20){
                        if (matriz[m][num] == 0){
                            matriz[m][num]=1;
                            cout << "La reserva ha sido realizada con exito." << endl;
                        }
                        else if (matriz[m][num] == 1){
                            cout << "Este asiento ya esta reservado" << endl;
                        }
                     }
                     else {
                         cout << "La posicion indicada esta fuera del rango." << endl;
                     }
                }break;
                case 2:{
                    int num,m;
                    char letra;
                    cout << "Ingrese la letra de la fila en mayuscula: " << endl;
                    cin >> letra;
                    cout << "Ingrese el numero de la columna" << endl;
                    cin >> num;
                    m = (int)(letra-65);
                    num --;
                    if (m <= 14 && num < 20){
                       if (matriz[m][num] == 1){
                           matriz[m][num]=0;
                           cout << "La cancelacion de la reserva ha sido realizada con exito." << endl;
                       }
                       else if (matriz[m][num] == 0){
                           cout << "Este asiento esta vacio" << endl;
                       }
                    }
                    else {
                        cout << "La posicion indicada esta fuera del rango." << endl;
                    }
                }break;
                default:{cout << "La opcion ingresada no se encuentra en el menu." << endl;}

                }
            }
        }break;
        case 7:{cout << "Incompleto" << endl;}break;
        case 8:{
            int matriz[5][5], num = 0;
            for (int i = 0; i < 5; i++){
                for (int j = 0; j < 5; j++){
                    num = 1+rand()%(26-1);
                    matriz [i][j] = num;
                }
            }
            cout << "Matriz original" << endl;
            for (int i = 0; i < 5; i++){
                for (int j = 0; j < 5; j++){
                    cout << matriz [i][j]<< " ";
                }
                cout << endl;
            }
            cout << "Matriz rotada 90" << endl;
            for (int j = 4; j >= 0; j--){
                for (int i = 4; i >= 0; i--){
                    cout << matriz [i][j]<< " ";
                }
                cout << endl;
            }
            cout << "Matriz rotada 180" << endl;
            for (int i = 0; i < 5; i++){
                for (int j = 4; j >= 0; j--){
                    cout << matriz [i][j]<< " ";
                }
                cout << endl;
            }
            cout << "Matriz rotada 270" << endl;
            for (int i = 4; i >= 0; i--){
                for (int j = 0; j < 5; j++){
                    cout << matriz [i][j]<< " ";
                }
                cout << endl;
            }
        }break;
        case 9:{
            int num;
            unsigned long long int suma = 0, o = 1, p=1;
            cout << "Ingrese las dimensiones de la matriz: " << endl;
            cin >> num;
            for(int i = 1; i <= (num + num); i++){
                o *= i;
            }
            for (int i = 1; i <= num; i++){
                p *= i;
            }
            p *= 2;
            suma = o/p;
            cout << "El numero de camino es:" << suma << endl;
        }break;
        case 10:{
            int n, suma = 0;
            cout << " Ingrese el limite de la suma de los numeros amigables:" << endl;
            cin >> n;
            for (int i = n; i >= 220;i--){
                if (numero_amigable(i)==true){suma+=i;}

            }
            cout << "La suma de los numeros amigables menores a " << n << " es igual a: " << suma << endl;
        }break;
        default:{cout<< "La opcion ingresa es incorrecta" << endl;}break;
     }
   }
    return 0;
}
bool comparar_cadena (char cadena1[], char cadena2[]){
    int c = 0;
    for (int i = 0; i < longitud(cadena1); i++){
        if (cadena1[i] != cadena2[i]){c++;}
    }
    if (c==0){return true;}
    else{return false;}
}
int longitud(char *c1){
    int i, j = 0;
    for(i=0; *(c1+i) != '\0'; i++){
        j++;}
    return j;
}
void convertir_numero (int *a){
    int arreglo [50], b=0, i;
    for (i = 0; *a > 0; i++){
        b = *a % 10;
        *a = *a / 10;
        arreglo[i]=b;

    }
    i--;
    for (int j = i ; j >= 0; j--){
        cout << (char)(arreglo[j]+48);
    }
    cout << endl;
}
bool numero_amigable(int a){
    int acu1 = 0, acu2 = 0;
    for (int j = 1; j <= ((a/2)+1); j++){
        if (a%j == 0){acu1 += j;}
    }
    for (int j = 1; j <= ((acu1/2)+1); j++){
        if (acu1%j == 0){acu2 += j;}
    }
    if (acu1 == a){return false;}
    if (acu2 == a){return true;}
    else {return false;}
}
