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
void inicializar_almacen();

struct articulos {
	int cod_art;
	char descripcion[35];
	int ubicacion;
	int existencias;
	int nivel_min;
	int unid_pedido_min;
	float precio;
	};
	

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
			
			printf("\n\n\n\t\t\t\tMENU ARTICULOS \n\t\t\t\t============== \n\n \t\t10-Inicializar fichero almacen.\n\n \t\t20-Alta de un articulo en almacen.\n\n \t\t30-Modificar un articulo en almacen (no implementadado).");
			printf("\n\n \t\t40-Baja de un articulo en almacen (no implementadado). \n\n\n\t\t90-VOLVER MENU ANTERIOR \n");
			printf("\n---------------------------------------------------------------------------------------------");
			printf("\nTeclee la opcion deseada:  [  ]\b\b\b"); //conseguimos meter la opccion entre llaves y mejorar el entorno visual//
			scanf(" %i",&opcion);
			
				switch(opcion)
{				
	
					case 10: 	inicializar_almacen();	break;
					case 20: 	agregar_articulos ();	break;
					case 30: 							break;
					case 40:							break;
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
	
	FILE * pfichero; //inicializar ficheo
	int contador=0, i, j;
	struct articulos vector[100];
	char opc;

	pfichero = fopen("almacen.txt", "r");
	
	if (pfichero == NULL) {
		printf("No se encuentra el fichero\n");
	
	}
		while (fscanf(pfichero, "%i %s %i %i %i %i %f", &vector[contador].cod_art, &vector[contador].descripcion, &vector[contador].ubicacion, &vector[contador].existencias, &vector[contador].nivel_min, &vector[contador].unid_pedido_min, &vector[contador].precio) != EOF)
		 {
		printf("%i %s %i %i %i %i %.2f\n", vector[contador].cod_art, vector[contador].descripcion, vector[contador].ubicacion, vector[contador].existencias, vector[contador].nivel_min, vector[contador].unid_pedido_min);
		contador++;
		}
		printf("Contador de articulos: %d\n", contador);
	fclose(pfichero);
	
	do {
		system("cls");	
		banner();
		printf("\n\t\t\t******   CAPTURA DATOS ALMACEN (ARTICULOS)      ******");  printf("         (Articulos encontrados: %d)", contador); 
			printf("\n\t\t\t------------------------------------------------------\n");		
	fflush(stdin);
			printf("\t\t\t     ------ (ESCRIBA EN MAYUSCULAS)  --------");
			printf("\n\n\t* CODIGO ARTICULO: [        ]\b\b\b\b\b\b\b\b\b"); scanf("%i", &vector[contador].cod_art);
	fflush(stdin);		
			printf("\n\t* DESCRIPCION: [                                  ]\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b"); gets(vector[contador].descripcion);
			
		
		
		for (j =0 ; j<35; j++) {
		
		if ((vector[contador].descripcion)[j] == ' ') {
			(vector[contador].descripcion)[j] = '_';
		}
		}
	
		fflush(stdin);	
		printf("\n\t\t\t\t\t\tXX_ _ _ _-->PASILLO                // Codifique la\n\t\t\t\t\t\t _ _XX_ _-->ESTANTERIA             // ubicacion usando  \n\t\t\t\t\t\t_ _ _ _XX-->FILA                   // esta regla. ");
		printf("\n\t* UBICACION: [      ]\b\b\b\b\b\b\b"); scanf("%i", &vector[contador].ubicacion);
	fflush(stdin);
		printf("\n\t* EXISTENCIAS: [      ]\b\b\b\b\b\b\b"); scanf("%i", &vector[contador].existencias);
		printf("\n\t* NIVEL MINIMO: [      ]\b\b\b\b\b\b\b");scanf("%i", &vector[contador].nivel_min);
		printf("\n\t* UNIDADES MINIMAS PARA PEDIDO: [      ]\b\b\b\b\b\b\b"); scanf("%i", &vector[contador].unid_pedido_min);
		printf("\n\t* PRECIO :[      ]\b\b\b\b\b\b\b "); scanf("%f", &vector[contador].precio);


	
	contador++;
	
	
	printf("\n\n\t\tPuse 'S' para aniadir mas registros y cualquier tecla para guardar y salir: %c");
	fflush(stdin);
	scanf("%c",&opc);
	}	
	while( opc=='S'|| opc=='s'); //Si no tecleamos "s/S" sale al menu.//
	
	
	pfichero = fopen("almacen.txt", "w");

	
	if (pfichero == NULL) {
		printf("No se ha podido crear el fichero\n");
	
	}
	

	for (i=0; i < contador; i++) {
		fprintf(pfichero, "%i %s %i %i %i %i %f\n", vector[i].cod_art, vector[i].descripcion, vector[i].ubicacion, vector[i].existencias, vector[i].nivel_min, vector[i].unid_pedido_min, vector[i].precio);// Escribo los datos en el fichero abierto
	}
	
	fclose(pfichero); // Se cierra el fichero
	
}

//(para separar procedimientos)****************************************************************************************************************************************************************


void listar_productos(){
	
	FILE *pfichero; //fichero almacen	
	int contador=0, i, j;
	struct articulos vector[100];
	
	pfichero= fopen("almacen.txt", "r");   // abrimos el fichero en modo lectura/
			if (pfichero== NULL) {
				printf("No se encuentra el fichero\n");
			
			}
	
	
	
	system("cls"); 
		printf("\t\t\t\t\t=======================================================");
		printf("\n\t\t\t\t\t******   LISTADO DE ARTICULOS REGISTRADOS       ******");
		printf("\n\t\t\t\t\t=======================================================\n\n");
		
		
		printf("COD-ART.              DESCRIPCION                       UBICACION    EXISTENCIAS   NIVEL MIN.   PEDIDO MIN.      PRECIO            \n");
		printf ("======================================================================================================================================\n\n");
		while (fscanf(pfichero, "%i %s %i %i %i %i %f", &vector[contador].cod_art, &vector[contador].descripcion, &vector[contador].ubicacion, &vector[contador].existencias, &vector[contador].nivel_min, &vector[contador].unid_pedido_min, &vector[contador].precio) != EOF)
		 {
		printf("%-8i     %-35s        %i      %8i    %8i     %8i             %-.2f    \n", vector[contador].cod_art, vector[contador].descripcion, vector[contador].ubicacion, vector[contador].existencias, vector[contador].nivel_min, vector[contador].unid_pedido_min,vector[contador].precio);
		printf ("----------------------------------------------------------------------------------------------------------------------------------\n");
		contador++;
		}
	
	
	
 
			
	fclose(pfichero); // Se cierra el fichero
	
		system("pause");

 // en estudio intentar exportar esta consulta a un fichero txt para "imprimir"
}

//(para separar procedimientos)****************************************************************************************************************************************************************
void copia_seguridad(){
	
	char letra;
	FILE *pfichero, *aux; 
	char nombre_fichero[10] ;
		    
    system("cls");
    	
	banner();
        
	printf("\n\n\n \t\tEsta funcion realiza una copia de seguridad de los datos de la aplicacion que  podra\n  ");
	printf(" \t\t ser consultada y recuperada en cualquier momento desde la propia aplicacion.\n\n\n");	
	printf("\t\t\t\t\t SUGERENCIA  \n\n\t\tPUEDE NOMBRAR EL FICHERO COPIA, CON LA FECHA Y EXTENSION *.txt: \n\n\t\t\t\t <<<< ejemplo:  23MAR20.txt >>>> \n\n\n\n");
	printf("\t\t Escriba el nombre fichero copia de seguridad:  [             ]\b\b\b\b\b\b\b\b\b\b\b\b\b\b ");
    fflush(stdin);
    
		gets(nombre_fichero);
   
	    pfichero = fopen("almacen.txt", "r"); //abrimos en modo lectura
			    if (pfichero == NULL) {
					printf("No se encuentra el fichero de datos\n");
				
			}
	    aux = fopen("auxiliar.txt", "w"); //abrimos en modo crear y escritura 
	    
	    letra=getc(pfichero);  //getc lee un solo carácter del archivo en la posición actual y aumenta el puntero de archivo "f" para leer el siguiente //
	    while (feof(pfichero)==0) // getc lee hata que encuentra el final del fichero//
	    {
	        putc(letra,aux); // funciona como getc y es equivalente a putchar escribiendo en el otro fichero caracter a carater hasta el eof.
	        
	        letra=getc(pfichero);
	    }
	 
   		fclose(pfichero); //cerramos los dos ficheros//
        fclose(aux);
    
    rename ("auxiliar.txt", ("%s",nombre_fichero)); // cambiamos el nombre "auxiliar"  por el que le hemos puesto nosotros en la variable "nombre_fichero" //
 
 printf("\n\n\n\t !!La copia de seguridad se realizo con exito con el nombre: ");
 printf ("%s !!\n\n\n",nombre_fichero);
 
 	system("pause");
		
}



//(para separar procedimientos)****************************************************************************************************************************************************************
void inicializar_almacen(){
	
	FILE * pfichero;
	int contador=0, i, j;
	struct articulos vector[100];
	char opc;

//crea el fichero txt de datos para poder hacer una carga de los mismos. BORRA LOS DATOS ANTERIORES si los hay.

	system("cls"); //borra pantalla para que no se monte un menu sobre otro//
	system ("color 0c");  //blanco sobre negro//
	
	banner();
       
    printf("\n\n\n \t\tEsta funcion inicializa el fichero de los datos de la aplicacion, los datos\n  ");
	printf(" \t\t anteriores si los hay seran borrados .\n\n\n");	
	printf("\t\t\t\t       !!!!!!   P E L I G R O    !!!!!!\n\n\t\t\t\t\t     USAR CON PRECAUCION \n\n\t\t\t\t \n\n\n\n");
	system("pause");

	system("cls"); 
	system ("color 0f");  
	banner();

		printf("\n\t\t\t******   CAPTURA DATOS ALMACEN (ARTICULOS)      ******");
		printf("\n\n\t\t\t------------------------------------------------------\n");		
	fflush(stdin);
		printf("\t\t\t------ INICIALIZANDO (ESCRIBA EN MAYUSCULAS)  --------");
		printf("\n\n\t* CODIGO ARTICULO: [        ]\b\b\b\b\b\b\b\b\b");  scanf("%i", &vector[contador].cod_art);
	fflush(stdin);		
		printf("\n\t* DESCRIPCION: [                                  ]\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b"); gets(vector[contador].descripcion);
			
			for (j =0 ; j<35; j++) {
				
				if ((vector[contador].descripcion)[j] == ' ') {
					(vector[contador].descripcion)[j] = '_';
				}
				}
		
		
		printf("\n\t\t\t\t\t\tXX_ _ _ _-->PASILLO                // Codifique la\n\t\t\t\t\t\t _ _XX_ _-->ESTANTERIA             // ubicacion usando  \n\t\t\t\t\t\t_ _ _ _XX-->FILA                   // esta regla. ");
		printf("\n\t* UBICACION: [      ]\b\b\b\b\b\b\b"); scanf("%i", &vector[contador].ubicacion);
		fflush(stdin);
		printf("\n\t* EXISTENCIAS: [      ]\b\b\b\b\b\b\b"); scanf("%i", &vector[contador].existencias);
		printf("\n\t* NIVEL MINIMO: [      ]\b\b\b\b\b\b\b");scanf("%i", &vector[contador].nivel_min);
		printf("\n\t* UNIDADES MINIMAS PARA PEDIDO: [      ]\b\b\b\b\b\b\b"); scanf("%i", &vector[contador].unid_pedido_min);
		printf("\n\t* PRECIO :[      ]\b\b\b\b\b\b\b "); scanf("%f", &vector[contador].precio);

	
	
		contador++;
	
	pfichero = fopen("almacen.txt", "w");

	
	if (pfichero == NULL) {
		printf("No se ha podido crear el fichero\n");
	
	}

	for (i=0; i < contador; i++) {
		fprintf(pfichero, "%i %s %i %i %i %i %f\n", vector[i].cod_art, vector[i].descripcion, vector[i].ubicacion, vector[i].existencias, vector[i].nivel_min, vector[i].unid_pedido_min, vector[i].precio);
	}
	
	fclose(pfichero); 
	
		system("pause");
	
	
	
					}
	
//(para separar procedimientos)****************************************************************************************************************************************************************

