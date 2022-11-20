


void primeraParte(),segundaParte();
void factura(){
	
	system("cls");
	system("color 0f");
	gt(1,1); cout<<char(201);
	gt(80,1); cout<<char(187);
	gt(80,40);cout<<char(188);
	gt(1,40);cout<<char(200);
	
	for(int i=2;i<80;i++){
		gt(i,1);cout<<char(205);
		gt(i,40);cout<<char (205);
	}
	
	for(int i=2;i<40;i++){
		gt(1,i);cout<<char(186);
		gt(80,i);cout<<char(186);
	}
	primeraParte();
	segundaParte();
	gt(1,41)system("pause");
}

void primeraParte(){
	
	system("color 09");
	gt(3,2);cout<<"NOMBRE DE LA EMPRESA";
	gt(3,3);cout<<"NIT:";
	gt(3,4);cout<<"DIRECCI"<<char(224)<<"N:";
	gt(3,5);cout<<"TELEFONO:";
	gt(48,2);cout<<"FACTURA ELECTRONICA";
	gt(51,4); cout<< __TIME__;
    gt(51,3); cout<< __DATE__;
    
    gt(47,5);cout<<char(218);   //cuadro del numero de factura y credito
	gt(47,7);cout<<char(192);
	gt(59,5);cout<<char(191);
	gt(59,7);cout<<char(217);
	gt(47,9);cout<<char(192);
	gt(59,9);cout<<char(217);
	gt(72,5);cout<<char(191);
	gt(72,9);cout<<char(217);
	gt(60,7);cout<<char(194);
	gt(60,9);cout<<char(196);  
	
	for(int i=48;i<72;i++){          
		gt(i,5);cout<<char(196);
		gt(i,7);cout<<char(196);
		gt(i,9);cout<<char(196);
	}
	for(int i=6;i<9;i++){            
		gt(47,i);cout<<char(179);
		gt(72,i);cout<<char(179);   
		gt(60,i);cout<<char(179);                            //cuadro del numero de factura y credito
	}
	gt(48,6);cout<<"FACTURA NO.";
	gt(48,8);cout<<"CREDITO A:";
	
	gt(3,11);cout<<char(218);    //cuadro de facturar a:
	gt(3,13);cout<<char(192);
	gt(30,11);cout<<char(191);
	gt(30,13);cout<<char(217);
	
	for(int i=4;i<30;i++){            
		gt(i,11);cout<<char(196);
		gt(i,13);cout<<char(196);
	}
	for(int i=12;i<13;i++){          
		gt(3,i);cout<<char(179);
		gt(30,i);cout<<char(179);   //cuadro de facturar a:
	}
	gt(4,12);cout<<"FACTURAR A:";
	gt(4,14);cout<<"NOMBRE:";
	gt(4,15);cout<<"DIRECCION:";
	gt(4,16);cout<<"E-MAIL:";

	gt(47,11);cout<<char(218);    //cuadro de enviar a:
	gt(47,13);cout<<char(192);
	gt(72,11);cout<<char(191);
	gt(72,13);cout<<char(217);
	
	for(int i=48;i<72;i++){            
		gt(i,11);cout<<char(196);
		gt(i,13);cout<<char(196);
	}
	
	gt(72,12);cout<<char(179);
	gt(47,12);cout<<char(179);
	
	gt(48,12);cout<<"ENVIAR A:";
	gt(48,14);cout<<"NOMBRE:";
	gt(48,15);cout<<"DIRECCION:";
	gt(48,16);cout<<"E-MAIL:";
	gt(1,41)system("pause");
}

void segundaParte(){
	
	system("color 0A");
	gt(12,18);cout<<"DESCRIPCION";
	gt(36,18);cout<<"VR.UNITARIO";
	gt(60,18);cout<<"VR.TOTAL";
	
	gt(3,17);cout<<char(218);//las esquinas
	gt(3,35);cout<<char(192);
	gt(78,17);cout<<char(191);
	gt(78,35);cout<<char(217);
	


	for(int i=4;i<=77;i++){    //lineas horizontales
    gt(i,17);cout<<char(196);
    gt(i,19);cout<<char(196);
    gt(i,21);cout<<char(196);
    gt(i,23);cout<<char(196);
    gt(i,25);cout<<char(196);
    gt(i,27);cout<<char(196);
    gt(i,29);cout<<char(196);
    gt(i,31);cout<<char(196);
    gt(i,33);cout<<char(196);
    gt(i,35);cout<<char(196);
   	}
    for(int i=18; i<=34; i++){   //lineas verticales
    gt(3,i);cout<<char(179);
    gt(78,i);cout<<char(179);
    gt(30,i);cout<<char(179);
    gt(52,i);cout<<char(179);
    }
for(int n=19;n<=33;n+=2){
	gt(3,n);cout<<char(195);
	gt(30,n);cout<<char(197);
	gt(52,n);cout<<char(197);
	gt(78,n);cout<<char(180);
	}
	gt(30,17);cout<<char(194);
	gt(52,17);cout<<char(194);
	gt(30,35);cout<<char(193);
	gt(52,35);cout<<char(193);
	gt(48,36);cout<<"SUBTOTAL:";
	gt(48,37);cout<<"IVA:";
	gt(48,38);cout<<"TOTAL A PAGAR:";
	gt(1,41)system("pause");
}
