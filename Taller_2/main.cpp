#include <iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

bool comparar_cadena(char [], char []);
int longitud(char *);
void convertir_numero (int *);
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
        case 10:{
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
