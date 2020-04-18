#include <stdio.h>
#include <stdlib.h> //para que pueda funcionar system


// procedimientos y funciones// 

void banner();
void m_principal(); 
void m_articulos();
void m_consultas();
void m_inventario();
void m_mantenimiento();
void agregar_articulos ();
void listar_productos();
void copia_seguridad();



struct articulos {
	char cod_art[10];
	char descripcion[25];
	char ubicacion[6];
	int existencias;
	int nivel_min;
	int unid_pedido_min;
	float precio;
	char fabricante[20];
	};
	
typedef struct articulos tarticulos;

int main()
{
/*system ("color xx"); - Esto cambia el color del fondo y el texto en la ventana de resultados.
 El primer número controla el color de fondo y
  el segundo controla el color del texto.  
0 = Negro 
1 = azul 
2 = verde 
3 = Aqua 
4 = Rojo 
5 = Púrpura 
6 = Amarillo 
7 = blanco 
8 = gris 
9 = Azul claro 
a = Luz Verde 
b = Aqua Luz 
c = Rojo 
d = luz violeta 
e =  Amarillo claro 
f = blanco brillante
*/

	system("cls"); //borra pantalla para que no se monte un menu sobre otro//
	system ("color 0f");  //blanco sobre negro//

	m_principal();
		return 0;
}
//(para separar procedimientos)****************************************************************************************************************************************************************
void banner(){ //cabecera para casi todos los menus //
	
	system("cls");
			printf("=============================================================================================");	
			printf("\n\n\t\t\t\tSOLUCIONES INFORMATICAS U. P. M. ");
			printf("\n\t\t\t\t--------------------------------");
			printf("\n\t\t\t");
			printf("\n\t\tSergio Torres Madrazo & Alejandro Tejedor Moreno (Copyright 2020) ");
			printf("\n=============================================================================================");	
}
//(para separar procedimientos)****************************************************************************************************************************************************************
void m_principal() {

	int opcion= -1; //variable para la opcion del menu articulos//  
	do{
		banner();
			
		printf("\n\n\n\t\t\t      MENU PRINCIPAL GESTION DE ALMACENES \n\t\t\t      =================================== \n\n\n\t\t10-Menu Articulos.\n\n\t\t20-Menu Consultas.");
		printf("\n\n\t\t30-Menu Inventario\n\n\t\t40-Menu Mantenimiento.\n\n\n\t\t90-SALIR DE LA APLICACION \n");
		printf("\n---------------------------------------------------------------------------------------------");
		printf("\nTeclee la opcion deseada:  [  ]\b\b\b"); //conseguimos meter la opccion entre llaves y mejorar el entorno visual//
		
		scanf(" %i",&opcion);
	
	switch(opcion){
				
		case 10: m_articulos(); break; //procediminto m_filiacion//
		case 20: m_consultas(); break; //procediminto m_consultas//
		case 30: m_inventario(); break; //procedimeniento m_inventario//
		case 40: m_mantenimiento(); break; //procedimeinto m_mantenimiento//
		}
	}
		while(opcion!=90);
			system ("color 0a"); //cambia a verde sobre negro para despedida//
			
			banner();
			
			printf("\n\n\n\t\t\t     SALIO DE LA APLICACION\n\n\n\nQue pase un buen dia ;-) \n\n\n\n");
			
		system("pause"); // paramos y pide pulsar una tecla//
		exit(0); //sale del programa //
}
//(para separar procedimientos)****************************************************************************************************************************************************************
void m_articulos (){
	int opcion= -1; //variable para la opcion del menu articulos//  
		do{
			
			banner();
			
			printf("\n\n\n\t\t\t\tMENU ARTICULOS \n\t\t\t\t============== \n\n\n \t\t10-Alta de un articulo en almacen.\n\n \t\t20-Modificar un articulo en almacen (no implementadado).");
			printf("\n\n \t\t30-Baja de un articulo en almacen (no implementadado).\n\n\n\t\t90-VOLVER MENU ANTERIOR \n");
			printf("\n---------------------------------------------------------------------------------------------");
			printf("\nTeclee la opcion deseada:  [  ]\b\b\b"); //conseguimos meter la opccion entre llaves y mejorar el entorno visual//
			scanf(" %i",&opcion);
			
				switch(opcion)
{				
	
					case 10: agregar_articulos();	break;
					case 20: 		break;
					case 30: 		break;
					
					}
	}
					while(opcion!=90);	
					m_principal(); //retorna al menu principal//
	
}
//(para separar procedimientos)****************************************************************************************************************************************************************

void m_consultas() {
	
	int opcion= -1; //variable para la opcion del menu consultas//
		do{
			banner();
			
			printf("\n\n\n\t\t\t\tMENU CONSULTAS \n\t\t\t\t============== \n\n\n \t\t10-Consulta simple por referencia (no implementadado).\n\n \t\t20-Consulta multiple (todo).");
			printf("\n\n \t\t30-Consulta multiple por descripcion (no implementadado).\n\n \t\t\n\n\n\t\t90-VOLVER MENU ANTERIOR \n");
			printf("\n---------------------------------------------------------------------------------------------");
			printf("\nTeclee la opcion deseada:  [  ]\b\b\b"); //conseguimos meter la opccion entre llaves y mejorar el entorno visual//
			scanf(" %i",&opcion);
				switch(opcion)
				{
	
					case 10: 						break;
					case 20: listar_productos();	break; 
					case 30: 						break;
					
					}
	}
					while(opcion!=90);									
					m_principal(); //retorna al menu principal//
	
}

//(para separar procedimientos)****************************************************************************************************************************************************************	
void m_inventario() {
	
	int opcion= -1; //variable para la opcion del menu inventario//
		do{
			banner();
	
			printf("\n\n\n\t\t\tMENU INVENTARIO \n\t\t\t=============== \n\n\n\t\t10-Listado de productos por ubicacion en almacen (no implementadado).\n\n \t\t20-Actualizar / modificar inventario(no implementadado) .");
			printf("\n\n \t\t30-Articulos por debajo de su nivel minimo (no implementadado).\n\n \t\t40-Pedido automatico de articulos por debajo de su nivel de inventario (no implementadado) .\n\n \t\t\n\n\n\t\t90-VOLVER MENU ANTERIOR \n");
			printf("\n---------------------------------------------------------------------------------------------");
			printf("\nTeclee la opcion deseada:  [  ]\b\b\b"); //conseguimos meter la opccion entre llaves y mejorar el entorno visual//
			scanf(" %i",&opcion);
				switch(opcion)
			{
	
					case 10: 		break;
					case 20: 		break;
					case 30: 		break;
					case 40: 		break;
					}	
	}
					while(opcion!=90);									
					m_principal();
	
}	
	
//(para separar procedimientos)****************************************************************************************************************************************************************
void m_mantenimiento() {
	
	int opcion= -1; //variable para la opcion del menu mantenimiento//
		do{
			banner();
			
			printf("\n\n\n\t\t\tMENU MANTENIMIENTO \n\t\t\t==================\n\n\n\t\t10-Copia de seguridad.\n\n \t\t20-Recuperar la aplicacion con una copia de seguridad (no implementadado).");
			printf("\n\n \t\t30-Visualizar copia de seguridad (no implementadado).\n\n \t\t\n\n\n\t\t90-VOLVER MENU ANTERIOR \n");
			printf("\n---------------------------------------------------------------------------------------------");
			printf("\nTeclee la opcion deseada:  [  ]\b\b\b"); //conseguimos meter la opccion entre llaves y mejorar el entorno visual//
			scanf(" %i",&opcion);
				switch(opcion)
			{
	
					case 10: copia_seguridad();		break;
					case 20: 						break;
				
					
					}	
	}
					while(opcion!=90);									
					m_principal();
	
}

//(para separar procedimientos)****************************************************************************************************************************************************************
void agregar_articulos (){
	
	FILE *f; //fichero almacen	
	char opc;
	
	f = fopen("almacen.txt", "a");   // abrimos el fichero para añadir datos si no existe lo crea.
	if (f == NULL) {
		printf("No se encuentra el fichero\n");
		}

	tarticulos articulos;
	do {
	system("cls"); 
 	banner();
		
		
		printf("\n\t\t\t******   CAPTURA DATOS ALMACEN (ARTICULOS)      ******");
		printf("\n\t\t\t------------------------------------------------------\n");		
	fflush(stdin);
		printf("\t\t\t------ INICIALIZANDO (ESCRIBA EN MAYUSCULAS)  --------");
		printf("\n\n\t* CODIGO ARTICULO: [        ]\b\b\b\b\b\b\b\b\b"); gets(articulos.cod_art);
	fflush(stdin);		
		printf("\n\t* DESCRIPCION: [                    ]\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b"); gets(articulos.descripcion);
		printf("\n\t\t\t\t\t\tXX_ _ _ _-->PASILLO                // Codifique la\n\t\t\t\t\t\t _ _XX_ _-->ESTANTERIA             // ubicacion usando  \n\t\t\t\t\t\t_ _ _ _XX-->FILA                   // esta regla. ");
		printf("\n\t* UBICACION: [      ]\b\b\b\b\b\b\b"); gets(articulos.ubicacion );
		fflush(stdin);
		printf("\n\t* EXISTENCIAS: [      ]\b\b\b\b\b\b\b"); scanf("%i", &articulos.existencias);
		printf("\n\t* NIVEL MINIMO: [      ]\b\b\b\b\b\b\b");scanf("%i", &articulos.nivel_min);
		printf("\n\t* PRECIO :[      ]\b\b\b\b\b\b\b "); scanf("%f", &articulos.precio);
		printf("\n\t* UNIDADES MINIMAS PARA PEDIDO: [      ]\b\b\b\b\b\b\b"); scanf("%i", &articulos.unid_pedido_min);
	fflush(stdin);		
		printf("\n\n\t* FABRICANTE/PROVEEDOR: [                    ]\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b"); gets(articulos.fabricante);
						
	fwrite(&articulos, sizeof(tarticulos),1,f);	
		
		
		
	printf("\n\n\t\tPuse 'S' para aniadir mas registros y cualquier tecla para guardar y salir: %c");
	scanf("%c",&opc);
	}while( opc=='S'|| opc=='s'); //Si no tecleamos "s/S" sale al menu.//
		
	fclose(f); // Se cierra el fichero
	
	system("pause");
	
}

//(para separar procedimientos)****************************************************************************************************************************************************************
void listar_productos(){
	
	FILE *f; //fichero almacen	
	
	
	f = fopen("almacen.txt", "r");   // abrimos el fichero en modo lectura/
	if (f == NULL) {
		printf("No se encuentra el fichero\n");
	
	}
	
	tarticulos articulos;
	
	system("cls"); 
		printf("\t\t\t\t\t=======================================================");
		printf("\n\t\t\t\t\t******   LISTADO DE ARTICULOS REGISTRADOS       ******");
		printf("\n\t\t\t\t\t=======================================================\n\n");
		
		
		printf("COD-ART.         DESCRIPCION             UBICACION    EXISTENCIAS   NIVEL MIN.   PEDIDO MIN.      PRECIO            FABRICANTE\n");
		printf ("======================================================================================================================================\n\n");
	fread(&articulos, sizeof(tarticulos),1,f); 
	while (!feof (f))

	// lee los campos del fichero y los coloca con la tabulacion a izd y dch que le indicamos para que no se pisen y queden alineados//	
{
		printf("%-13s %-26s %-8s %11i %12i %13i %15.2f %28s", articulos.cod_art, articulos.descripcion, articulos.ubicacion, articulos.existencias, articulos.nivel_min, articulos.unid_pedido_min, articulos.precio, articulos.fabricante);
		printf ("\n-------------------------------------------------------------------------------------------------------------------------------------\n");
	
	fread(&articulos, sizeof(tarticulos),1,f); 
	
	
	
} 
			
	fclose(f); // Se cierra el fichero
	
		system("pause");
}
//(para separar procedimientos)****************************************************************************************************************************************************************
void copia_seguridad()
{
	
	char letra;
	FILE *f, *aux; 
	char nombre_fichero[10] ;
		    
    system("cls");
	banner();
    
	printf("\n\n\n \t\tEsta funcion realiza una copia de seguridad de los datos de la aplicacion que  podra\n  ");
	printf(" \t\t ser consultada y recuperada en cualquier momento desde la propia aplicacion.\n\n\n");	
	printf("\t\t\t\t\t SUGERENCIA  \n\n\t\tPUEDE NOMBRAR EL FICHERO COPIA, CON LA FECHA Y EXTENSION *.txt: \n\n\t\t\t\t <<<< ejemplo:  23MAR20.txt >>>> \n\n\n\n");
	printf("\t\t Escriba el nombre fichero copia de seguridad:  [             ]\b\b\b\b\b\b\b\b\b\b\b\b\b\b ");
    fflush(stdin);
	gets(nombre_fichero);
   
    f = fopen("almacen.txt", "r"); //abrimos en modo lectura
    if (f == NULL) {
		printf("No se encuentra el fichero de datos\n");
	
}
    aux = fopen("auxiliar.txt", "w"); //abrimos en modo crear y escritura 
    
    letra=getc(f);  //getc lee un solo carácter del archivo en la posición actual y aumenta el puntero de archivo "f" para leer el siguiente //
    while (feof(f)==0) // getc lee hata que encuentra el final del fichero//
    {
        putc(letra,aux); // funciona como getc y es equivalente a putchar escribiendo en el otro fichero caracter a carater hasta el eof.
        
        letra=getc(f);
    }
 
    fclose(f); //cerramos los dos ficheros//
    fclose(aux);
    
    rename ("auxiliar.txt", ("%s",nombre_fichero)); // cambiamos el nombre "auxiliar"  por el que le hemos puesto nosotros en la variable "nombre_fichero" //
 printf("\n\n\n\t !!La copia de seguridad se realizo con exito con el nombre: ");
 printf ("%s !!\n\n\n",nombre_fichero);
 
 	system("pause");
		
}



//(para separar procedimientos)****************************************************************************************************************************************************************



//(para separar procedimientos)****************************************************************************************************************************************************************





//(para separar procedimientos)****************************************************************************************************************************************************************



