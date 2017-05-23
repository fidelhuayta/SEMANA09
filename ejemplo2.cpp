#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>

using namespace std;

class CAlumno
{
    private:
        string nombre;
        string apellido;
        int edad;
        string id;
      
    public:
    
        //declaramos el contructor con parametros
        CAlumno(string pnombre, string papellido, int pedad, string pid)
        {
            nombre =pnombre;
            apellido =papellido;
            edad =pedad;
            id =pid;
        }
        
        //constructor sin parametros
        CAlumno()
        {
            nombre="";
            apellido="";
            edad=0;
            id="";
        }
        
        //DESTRUCTOR
        ~CAlumno ()
        {
            edad =0;
        }
        //metodos de acceso
        string getNombre(){ return nombre;}
        string getApellido(){ return apellido;}
        int getEdad()  {return edad;}
        string getId(){return id;}
        
        //metodos de modificacion
        void setNombre(string value) {nombre=value;}
        void setApellido(string value) {apellido=value;}
        void setEdad(int value) {edad=value;}
        void setId(string value) {id=value;}
    
};

int main()
{
    //CAlumno pepito; forma normal de inicializar sin constructor
    CAlumno pepito("Pepe", "Quevedo", 65, "2");
    /*
    pepito.setNombre("Pepe");
    pepito.setApellido("Queveo");
    pepito.setEdad(65);
    pepito.setId("2");
    */
    
    cout<<pepito.getNombre()<<" "<<pepito.getApellido()<<endl;
    
    
    return 0;
}