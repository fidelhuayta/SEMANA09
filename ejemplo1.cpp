#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>

using namespace std;

//Defenicion de clase
struct TAlumno
{
    string nombre;
    string apellido;
    int edad;
    string id;
    
    void hablar()
    {
        cout<<"Mi nombre es "<<nombre<<" "<<apellido<<endl;
    }
};


int main()
{
    //declarar e inicializar
    int x=0; //declarar
    int y;
    y=10; //inicializar
    
    //declarar e inincializar
    TAlumno luan = {"luan", "Dañino", 19, "9999999"};
    TAlumno jaimito; //declarar
    //inicializar
    jaimito.nombre ="jaimito";
    jaimito.apellido="Quevedo";
    jaimito.edad =70;
    jaimito.id="1";
    
    luan.hablar();
    jaimito.hablar();
    
    
    
    return 0;
}