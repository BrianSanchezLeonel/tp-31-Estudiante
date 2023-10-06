#include<bits/stdc++.h>
using namespace std;
class CEstudiante{
	private:
		string nombre;
		int edad;
		float calificacion;
	public:
		void setNombre(string Nombre){
			nombre = Nombre;
		}
		void setEdad(int Edad){
			edad = Edad;
		}
		void setCalificacion(float Calificacion){
			calificacion = Calificacion;
		}
		string getNombre(){
			return nombre;
		}
		int getEdad(){
			return edad;
		}
		float getCalificacion(){
			return calificacion;
		}
};
int main(){
	string Nombre;
	int Edad;
	float Calificacion;
	cout<<"Ingrese su nombre: "<<endl;
	cin>>Nombre;
	cout<<"Ingrese su edad: "<<endl;
	cin>>Edad;
	cout<<"Ingrese su calificacion: "<<endl;
	cin>>Calificacion;
	CEstudiante CLocal;
	CLocal.setNombre(Nombre);
	CLocal.setEdad(Edad);
	CLocal.setCalificacion(Calificacion);
	cout<<"Nombre: "<<CLocal.getNombre()<<endl;
	cout<<"Edad: "<<CLocal.getEdad()<<endl;
	cout<<"Calificacion: "<<CLocal.getCalificacion()<<endl;
	return 0;
}