#include <iostream>
#include <iomanip>
using namespace std;

class Calculadora{
	private:
		float primero;
		float segundo;
		
		bool comprobar() const{
			return segundo != 0.0f;
		}
		
	public:
		Calculadora(){
			primero = 0.0f;
			segundo = 0.0f;
		}
		
		void setNumeros(float a, float b){
			primero = a;
			segundo = b;
		}
		
		float getPrimero()const {
			return primero;
		}
		
		float getSegundo()const { 
			return segundo;
		}
		
		float sumar()const {
			return primero + segundo;
		}
		
		float restar()const {
			return primero - segundo;
		}
		
		float multiplicar()const {
			return primero * segundo;
		}
		
		bool dividir(float& resultado)const {
			if (comprobar()){
				resultado = primero / segundo;
				return true;
			}
			return false;
		}		
};

int main(){
	Calculadora casio;
	int opcion;
	float num1, num2, res;
	
	cout << fixed << setprecision(2);
	
	do{
		cout << endl;
		cout << "=================================\n";
		cout << "       CALCULADORA (CASIO)       \n";
        cout << "=================================\n";
        cout << "1. Ingresar / Modificar numeros\n";
        cout << "2. Ver numeros actuales\n";
        cout << "3. Sumar\n";
        cout << "4. Restar\n";
        cout << "5. Multiplicar\n";
        cout << "6. Dividir\n";
        cout << "7. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        cout << endl;
        
        switch(opcion){
        	case 1:
                cout << "Ingrese el primer numero: ";
                cin >> num1;
                cout << "Ingrese el segundo numero: ";
                cin >> num2;
                casio.setNumeros(num1, num2);
                cout << "Numeros guardados correctamente.\n";
                break;

            case 2:
                cout << "Primer numero: " << casio.getPrimero() << "\n";
                cout << "Segundo numero: " << casio.getSegundo() << "\n";
                break;

            case 3:
                cout << "Resultado de " << casio.getPrimero() << " + " << casio.getSegundo() 
                     << " = " << casio.sumar() << "\n";
                break;

            case 4:
                cout << "Resultado de " << casio.getPrimero() << " - " << casio.getSegundo() 
                     << " = " << casio.restar() << "\n";
                break;

            case 5:
                cout << "Resultado de " << casio.getPrimero() << " * " << casio.getSegundo() 
                     << " = " << casio.multiplicar() << "\n";
                break;

            case 6:
                if (casio.dividir(res)) {
                    cout << "Resultado de " << casio.getPrimero() << " / " << casio.getSegundo() 
                         << " = " << res << "\n";
                } else {
                    cout << "Error: No es posible dividir entre cero.\n";
                }
                break;

            case 7:
                cout << "Saliendo del programa...\n";
                break;

            default:
                cout << "Opcion no valida. Intente de nuevo.\n";
        }
        
	} while (opcion != 7);
		
	return 0;
}
