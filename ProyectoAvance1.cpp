/*
Mi proyecto va a consitir en calcular el gasto de una persona x basandose en lo que gasto en la 
comida, trasportes y entretenimiento calculando al final la suma de los conceptos anteriores.
Aunque ahorita solo se le mostrara al usuario el gasto individual de cada uno.
*/
#include <iostream>
using namespace std;

//Clases 
class Comida{
	private:
		string tipo;
		float costo1;
	public:
		Comida(string,float);
		void gasto1();
};
class Trasporte{
	private:
		float distancia;
		float costo2;
	public:
		Trasporte(float,float);
		void gasto2();
};
class Entretenimiento{
	private:
		string tipo2;
		float costo3;
	public:
		Entretenimiento (string,float);
		void gasto3();
};
//Constructores
Comida::Comida(string _tipo,float _costo1){
	tipo=_tipo;
	costo1=_costo1;
}
Trasporte::Trasporte(float _distancia,float _costo2){
	distancia=_distancia;
	costo2 = _costo2;
}
Entretenimiento::Entretenimiento(string _tipo2,float _costo3){
	tipo2 = _tipo2;
	costo3 = _costo3;
}

//Acciones
void Comida::gasto1 (){
	cout<<"En gasto de comida tipo "<<tipo<<" fue de "<<costo1<<" pesos"<<endl;
}
void Trasporte::gasto2(){
	cout<<"El gasto en el recorrido de "<<distancia<<" km fue de "<<costo2<<" pesos en gasolina."<<endl;
}
void Entretenimiento::gasto3(){
	cout<<"El gasto en "<<tipo2<<" fue de "<<costo3<<" pesos"<<endl;
}
int main(){
	Comida p1("Vegetariana",120.3);
	Trasporte p2(32.4,540.6);
	Entretenimiento p3("Cine",200);
	
	p1.gasto1();
	p2.gasto2();
	p3.gasto3();
	
	return 0;
}