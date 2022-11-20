#include"panta.h"
using namespace std;
#define gt(x,y) {COORD a;a.X = x; a.Y = y;SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),a);}

main(){
	int op,i;
	system("cls");
	system("color 0a");//page one
	
	for(int i=0;i<=79;i++){
	gt(i,0);cout<<"=";
	gt(i,23);cout<<"=";
	if (i<24){
		gt(0,i);cout<<"|";
		gt(80,i);cout<<"|";
	 }
	}
	gt(31,1);cout<<"~CURRICULUM VITAE~";
	gt(66,5);cout<<"JHON SEBASTIAN";
	gt(67,6);cout<<"DUCUARA MORA";
	gt(1,4);cout<<"INFORMACI"<<char(224)<<"N PERSONAL";
	gt(1,5);cout<<"TEL"<<char(144)<<"FONO: 305 797 0953";
	gt(1,6);cout<<"EMAIL: nohjdu@gmail.com";
	gt(1,7);cout<<"DIR:CALLE 2A #88-68 SUR";
	gt(1,8);cout<<"CHICO SUR";
	gt(1,9);cout<<"BOGOT"<<char(181)<<" - COLOMBIA";
	gt(32,13);cout<<"~PERFIL LABORAL~";
	gt(2,14);cout<<"Cuento con un alto grado de calidad en el trabajo, que interpreto f"<<char(160)<<"cilmente";
	gt(4.5,15);cout<<"las pol"<<char(161)<<"ticas organizacionales. Con experiencia en el sector privado de ";
	gt(3.5,16);cout<<"excelentes relaciones interpersonales y habilidad para trabajar en equipo";
	gt(4.5,17);cout<<"e individualmente. Con experiencia como asistente administrativo, me he";
	gt(2,18);cout<<"desempe"<<char(164)<<"ado en diferentes "<<char(160)<<"reas como: atenci"<<char(162)<<"n al cliente, manejo de archivo,";
	gt(6.5,19);cout<<"gesti"<<char(162)<<"n documental en f"<<char(161)<<"sico y virtual, funciones de administraci"<<char(162)<<"n,";
	gt(15,20);cout<<"supervisi"<<char(162)<<"n y coordinaci"<<char(162)<<"n en el "<<char(160)<<"rea operativa";
	gt(37,22); cout<<"pagina 1";
	gt(3,2);cout<<__TIME__;
	gt(65,2);cout<<__DATE__;
	
	gt(0,24)system("pause");
	
	system("cls");// page two
	system ("color 0e");
for(i=0;i<=79;i++){
	gt(i,0);cout<<"=";
	gt(i,23);cout<<"=";
		if (i<24){
			gt(0,i);cout<<"|";
			gt(80,i);cout<<"|";
	 			}
	}
gt(31,1);cout<<"~CURRICULUM VITAE~";
gt(4,4);cout<<"~FORMACI"<<char(224)<<"N ACADEMICA~";
gt(1,6);cout<<"-Ingenier"<<char(161)<<"a de Sistemas-";
gt(1,7);cout<<"En curso...";
gt(1,8);cout<<"UNIVERSIDAD COOPERATIVA DE COLOMBIA";
gt(1,10);cout<<"-T"<<char(130)<<"cnico en linea aviones-";
gt(1,11);cout<<"Finalizado - 2017";
gt(1,12);cout<<"CORPORACI"<<char(224)<<"N EDUCATIVA INDOAMERICANA";
gt(1,14);cout<<"-Diplomado en electrohidr"<<char(160)<<"ulica-";
gt(1,15);cout<<"Finalizado - 2017";
gt(1,16);cout<<"CORPORACI"<<char(224)<<"N EDUCATIVA INDOAMERICANA";
gt(1,18);cout<<"-Bachiller acad"<<char(130)<<"mico-";
gt(1,19);cout<<"Finalizado - 2014";
gt(1,20);cout<<"COLEGIO EDUCATIVO DON BOSCO IV";
gt(37,22);cout<<"pagina 2";
gt(54,4);cout<<"~COMPLEMENTARIOS~";
gt(52.5,5); cout<<"Curso b"<<char(160)<<"sico en Redes";
gt(46,6); cout<<"Curso en documentaci"<<char(163)<<"n aeron"<<char(160)<<"utica";
gt(52,7); cout<<"Curso de ingl"<<char(130)<<"s b"<<char(160)<<"sico";
gt(51.5,8); cout<<"Curso en bases de datos";
gt(52.5,12);cout<<"~PROGRAMAS MANEJANDOS~";
gt(52,14);cout<<"- MERCURIO";
gt(52,15);cout<<"- EXCEL";
gt(52,16);cout<<"- C++ ";
gt(52,17);cout<<"- ARANDA";
gt(52,18);cout<<"- MySQL - b"<<char(160)<<"sico";

gt(0,24)system("pause");

	system("cls");//page three
	system("color 09");
for(i=0;i<=79;i++){
	gt(i,0);cout<<"=";
	gt(i,23);cout<<"=";
		if (i<24){
			gt(0,i);cout<<"|";
			gt(80,i);cout<<"|";
	 			}
	}
	gt(31,1);cout<<"~CURRICULUM VITAE~";
	gt(4,3);cout<<"~EXPERIENCIA LABORAL~";
	gt(3,5);cout<<"GOBERNACI"<<char(224)<<"N DE CUNDINAMARCA";
 	gt(1,6);cout<<"junio 4 - diciembre 31 de 2020";
 	gt(1,7);cout<<"T"<<char(130)<<"cnico en redes y telecomunicaciones";
 	gt(1,8);cout<<"- Soporte t"<<char(130)<<"cnico a equipos de c"<<char(162)<<"mputo y red";
 	gt(1,9);cout<<"- Soporte a sistemas operativos";
 	gt(1,10);cout<<"- Control de inventarios";
 	gt(1,11);cout<<"- Configuraci"<<char(162)<<"n de equipos de red";
 	gt(1,12);cout<<"- Gesti"<<char(162)<<"n de solicitudes y requerimientos"; 
	gt(3,14);cout<<"GOBERNACI"<<char(224)<<"N DE CUNDINAMARCA";
	gt(1,15);cout<<"marzo - diciembre de 2019";
	gt(1,16);cout<<"Asistente administrativo";
	gt(1,17);cout<<"- Apoyo en el "<<char(160)<<"rea de redes";
	gt(1,18);cout<<"- Atenci"<<char(162)<<"n al cliente";
	gt(1,19);cout<<"- Manejo de software Mercurio";
	gt(1,20);cout<<"- Gesti"<<char(162)<<"n de solicitudes y requerimientos";
	gt(52,7);cout<<"~REFERENCIAS PERSONALES~";
	gt(51,10);cout<<"ANGELA MORA CASTALELLANOS";
	gt(52,11);cout<<"Concejal de Zipaquir"<<char(160);
	gt(52,12);cout<<"Tel: 300 954 00 13";
	gt(51,14);cout<<"JEISSON DUCUARA MORA";
	gt(52,15);cout<<"Ingeniero de sistemas";
	gt(52,16);cout<<"Tel: 310 274 10 31";
	
 	
 	gt(37,22);cout<<"pagina 3";
 	gt(1,24)system("pause");
 	
 	system("cls");
 	gt(35,12);cout<<"¡¡¡HASTA LUEGO!!!"; 
 	gt(39,13);cout<<" ;) ";
	gt(1,24)exit (0);
	
	 return 0;
	
	 }

