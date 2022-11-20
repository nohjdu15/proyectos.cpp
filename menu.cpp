#include"panta.h" 
#include"hojadevida1.h"
#include"factura2.h"
#include"funcionesejer.h"

bool formu();
int ed,an,re,np,op;
bool retorno;
main(){
	do{
		panta1();
		gt(33 ,9); co "	MENU PRINCIPAL";
		gt(35,11); co "1.	HOJA DE VIDA";
		gt(35,12); co "2.	FACTURA";
		gt(35,13); co "3.	FUNCIONES";
		gt(35,14); co "4.	BOOLEANO";
		gt(35,15); co "5.	SALIR";
		gt(35,17); co "OPCI"<<char(224)<<"N:";ci op;
		switch (op){
			case 1 : hojadevida1() ;break;
			case 2 : factura2()   ;break;
			case 3 : funcionesejer();break;
			case 4 : formu();break;
			case 5 : gt(34,20)co "HASTA LUEGO ;)";gt(1,24)exit(0);	
			default :gt(5,23)co "DIGITE DE 1 A 5 POR FAVOR:";gt(1,25)system("pause");		
  		}		
	}while(op!=5);
}	
	
bool formu(){
panta1();
gt(5,7)co "digite su edad: ";ci ed;
	if (ed>=18 && ed<=90){
		panta1();
		gt(5,9)co "Digite su a"<<char(164)<<"o de nacimiento: ";ci an;
		re=2021-an;
	}
	if(re==ed){
		gt(5,11)co "usted es mayor de edad, puede ingresar a nuestro contenido para adultos";
		gt(1,25)system("pause");
	}else{
		panta1();
		gt(5,7)co " usted digito mal su a"<<char(164)<<"o de nacimiento, su edad "<<char(162)<<" no es mayor de edad";
		gt(5,8)co "su edad es: "<<re;
		gt(5,9)co "Por lo tanto, no puede ingresar a nuestro contenido.";
		gt(1,25)system("pause");
		return false;
	}
}	

	

