#include"panta.h"

void suma(float n1,float n2, float r);
void divi(float n1,float n2, float r);
float fil=10,a,b,nu;
main(){
	panta2();
	/*
	suma(2,6,8);
	suma(-4,4,0);
	suma(1,1,0);
	suma(2,-9,8);*/
	gt(5,5)co "numero de operaciones";ci nu;
	for(int i=1;i<=nu;i++){
	gt(7,7);co "digite un numero_1:";ci a;
	gt(7,9);co "digite un numero_2:";ci b;
	suma(a,b,0);
	divi(a,b,0);
	
}
	parar;
}
void suma(float n1,float n2, float r){
	
	r=n1+n2;
	gt(7,fil);co n1<<"  +  "<<n2<<"  =  "<<r;
	fil++;
	
}
void divi(float n1,float n2, float r){
	r=n1/n2;
	gt(7,fil);co n1<<"  /  "<<n2<<"  =  "<<r;
	fil++;
}

