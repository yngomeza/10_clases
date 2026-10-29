#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Pelicula{
	private:
		string titulo;
		int duracion;
		double precio;
		
		cout << "Titulo: "; getline(cin, titulo);
		cout << "Duracion (min): "; cin >> duracion;
		cout << "Precio (S/): "; cin >> precio;
		
	public:
		Pelicula();
		
		void setTitulo(const string& nuevoTitulo);
		void setDuracion(int nuevaDuracion);
		void setPrecio(double nuevoPrecio);
		
		string getTitulo();
		int getDuracion();
		double getPrecio();
		
		void mostrarInformacion();
};

Pelicula::Pelicula(){
	titulo = "(Sin titulo)";
	duracion = 0;
	precio = 0.0;
}

void Pelicula :: setTitulo(const string& nuevoTitulo){
	titulo = nuevoTitulo;
}

void Pelicula :: setDuracion(int nuevaDuracion){
	duracion = nuevaDuracion;
}

void Pelicula :: setPrecio(double nuevoPrecio){
	precio = nuevoPrecio;
}

string Pelicula :: getTitulo(){
	return titulo;
}

int Pelicula :: getDuracion(){
	return duracion;
}

double Pelicula :: getPrecio(){
	return precio;
}

void Pelicula :: mostrarInformacion(){
	cout << "DATOS DE LA PELICULA\n";
	cout << "Titulo: " << titulo << "\n";
	cout << "Duracion: " << duracion << "min \n";
	cout << "Precio: S/ " << std::fixed << setprecision(2) << precio << '\n';
}

int main(){
	Pelicula pelicula1; 
	
	pelicula1.precio = -25;
	pelicula1.mostrarInformacion();
	
	pelicula1.setTitulo("Titanic");
	pelicula1.setDuracion(195);
	pelicula1.setPrecio(12.50);
	
	cout << "\nDespues del registro: \n";
	pelicula1.mostrarInformacion();
	
	cout << "\nConsultando mediante un getter: \n";
	cout << pelicula1.getTitulo() << "\n";
	
	return 0;
}