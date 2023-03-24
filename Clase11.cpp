#include <iostream>
using namespace std;
/*struct Estudiante{
    int codigo;
    string nombre;
    int nota;

};*/
/*
struct Estudiante{
    int codigo[4];
    string nombre[4];
    int nota[4];

};
*/
struct Estudiante{
    int *codigo;
    string *nombre;
    int **nota;
};
int main(){
    Estudiante estudiante;
    int fila=0, columnas=0;
    cout<<"Cuantos estudiantes desea agregar: ";
    cin>>fila;
    cout<<"Cuantas notas por estudiante desea agregar: ";
    cin>>columnas;

    estudiante.codigo=new int[fila];
    estudiante.nombre=new string[fila];
    estudiante.nota= new int*[fila];
    for(int i=0; i<fila; i++){
        estudiante.nota[i]=new int[columnas];
    }

    cout<<"__________________________Ingreso de Notas__________________________\n";
    for(int i=0; i<fila;i++){
        cout<<"Codigo ["<<i<<"]:";
        cin>>estudiante.codigo[i];
        cin.ignore();
        cout<<"Nombre ["<<i<<"]:"<<estudiante.nombre[i]<<endl;
         //getline(cin,estudiante.nombre[i]);
        for(int x=0; x<columnas;x++){
            cout<<"Ingrese Nota["<<x<<"]:"<<*(*(estudiante.nota+i)+x);
        }
        cout<<"_____________________________________________________________"<<endl;
    }
    for(int i=0; i<fila;i++){
        delete [] estudiante.codigo;
    }
    delete [] estudiante.codigo;
    delete [] estudiante.nombre;
    delete [] estudiante.nota;

    /*for(int i=0; i<4;i++){
        cout<<"_________________________"<<endl;
        cout<<"Ingrese Codigo: ";
        cin>>estudiante.codigo[i];
        cin.ignore();
        cout<<"Ingrese nombre Completo:";
        getline(cin,estudiante.nombre[i]);
        cout<<"Ingrese Nota:";
        cin>>estudiante.nota[i];
    }


    //imprimir
    for(int i=0; i<4;i++){
        cout<<"_________________________"<<endl;
        cout<<"Codigo: "<<estudiante.codigo[i]<<endl;
        cout<<"Nombre: "<<estudiante.nombre[i]<<endl;
        cout<<"Nota: "<<estudiante.nota[i]<<endl;
    }*/
    system("pause");
}
