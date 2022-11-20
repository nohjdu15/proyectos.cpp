#include<iostream>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>
#include <iomanip>
#include<string>
#include<math.h>
#include"panta.h"
//   FUNCIONES
void suma(float n1,float n2,float r);void resta();
int multi();int fibo(int x=0,int y=1,int z=1);
float divi();float inver(float r,float n1);
char mayus();char invertir(char invert[20]);
double raiz();double arvo(double pi,double rd);
string can();string concat(string cc1,string cc2);
float n1,n2,r;
double d1,rd,rr,pi;
int n,x,y,z,o,f,s,opc;
char op1,invert[20],caracter;
string nn,cc1,cc2;
main(){
do{
	panta1();
	gt(33,7); co "MEN"<<char(233)<<" FUNCIONES";
	gt(30,9); co "1.  SUMA";
	gt(30,10); co "2.  RESTA";
	gt(30,11); co "3.  MULTIPLICACI"<<char(224)<<"N";
	gt(30,12); co "4.  SERIE FIBONACCI";
	gt(30,13); co "5.  DIVISI"<<char(224)<<"N";
	gt(30,14); co "6.  INVERSO MULTIPLICATIVO";
	gt(30,15); co "7.  min"<<char(163)<<"scula a MAY"<<char(233)<<"SCULA";
	gt(30,16); co "8.  INVERTIR PALABRA";
	gt(30,17); co "9.  RA"<<char(214)<<"Z DE UN NUMERO";	
	gt(30,18); co "10.  "<<char(181)<<"REA Y VOLUMEN DE UNA ESFERA";
	gt(30,19); co "11.  CANTIDAD DE CARACTERES";
	gt(30,20); co "12.  CONCATENACI"<<char(224)<<"N";
	gt(30,21); co "13.  SALIR DEL PROGRAMA";
	gt(33,23); co "OPCI"<<char(224)<<"N:";ci opc;
		switch(opc){
			case 1:   suma(n1,n2,r);break;
			case 2:   resta();break;
			case 3:   multi();break;
			case 4:   fibo(x,y,z);break;
			case 5:   divi();break;
			case 6:   inver(r,n1);break;
			case 7:   mayus();break;
			case 8:   invertir(invert);break;
			case 9:   raiz();break;
			case 10:  arvo(pi,rd);break;  
			case 11:  can();break;
			case 12:  concat(cc1,cc2);break;
			case 13: break;
			default : system("cls");gt(25,15);co "DIGITE DE 1 A 9 "<<char(162)<<" DE 'a' A 'c'"; gt(1,25)system("pause");system("cls");
		}
   }while(opc!=13);
}

void suma(float n1,float n2,float r){       //FUNCIÓN VOID CON PARAMETROS 1.1
	panta1();
		gt(5,7)co "Digite la cantidad de sumas que desea realizar:  ";cin>>  n;
for(int i=1;i<=n;i++){
		gt(30,9)co " ";
		gt(31,11)co " ";
		gt(5,9)co "Digite el primer n"<<char(163)<<"mero: "; cin>> n1;
		gt(5,11)co "Digite el segundo n"<<char(163)<<"mero: "; cin>> n2;
		r=n1+n2;
		gt(7,14+i);co i<<")	"<< n1<<"  +  "<<n2<<"  =  "<<r;
	parar;
	}
}
void resta(){                               //FUNCIÓN VOID SIN PARAMETROS 1.2
	panta1();
		gt(5,7)co "Digite la cantidad de restas que desea realizar:  ";cin>>  n;
	for(int i=1;i<=n;i++){
		gt(30,9)co " ";
		gt(31,11)co " ";
		gt(5,9)co "Digite el primer n"<<char(163)<<"mero: "; cin>> n1;
		gt(5,11)co "Digite el segundo n"<<char(163)<<"mero: "; cin>> n2;
		r=n1-n2;
		gt(7,13+i);co i<<") "<< n1<<"  -  "<<n2<<"  =  "<<r;
	parar;
	}
}
int multi(){                                //FUNCIÓN INT SIN PARAMETROS
	system("cls");
	panta1();
	gt(5,7)co "Digite la cantidad de multiplicaciones que desea realizar:  ";cin>>  n;
	for(int i=1;i<=n;i++){
	gt(30,9)co " ";
	gt(31,11)co " ";
	gt(5,9)co "Digite el primer n"<<char(163)<<"mero: "; cin>> n1;
	gt(5,11)co "Digite el segundo n"<<char(163)<<"mero: "; cin>> n2;
	r=n1*n2;
	gt(7,13+i);co i<<") "<< n1<<"  *  "<<n2<<"  =  "<<r;
	parar;
	}
}
int fibo(int x,int y,int z){                //FUNCIÓN INT CON PARAMETROS
	panta1();
	x=0;y=1;z=1;
	gt(5,7)co "Digite la cantidad de series fibonacci que desea ver:  ";cin>>  o;
	for(int i=1;i<=o;i++){
		z=x+y;
		x=y;
		y=z;
		if(i>14){
		s++;
		gt(20,9+s)co "serie "<<i<<") "<<z;
		}else{
		gt(5,9+i)co "serie "<<i<<") "<<z;
		}
	}
	gt(1,25)system("pause");
}
float divi(){                               //FUNCIÓN FLOAT SIN PARAMETROS
	panta1();
		gt(5,7)co "Digite la cantidad de divisiones que desea realizar:  ";cin>>  n;
	for(int i=1;i<=n;i++){
		gt(30,9)co " ";
		gt(31,11)co " ";
		gt(5,9)co "Digite el primer n"<<char(163)<<"mero: "; cin>> n1;
		gt(5,11)co "Digite el segundo n"<<char(163)<<"mero: "; cin>> n2;
		r=n1/n2;
		gt(7,13+i);co i<<") "<< n1<<"  /  "<<n2<<"  =  "<<fixed<<setprecision(4)<<r;
	parar;
	}
}
float inver(float r,float n1){              //FUNCIÓN FLOAT CON PARAMETROS 
	panta1();
	gt(3,7)co "Digite la cantidad de inversos multiplicativos que desea realizar:  ";cin>>  n;
	for(int i=1;i<=n;i++){
	gt(30,9)co " ";	
	gt(3,9)co "El inverso multiplicativo es 1/x valor";
	gt(25,10)co " ";
	gt(3,10)co "Digite el valor de x: "; cin>> n1;
	r=1/n1;
	gt(3,11+i)co i<<") "<<" EL INVERSO DE: "<<n1<<" ES: "<<fixed<<setprecision(2)<<r;
}
gt(1,25)system("pause");
}
char mayus(){                               //FUNCIÓN CHAR SIN PARTAMETROS
do{
	s++;
	char  m;
	gt(3,7)co "Digite la letra que desea convertir a MAY"<<char(233)<<"SCULA: ";cin>>m;
	m= toupper(m);
	gt(5,9+s)co "Su letra en may"<<char(163)<<"scula es: "<<m;
	gt(52,7)co " ";
	gt(1,25)cout<<char(168)<<"Desea regresar al men"<<char(163)<<"? 'S' o 'N' ";ci op1;
}while(op1=='n' || op1== 'N');
}
char invertir(char invert[20]){             //FUNCIÓN CHAR CON PARAMETROS
	panta1();
do{
	gt(2,23)co "                                                  ";
	gt(3,9)co "             ";
	gt(3,10)co "             ";
	gt(3,7)co "Digite la palabra que desea invertir ";cin>>invert;
	gt(40,7)co "             ";
	gt(3,9)co invert;
	strrev(invert);
	gt(3,10)co invert;
gt(1,25)cout<<char(168)<<"Desea regresar al men"<<char(163)<<"? 'S' o 'N' ";ci op1;
}while(op1=='n' || op1== 'N');
}
double raiz(){                              //FUNCIÓN DOUBLE SIN PARAMETROS
		panta1();
		gt(5,7)co "Digite la cantidad de ra"<<char(161)<<"ces que desea realizar:  ";cin>>  n;
for(int i=1;i<=n;i++){
		gt(5,9)co "Digite el n"<<char(163)<<"mero del cual desea saber su ra"<<char(161)<<"z: "; cin>> d1;
		rd=sqrt(d1);
		gt(7,14+i);co i<<")	"<<"la ra"<<char(161)<<"z de "<<d1<<" es: "<<fixed<<setprecision(8)<<rd;
		gt(52,9)co "               ";
	}
	parar;
}
double arvo(double pi,double rd){           //FUNCIÓN DOUBLE CON PARAMETROS
	panta1();
	gt(5,7)co "La ecuaci"<<char(162)<<"n de el area de una esfera es 4*pi*r"<<char(253);
	pi=3.14159265;
	gt(5,9)co "Digite el radio de la circunferencia: ";cin>>rr;
	rd=4*pi*(rr * rr);
	gt(5,11)co "El "<<char(160)<<"rea de la esfera es: "<<fixed<<setprecision(10)<<rd;
    rd=0;
    gt(5,13)co "La ecuaci"<<char(162)<<"n de el volumen de una esfera es (4*pi*r"<<char(253)<<")/3";
    rd=(4*pi*(rr * rr))/3;
    gt(5,15)co "Y su volumen es de: "<<fixed<<setprecision(10)<<rd;
	gt(1,25)system("pause");
}
string can(){
	panta1();
	gt(5,7)co "Digite una palabra para saber su cantidad de caracteres: ";ci nn;
	gt(5,8)co "La cantidad de caracteres es:"<<nn.length();
	gt(1,25)system("pause");
}
string concat(string cc1,string cc2){
	panta1();
	gt(5,7)co "Digite una palabra";ci cc1;
	gt(5,8)co "Digite una palabra";ci cc2;
	gt(5,9)co "La frase es: "<<cc1<<" "<<cc2;
	gt(5,10)co "La frase es: "<<cc1+cc2;
	gt(1,25)system("pause");
}


