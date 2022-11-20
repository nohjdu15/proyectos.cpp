#include"panta.h"

void suma();
void resta();
void capturar();

int n1,n2,r;
main(){
 
suma();
resta();

	
}

void suma(){
	capturar();
	r=n1+n2;
	gt(7,12);co n1<<"  +  "<<n2<<"  =  "<<r;
	parar;
}
void resta(){
	capturar();
	r=n1-n2;
	gt(7,12);co n1<<"  -  "<<n2<<"  =  "<<r;
	parar;
}
void capturar(){
		panta2();
	gt(7,7);co "digite un numero_1:";ci n1;
	gt(7,9);co "digite un numero_2:";ci n2;
}
