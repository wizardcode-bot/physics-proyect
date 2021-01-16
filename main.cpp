#include<iostream>
#include<windows.h>
#include<math.h>
#include<iomanip>
#include<stdlib.h>
#include<locale.h>

using namespace std;

void menu();
void firstcase();
void secondcase();
void thirdcase();
void fourthcase();
void formulas();

int main(){
	setlocale(LC_ALL, "spanish");

	int op;

	do{
		 menu();
		 cin>>op;
		 switch(op){
	case 1: system("cls");
	firstcase();
	break;
	case 2: system("cls");
	formulas();
	secondcase();
	break;
	case 3: system("cls");
	formulas();
	thirdcase();
	break;
	case 4: system("cls");
	formulas();
	fourthcase();
	}
	}while(op!=0);

	cout<<"\n";
    system("pause");
    return 0;
}

void menu(){
	
	system("cls");
	cout<<"\n\t\t\t  ____________________________"<<endl;
	cout<<"\n\t\t\t\t  MENU PRINCIPAL		"<<endl;
	cout<<"\n\t\t\t  ____________________________"<<endl;
	cout<<"\n\t\t\t  1. Que es la Energia Mecanica?"<<endl;
	cout<<"\n\t\t\t  2. Energia Mecanica en A y B"<<endl;
	cout<<"\n\t\t\t  3. Energia Mecanica en A y C"<<endl;
	cout<<"\n\t\t\t  4. Energia Mecanica en A y D"<<endl;
	cout<<"\n\t\t\t  0. Salir"<<endl;
	cout<<"\n\t\t\t  ____________________________";
	cout<<"\n\n\t\t\t  Elija una opcion: ";
}

void secondcase(){
	float g=0;
	float ha=0,Vb=0,hc=0,Vc=0,res=0,hd=0;

	cout<<"\n                                            \t\t\t|";
	cout<<"\n\tEnergia Mecanica en A y B: U(a) + K(a) = U(b) + K(b)    |";
	cout<<"\n                                            \t\t\t|";
	cout<<"\n\tU(a)= m.g.h(a)		K(a)= 0                         |";
	cout<<"\n                                            \t\t\t|";
	cout<<"\n\tU(b)= 0			K(b)= 1/2.m.V(b)^2              |";
	cout<<"\n                                            \t\t\t|";
	cout<<"\n________________________________________________________________|"<<endl;

	cout<<"\t";
	cout<<"\n\n\tSustituimos los valores:";
	cout<<"\n\n\tU(a) = K(b)";
	cout<<"\n\n\n\tm.g.h(a) =  1/2.m.V(b)^2 --------->  g.h(a) =  1/2V(b)^2"<<endl;//se cancelan las m
	cout<<"\n\n\t2.g.h(a) = V(b)^2"<<endl;// el 2 que estaba dividiendo para a multiplicar
	cout<<"\n\n\tV(b) = (sqrt(2.g.h(a)))"<<endl;// el exponente se vuelve raiz cuadrada
	cout<<"\n\n\tDigite el valor de la gravedad(g): "; cin>>g;
	cout<<"\n\n\tDigite la altura en (a) en metros (h(a)): "; cin>>ha;
	cout<<"\n\n\tV(b)= (sqrt(2."<<g<<"m/s^2."<<ha<<"m""))";
	Vb = (sqrt(2*g*ha));
	cout<<"\n\n\n\tV(b)= "<<fixed<<setprecision(2)<<Vb<<"m/s"<<endl;

	cout<<"\n";
	system("pause");
}

void thirdcase(){
	float g=0;
	float ha=0,Vb=0,hc=0,Vc=0,res=0,hd=0;

	cout<<"\n                                          \t\t\t|";
	cout<<"\n\tEnergia Mecanica en A y C: U(a) + K(a) = U(c) + K(c)    |";
	cout<<"\n                                          \t\t\t|";
	cout<<"\n\tU(a)= m.g.h(a)		K(a)= 0                         |";
	cout<<"\n                                          \t\t\t|";
	cout<<"\n\tU(c)= m.g.h(c)		K(c)= 1/2.m.V(c)^2              |";
	cout<<"\n                                          \t\t\t|";
	cout<<"\n________________________________________________________________|"<<endl;

	cout<<"\t";
	cout<<"\n\n\tSustituimos los valores:";
	cout<<"\n\n\tU(a) = U(c) + K(c)";
	cout<<"\n\n\n\tm.g.h(a) =  m.g.h(c) + 1/2.m.V(c)^2";
	cout<<"\n\n\n\tm.g.h(a) =  m(g.h(c) + 1/2.V(c)^2)";//se factoriza la m en c
	cout<<"\n\n\n\tg.h(a) =  g.h(c) + 1/2.V(c)^2";//se eliminan a ambos lados la m que se esta multiplicando
	cout<<"\n\n\n\tg.h(a) - g.h(c) = 1/2.V(c)^2";//despejando V(c)
	cout<<"\n\n\n\tg(h(a)-h(c)) = 1/2.V(c)^2";//se factoriza g
	cout<<"\n\n\n\t2g(h(a)-h(c)) = V(c)^2";//se pasa el 2 que estaba dividiendo a multiplicar
	cout<<"\n\n\tV(c) = (sqrt(2g(h(a)-h(c))))"<<endl;
	cout<<"\n\n\tDigite el valor de la gravedad(g): "; cin>>g;
	cout<<"\n\n\tDigite la altura en (a) en metros (h(a)): "; cin>>ha;
	cout<<"\n\n\tDigite la altura en (c) en metros (h(c)): "; cin>>hc;
	cout<<"\n\n\tV(c)= (sqrt(2."<<g<<"m/s^2.("<<ha<<"m-"<<hc<<"m)))";
	res = (ha-hc);
	Vc = (sqrt(2*g*res));
	cout<<"\n\n\n\tV(c)= "<<fixed<<setprecision(2)<<Vc<<"m/s"<<endl;

	cout<<"\n";
	system("pause");
}

void fourthcase(){
	float g=0;
	float ha=0,Vb=0,hc=0,Vc=0,res=0,hd=0,Vd=0;

	cout<<"\n                                            \t\t\t|";
	cout<<"\n\tEnergia Mecanica en A y D: U(a) + K(a) = U(d) + K(d)    |";
	cout<<"\n                                            \t\t\t|";
	cout<<"\n\tU(a)= m.g.h(a)		K(a)= 0                         |";
	cout<<"\n                                            \t\t\t|";
	cout<<"\n\tU(d)= m.g.h(d)		K(d)= 1/2.m.V(d)^2              |";
	cout<<"\n                                            \t\t\t|";
	cout<<"\n________________________________________________________________|"<<endl;

	cout<<"\t";
	cout<<"\n\n\tSustituimos los valores:";
	cout<<"\n\n\tU(a) = U(d) + K(d)";
	cout<<"\n\n\n\tm.g.h(a) =  m.g.h(d) + 1/2.m.V(d)^2";
	cout<<"\n\n\n\tm.g.h(a) =  m(g.h(d) + 1/2.V(d)^2)";//se factoriza la m en c
	cout<<"\n\n\n\tg.h(a) =  g.h(d) + 1/2.V(d)^2";//se eliminan a ambos lados la m que se esta multiplicando
	cout<<"\n\n\n\tg.h(a) - g.h(d) = 1/2.V(d)^2";//despejando V(c)
	cout<<"\n\n\n\tg(h(a)-h(d)) = 1/2.V(d)^2";//se factoriza g
	cout<<"\n\n\n\t2g(h(a)-h(d)) = V(d)^2";//se pasa el 2 que estaba dividiendo a multiplicar
	cout<<"\n\n\tV(d) = (sqrt(2g(h(a)-h(d))))"<<endl;
	cout<<"\n\n\tDigite el valor de la gravedad(g): "; cin>>g;
	cout<<"\n\n\tDigite la altura en (a) en metros (h(a)): "; cin>>ha;
	cout<<"\n\n\tDigite la altura en (d) en metros (h(d)): "; cin>>hd;
	cout<<"\n\n\tV(d)= (sqrt(2."<<g<<"m/s^2.("<<ha<<"m-"<<hd<<"m)))";
	res = (ha-hd);
	Vd = (sqrt(2*g*res));
	cout<<"\n\n\n\tV(d)= "<<fixed<<setprecision(2)<<Vd<<"m/s"<<endl;

	cout<<"\n";
	system("pause");
}

void formulas(){
	cout<<"		\t	\t	\t	\t	\t	\t  \t   \t    \t    	\t	\t	\t  \t|";
	cout<<"\n\tFormula de la Energia Potencial(U): m.g.h    \t        |";
	cout<<"\n\t	\t	\t	\t	\t	\t	\t  \t 	 \t    \t   	\t	\t	\t  \t|";
	cout<<"\n\tFormula de la Energia Cinetica(K): 1/2.m.V^2 \t        |";
	cout<<"\n\t	\t	\t	\t	\t	\t	\t  \t  \t   \t   \t   \t	\t	\t  \t|";
	cout<<"\n\tFormula de la Energia Mecanica(E): U + K     \t        |";
	cout<<"\n\t	\t	\t	\t	\t	\t	\t  \t  \t   \t   \t  \t	\t	\t  \t|"; 
	cout<<"\n________________________________________________________________|";
}

void firstcase(){
	int fracciones[2] = {1,2};

	cout<<"\n\t\t\t\t\t\tENERGIA MECANICA";
	cout<<"\n\n\t\tLa energia mecanica es la capacidad en que un cuerpo genera un movimiento,"; 
	cout<<"\n\t\tcomo conoces en muchos lugares como un tobogan, cuando llega el punto";
	cout<<"\n\t\tmas alto tendra la energia potencial en su punto maximo pero la cinetica 0,";
	cout<<"\n\t\tpero cuando la persona empiece a descender por el tobogan";
	cout<<"\n\t\tdisminuira su energia pontencial y toda esa energia perdida se convertira ";
	cout<<"\n\t\ten cinetica.";
	cout<<"\n\n\t\tLa Energia mecanica es la suma entre la energia cinetica y potencial, "; 
	cout<<"\n\t\t(es la energia que lleva por velocidad).";
	cout<<"\n\n\t\tEM = Ep + Ec";

	cout<<"\n\n\n\n\t\t\t\t\t\tENERGIA CINETICA";
	cout<<"\n\n\t\tEs la energia que posee un cuerpo a causa de su movivmiento.";
	cout<<"\n\n\t\tSe trata de la capacidad o trabajo que permite que un objeto pase de estar ";
	cout<<"\n\t\ten reposo, o quieto, a moverse a una determinada velocidad. ";
	cout<<"\n\n\t\tLa energia cinetica de un cuerpo esta determinada por la velocidad que tenga este";
	cout<<"\n\t\ty su masa. La formula es:"<<endl;
	cout<<"\n\t\t"<<" "<<fracciones[0];
	cout<<"\n\t\t___"<<" mv^2";
	cout<<"\n\t\t"<<" "<<fracciones[1];
	cout<<"\n\n\t\tLa energia cinetica es igual a un medio del producto entre la masa";
	cout<<"\n\t\ty el cuadrado de la velocidad";

	
	cout<<"\n\n\n\n\t\t\t\t\t\tENERGIA POTENCIAL";
	cout<<"\n\n\t\tEs la energia poseida por la atraccion de la tierra hacia un objeto.";
	cout<<"\n\t\tCuanto mas elevado, mas posee. Sin embargo no es la unica, puede ser la";
	cout<<"\n\t\tenergia gravitacional que tenga por la interaccion con otro objeto muy grande.";
	cout<<"\n\n\t\tLa energia potencial esta vinculada a la posicion de los cuerpos.";
	cout<<"\n\t\tDepende de la altura, como se muestra en la siguiente formula:";
	cout<<"\n\n\t\tEp = m.g.h";
	cout<<"\n\n\t\tLa energia potencia es igual a la masa del cuerpo multiplicada por la gravedad";
	cout<<"\n\t\ty por la altura a al que se encuentra desde un centro de referencia.";

	cout<<"\n\n\n";
	system("pause");
}