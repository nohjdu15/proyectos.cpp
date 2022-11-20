#include "panta.h"

main (){
	panta2();
	
	double *x,*a,*rr;
	x=new double (3.141592);
	double r;
	
	gt(5,6);co "Area del circulo";
	gt(5,7);co "AC = PI * R"<<char(253);
	gt(5, 10);co "RADIO =";ci  r;
	a=&r;
	gt(5, 11);co " a="<<*a;
	
	rr=&*a;
	gt(5, 13);co " radio al cuadrado es = "<<*rr;
	
	
	gt(24,1)return 0;	
}
