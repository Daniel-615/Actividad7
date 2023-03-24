#include <iostream>
using namespace std;
//metodos y funciones= ejecutan una porcion de codigo N cantidad de veces
//metodo= no retorna un tipo de dato
//funcion retorna un tipo de dato personalizado

/*int suma(int num1,int num2){
    int resultado=0;
    resultado=num1+num2;
    return resultado;
}
*/

/*int suma1(int num1,int num2,int num3){
    int resultado=0;
    resultado=num1+num2+num3;
    return resultado;
}
void suma(int num1,int num2,int num3){
    int resultado=0;
    resultado=num1+num2+num3;
    cout<<resultado;
}*/
/*int resta(int num1,int num2){
    int resultado=0;
    resultado=num1-num2;
    return resultado;
}*/

//parametros por valor
/*void suma(int num1, int num2){
    int resultado=0;
    num1+=1;
    num2+=1;
    resultado=num1+num2;
    cout<<resultado<<endl;
}*/

//parametros por referencia
/*void suma(int &num1, int &num2){
    int resultado=0;
    num1+=1;
    num2+=1;
    resultado=num1+num2;
    cout<<resultado<<endl;
} */

//prototipo
int suma(int num1,int num2,int num3);
void suma(int &num1,int &num2);
/*void suma(int num1, int num2){
    int resultado=0;
    num1+=1;
    num2+=1;
    resultado=num1+num2;
    cout<<resultado<<endl;
} */
int main(){
    //cout<<suma1(10,20,30)<<endl;
    //suma(10,20,30)<<endl;
    //cout<<suma1(10,20,30)<<endl;
    //cout<<resta(10,5)<<endl;
    int a=10; int b=20;
    suma(a,b);
    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b<<endl;

    system("pause");
}
void suma(int &num1, int &num2){
    int resultado=0;
    num1+=1;
    num2+=1;
    resultado=num1+num2;
    cout<<resultado<<endl;
}
int suma(int num1, int num2){
    int resultado=0;
    num1+=1;
    num2+=1;
    resultado=num1+num2;
    return resultado;
}
