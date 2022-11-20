



void recuadro();
void datos_empresa();
void datos_compra();
void primer_panel();
void segundo_panel();
void tercer_panel();
void panel_supder();
void panel_infizq();

void factura2(){
recuadro();
datos_empresa();
datos_compra();
primer_panel();
segundo_panel();
tercer_panel();
panel_supder();
panel_infizq();
	
}

void recuadro(){
	system ("color 0A");
		gt(0,0);cout<<char(201);//superior izquierda
		gt(110,0);cout<<char(187);//superior derecha
		gt(0,29);cout<<char(200);//inferior izquierda
		gt(110,29);cout<<char(188);//inferior derecha
for(int i=1;i<=109;i++){
		gt(i,0);cout<<char(205);
		gt(i,29);cout<<char(205);
	if (i<=28){
		gt(0,i);cout<<char(186);
		gt(110,i);cout<<char(186);
		}
	}
		gt(0,29);cout<<char(200);//inferior izquierda
		gt(110,29);cout<<char(188);//inferior derecha
	gt(1,28)system("pause");
}
void datos_empresa(){
	system ("color 0E");
		gt(40,1);cout<<char(191);
		gt(1,7);cout<<char(192);
		gt(40,7);cout<<char(217);
		gt(1,1);cout<<char(218);
		gt(14,2);cout<<"~CHALLENGER~";
		gt(2,3);cout<<"CRA 7A #88-68";
		gt(2,4);cout<<"TEL: 300 515 1491";
		gt(2,5);cout<<"NIT 1102042436-9";
		gt(2,6);cout<<"BOGOT"<<char(181),cout<<" - COLOMBIA";
	for(int i=2;i<=39;i++){
		gt(i,1);cout<<char(196);
		gt(i,7);cout<<char(196);
	if (i<=6){
		gt(1,i);cout<<char(179);
		gt(40,i);cout<<char(179);
		}
	}
	gt(1,28)system("pause");
}
void datos_compra(){
	system ("color 09");
		gt(1,8);cout<<char(218);
		gt(109,8);cout<<char(191);
//for para divisiones horizontales
for(int i=2;i<=108;i++){
	for(int n=8;n<=22;n+=2){
		gt(i,n);cout<<char(196);
	}
//condicional para divisiones verticales

	if (i>=9 & i<22){
		gt(1,i);cout<<char(179);
		}
	if (i>=9 & i<29){
		gt(109,i);cout<<char(179);
		}
	if(i>65 & i<109){
	gt(i,24)cout<<char(196);
	gt(i,26)cout<<char(196);
	gt(i,28)cout<<char(196);
}
	}
//for para "T" que unen divisiones horizontales
for(int n=10;n<=20;n+=2){
		gt(1,n);cout<<char(195);
	}
for(int n=10;n<=26;n+=2){
		gt(109,n);cout<<char(180);
	}
		gt(1,22);cout<<char(192);
		gt(1,28)system("pause");
}
void primer_panel(){
	system ("color 03");
		gt(50,8);cout<<char(194);
		gt(50,22);cout<<char(193);
for(int i=9;i<=21;i++){
		gt(50,i);cout<<char(179);
	}
for(int n=10;n<=20;n+=2){
		gt(50,n);cout<<char(197);
	}
	gt(19,9)cout<<"DESCRIPCI"<<char(224)<<"N";
	gt(1,28)system("pause");
}
void segundo_panel(){
	system ("color 05");
		gt(65,8);cout<<char(194);//marco
		gt(65,28);cout<<char(192);//marco	
for(int i=9;i<=27;i++){
		gt(65,i);cout<<char(179);
	}
for(int n=10;n<=22;n+=2){
		gt(65,n);cout<<char(197);
	}
		gt(65,28);cout<<char(192);//marco
		gt(65,24);cout<<char(195);//marco
		gt(65,26);cout<<char(195);//marco
		gt(54,9);cout<<"CANTIDAD";
		gt(66,23);cout<<"SUBTOTAL:";
		gt(66,25);cout<<"IVA:";
		gt(66,27);cout<<"TOTAL:";
		gt(1,28)system("pause");
}
void tercer_panel(){
	system ("color 0c");
		gt(87,8);cout<<char(194);
		gt(87,22);cout<<char(193);
for(int i=9;i<=27;i++){
		gt(87,i);cout<<char(179);
	}
for(int n=10;n<=26;n+=2){	
		gt(87,n);cout<<char(197);
	}
	gt(87,28);cout<<char(193);//marco
	gt(109,28);cout<<char(217);//marco
	gt(69,9);cout<<"PRECIO UNITARIO";
	gt(92,9);cout<<"PRECIO TOTAL";
	gt(1,28)system("pause");
}
void panel_supder(){
	system ("color 0A");
		gt(109,1);cout<<char(191);
		gt(45,7);cout<<char(192);
		gt(109,7);cout<<char(217);
		gt(45,1);cout<<char(218);
for(int i=46;i<=108;i++){
		gt(i,1);cout<<char(196);
		gt(i,7);cout<<char(196);
		gt(i,3);cout<<char(196);
		gt(i,5);cout<<char(196);
	}
for(int i=2;i<=6;i++){
		gt(45,i)cout<<char(179);
		gt(109,i)cout<<char(179);

	}
for(int n=3;n<=5;n+=2){//for para uiones horizontales
		gt(45,n);cout<<char(195);
		gt(109,n);cout<<char(180);
		}
for(int i=2;i<=6;i++){
		gt(92,i);cout<<char(179);
	}
		gt(92,1);cout<<char(194);
		gt(92,3);cout<<char(197);
		gt(92,5);cout<<char(197);		
		gt(92,7);cout<<char(193);			
		gt(93,2);cout<<__DATE__;
		gt(93,4);cout<<"NIT:";
		gt(93,6);cout<<"TEL:";
		gt(46,2);cout<<"NUMERO DE FACTURA:";
		gt(46,4);cout<<"CLIENTE:";
		gt(46,6);cout<<"DIR:";
		gt(1,28)system("pause");
}
void panel_infizq(){
	system ("color 06");
		gt(64,23);cout<<char(191);
		gt(1,27);cout<<char(192);
		gt(64,27);cout<<char(217);
		gt(1,23);cout<<char(218);
for(int i=24;i<=26;i++){
		gt(1,i);cout<<char(179);
		gt(64,i);cout<<char(179);
	}
for(int i=2;i<=63;i++){
	gt(i,23);cout<<char(196);
	gt(i,25);cout<<char(196);
	gt(i,27);cout<<char(196);
	}
	gt(1,25);cout<<char(195);
	gt(64,25);cout<<char(180);
	gt(15,26);cout<<"""GRACIAS POR CONFIAR EN NOSOTROS...""";
	gt(2,24);cout<<"VENDIDO POR:";
	gt(1,28)system("pause");
}
