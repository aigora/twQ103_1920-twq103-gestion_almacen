#include <stdio.h>
#include <stdlib.h>
#define NA 100 // Numero maximo de articulos a almacenar de nuetro vector de articulos ***se puede cambiar.
#define USUARIO "UPM"    // usuario se puede cambiar
#define CLAVE "1234"		//contrase�a se puede cambiar

// funciones
void contrasenia(); 
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
void ordenar_articulo();
void buscar_articulo();
void impri_ficha_almacen();
void impri_almacen();
void inventario_almacen();
void verifi_inventario();
void art_bajo_nivel();
void listar_pedido();
void recupera_apli();
void lee_fichero();

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
 El primer n�mero controla el color de fondo y
  el segundo controla el color del texto.  
0 = Negro 
1 = azul 
2 = verde 
3 = Aqua 
4 = Rojo 
5 = P�rpura 
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
	contrasenia();
	system ("color 0f");  //blanco sobre negro//
	m_principal();
		return 0;
}
//(para separar funciones)****************************************************************************************************************************************************************
void banner(){ //cabecera para casi todos los menus //
	
	system("cls");
			printf("=============================================================================================");	
			printf("\n\n\t\t\t\tSOLUCIONES INFORMATICAS U. P. M. ");
			printf("\n\t\t\t\t--------------------------------");
			printf("\n\t\t\t");
			printf("\n\t\tSergio Torres Madrazo & Alejandro Tejedor Moreno (Copyright 2020) ");
			printf("\n=============================================================================================");	
}
//(para separar funciones)****************************************************************************************************************************************************************
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
//(para separar funciones)****************************************************************************************************************************************************************
void m_articulos (){
	int opcion= -1; //variable para la opcion del menu articulos//  
		do{
			banner();
			printf("\n\n\n\t\t\t\tMENU ARTICULOS \n\t\t\t\t============== \n\n \t\t10-Inicializar fichero almacen.\n\n \t\t20-Aniadir un articulo en almacen.\n\n \t\t30-Ordenar almacen por numero de articulo.");
			printf("\n\n \t\t\n\n\n\t\t90-VOLVER MENU ANTERIOR \n");
			printf("\n---------------------------------------------------------------------------------------------");
			printf("\nTeclee la opcion deseada:  [  ]\b\b\b"); //conseguimos meter la opccion entre llaves y mejorar el entorno visual//
			scanf(" %i",&opcion);
				switch(opcion){				
					case 10: 	inicializar_almacen();	break;
					case 20: 	agregar_articulos ();	break;
					case 30:    ordenar_articulo();		break;
					}
	}
					while(opcion!=90);	
					m_principal(); //retorna al menu principal//
}
//(para separar funciones)****************************************************************************************************************************************************************
void m_consultas() {
	
	int opcion= -1; //variable para la opcion del menu consultas//
		do{
			banner();
			printf("\n\n\n\t\t\t\tMENU CONSULTAS \n\t\t\t\t============== \n\n\n \t\t10-Consulta multiple (todo).\n\n \t\t20-Consulta simple por codigo articulo.");
			printf("\n\n\t\t30-Imprimir consulta multiple.\n\n \t\t40-Imprimir consulta simple (ficha de articulo).\n\n\t\t\n\n\n\t\t90-VOLVER MENU ANTERIOR \n");
			printf("\n---------------------------------------------------------------------------------------------");
			printf("\nTeclee la opcion deseada:  [  ]\b\b\b"); //conseguimos meter la opccion entre llaves y mejorar el entorno visual//
			scanf(" %i",&opcion);
				switch(opcion)
				{
					case 10: listar_productos(); 	break;
					case 20: buscar_articulo();		break; 
					case 30: impri_almacen();		break;
					case 40:impri_ficha_almacen();	break; 
				}
		}
					while(opcion!=90);									
					m_principal(); //retorna al menu principal//
}
//(para separar funciones)****************************************************************************************************************************************************************	
void m_inventario() {
	
	int opcion= -1; //variable para la opcion del menu inventario//
		do{
			banner();
			printf("\n\n\n\t\t\tMENU INVENTARIO \n\t\t\t=============== \n\n\n\t\t10-Listado de productos por ubicacion en almacen .\n\n \t\t20-Imprimir listado por ubicacion para realizar inventario.");
			printf("\n\n \t\t30-Articulos por debajo de su nivel minimo.\n\n \t\t40-Pedido automatico de articulos por debajo de su nivel de inventario. \n\n \t\t\n\n\n\t\t90-VOLVER MENU ANTERIOR \n");
			printf("\n---------------------------------------------------------------------------------------------");
			printf("\nTeclee la opcion deseada:  [  ]\b\b\b"); //conseguimos meter la opccion entre llaves y mejorar el entorno visual//
			scanf(" %i",&opcion);
				switch(opcion){
					case 10: inventario_almacen();		break;
					case 20: verifi_inventario();		break;
					case 30: art_bajo_nivel();			break;
					case 40: listar_pedido();			break;
					}	
		}	
					while(opcion!=90);									
					m_principal();
}	
//(para separar funciones)****************************************************************************************************************************************************************
void m_mantenimiento() {
	
	int opcion= -1; //variable para la opcion del menu mantenimiento//
		do{
			banner();
			
			printf("\n\n\n\t\t\tMENU MANTENIMIENTO \n\t\t\t==================\n\n\n\t\t10-Realizar copia de seguridad.\n\n \t\t20-Recuperar la aplicacion con una copia de seguridad.");
			printf("\n\n \t\t30-Visualizar copia de seguridad.\n\n \t\t\n\n\n\t\t90-VOLVER MENU ANTERIOR \n");
			printf("\n---------------------------------------------------------------------------------------------");
			printf("\nTeclee la opcion deseada:  [  ]\b\b\b"); //conseguimos meter la opccion entre llaves y mejorar el entorno visual//
			scanf(" %i",&opcion);
				switch(opcion)
			{
					case 10: copia_seguridad();		break;
					case 20: recupera_apli();		break;
					case 30: lee_fichero();			break;
					}	
	}
					while(opcion!=90);									
					m_principal();
}

//(para separar funciones)****************************************************************************************************************************************************************
void agregar_articulos (){
	
	FILE * pfichero; //inicializar ficheo
	int contador=0, i, j;
	struct articulos vector[NA];
	char opc;

	pfichero = fopen("almacen.txt", "r");
		if (pfichero == NULL) {
		printf("No se encuentra el fichero\n");
	}
		while (fscanf(pfichero, "%d %s %d %d %d %d %f", &vector[contador].cod_art, &vector[contador].descripcion, &vector[contador].ubicacion, &vector[contador].existencias, &vector[contador].nivel_min, &vector[contador].unid_pedido_min, &vector[contador].precio) != EOF)
		 {
		// printf("%d %s %d %d %d %d %.2f\n", vector[contador].cod_art, vector[contador].descripcion, vector[contador].ubicacion, vector[contador].existencias, vector[contador].nivel_min, vector[contador].unid_pedido_min);
		// la linea anterior no es necesaria pero es util para ver si carga bien el fichero en el struct.
		contador++;
		}
		printf("Contador de articulos: %d\n", contador); // vemos en n� de articulos que se han cargado.
	fclose(pfichero);
	do {
		system("cls");	
		banner();
		printf("\n\t\t\t******   CAPTURA DATOS ALMACEN (ARTICULOS)      ******");  printf("         (Articulos encontrados: %d)", contador); 
			printf("\n\t\t\t------------------------------------------------------\n");		
	fflush(stdin);
			printf("\t\t\t     ------ (ESCRIBA EN MAYUSCULAS)  --------");
			printf("\n\n\t* CODIGO ARTICULO: [        ]\b\b\b\b\b\b\b\b\b"); scanf("%d", &vector[contador].cod_art);
	fflush(stdin);		
			printf("\n\t* DESCRIPCION: [                                  ]\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b"); gets(vector[contador].descripcion);
		for (j =0 ; j<35; j++) {
		if ((vector[contador].descripcion)[j] == ' ') {
			(vector[contador].descripcion)[j] = '_';}
		}
		fflush(stdin);	
		printf("\n\t\t\t\t\t\tXX_ _ _ _-->PASILLO                // Codifique la\n\t\t\t\t\t\t _ _XX_ _-->ESTANTERIA             // ubicacion usando  \n\t\t\t\t\t\t_ _ _ _XX-->FILA                   // esta regla. ");
		printf("\n\t* UBICACION: [      ]\b\b\b\b\b\b\b"); scanf("%d", &vector[contador].ubicacion);
	fflush(stdin);
		printf("\n\t* EXISTENCIAS: [      ]\b\b\b\b\b\b\b"); scanf("%d", &vector[contador].existencias);
		printf("\n\t* NIVEL MINIMO: [      ]\b\b\b\b\b\b\b");scanf("%d", &vector[contador].nivel_min);
		printf("\n\t* UNIDADES MINIMAS PARA PEDIDO: [      ]\b\b\b\b\b\b\b"); scanf("%d", &vector[contador].unid_pedido_min);
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
			fprintf(pfichero, "%08d     %-35s        %06d      %8d    %8d     %8d             %-.2f    \n", vector[i].cod_art, vector[i].descripcion, vector[i].ubicacion, vector[i].existencias, vector[i].nivel_min, vector[i].unid_pedido_min,vector[i].precio);;// Escribo los datos en el fichero abierto
	}
	fclose(pfichero); // Se cierra el fichero
}

//(para separar funciones)****************************************************************************************************************************************************************
void listar_productos(){
	
	FILE *pfichero; //fichero almacen	
	int contador=0, i, j;
	struct articulos vector[NA];
	
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
		while (fscanf(pfichero, "%d %s %d %d %d %d %f", &vector[contador].cod_art, &vector[contador].descripcion, &vector[contador].ubicacion, &vector[contador].existencias, &vector[contador].nivel_min, &vector[contador].unid_pedido_min, &vector[contador].precio) != EOF)
		 {
		printf("%08d     %-35s        %06d      %8d    %8d     %8d             %-.2f    \n", vector[contador].cod_art, vector[contador].descripcion, vector[contador].ubicacion, vector[contador].existencias, vector[contador].nivel_min, vector[contador].unid_pedido_min,vector[contador].precio);
		printf ("----------------------------------------------------------------------------------------------------------------------------------\n");
		contador++;
		}
	fclose(pfichero); // Se cierra el fichero
	system("pause");
}
//(para separar funciones)****************************************************************************************************************************************************************
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
	    letra=getc(pfichero);  //getc lee un solo car�cter del archivo en la posici�n actual y aumenta el puntero de archivo "f" para leer el siguiente //
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
//(para separar funciones)****************************************************************************************************************************************************************
void inicializar_almacen(){
	
	FILE * pfichero;
	int contador=0, i, j;
	struct articulos vector[NA];
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
		printf("\n\n\t* CODIGO ARTICULO: [        ]\b\b\b\b\b\b\b\b\b");  scanf("%d", &vector[contador].cod_art);
	fflush(stdin);		
		printf("\n\t* DESCRIPCION: [                                  ]\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b"); gets(vector[contador].descripcion);
			for (j =0 ; j<35; j++) {
				if ((vector[contador].descripcion)[j] == ' ') {
					(vector[contador].descripcion)[j] = '_';
				}
				}
		printf("\n\t\t\t\t\t\tXX_ _ _ _-->PASILLO                // Codifique la\n\t\t\t\t\t\t _ _XX_ _-->ESTANTERIA             // ubicacion usando  \n\t\t\t\t\t\t_ _ _ _XX-->FILA                   // esta regla. ");
		printf("\n\t* UBICACION: [      ]\b\b\b\b\b\b\b"); scanf("%d", &vector[contador].ubicacion);
		fflush(stdin);
		printf("\n\t* EXISTENCIAS: [      ]\b\b\b\b\b\b\b"); scanf("%d", &vector[contador].existencias);
		printf("\n\t* NIVEL MINIMO: [      ]\b\b\b\b\b\b\b");scanf("%d", &vector[contador].nivel_min);
		printf("\n\t* UNIDADES MINIMAS PARA PEDIDO: [      ]\b\b\b\b\b\b\b"); scanf("%d", &vector[contador].unid_pedido_min);
		printf("\n\t* PRECIO :[      ]\b\b\b\b\b\b\b "); scanf("%f", &vector[contador].precio);
		contador++;
	pfichero = fopen("almacen.txt", "w");
	if (pfichero == NULL) {
		printf("No se ha podido crear el fichero\n");
	}
	for (i=0; i < contador; i++) {
			fprintf(pfichero, "%08d     %-35s        %06d      %8d    %8d     %8d             %-.2f    \n", vector[i].cod_art, vector[i].descripcion, vector[i].ubicacion, vector[i].existencias, vector[i].nivel_min, vector[i].unid_pedido_min,vector[i].precio);;// Escribo los datos en el fichero abierto
	}
	fclose(pfichero); 
		system("pause");
}
//(para separar funciones)****************************************************************************************************************************************************************
void ordenar_articulo(){

	FILE * pfichero;
	int contador=0, i, j, r;
	struct articulos vector[NA]; 
	struct articulos aux;
	   
	pfichero = fopen("almacen.txt", "r");
	
	if (pfichero == NULL) {
		printf("No se encuentra el fichero\n");	}
		while (fscanf(pfichero, "%d %s %d %d %d %d %f", &vector[contador].cod_art, &vector[contador].descripcion, &vector[contador].ubicacion, &vector[contador].existencias, &vector[contador].nivel_min, &vector[contador].unid_pedido_min, &vector[contador].precio) != EOF)
		 {
		printf("%d %s %d %d %d %d %.2f\n", vector[contador].cod_art, vector[contador].descripcion, vector[contador].ubicacion, vector[contador].existencias, vector[contador].nivel_min, vector[contador].unid_pedido_min);
		contador++;	}
		printf("Contador de articulos: %d\n", contador);
	fclose(pfichero);
 //este trozo de codigo no es necesario pero vale para verificar que el algoritmo trabaja bien, por eso cuando acaba pongo un system("cls") para borrarlo.
	system("cls"); 
		for (i = 0; i < contador - 1; i++)
		   for (j = i + 1; j < contador; j++){
 		      if ((vector[i].cod_art) > (vector[j].cod_art) ){
		        aux = vector[i];
		        vector[i] = vector[j];
		      	vector[j] = aux;
		      }
   }
pfichero = fopen("almacen.txt", "w"); //reescribimos los datos en el fichero ya ordenados y formateados para que se vean mejor.
	
	if (pfichero == NULL) {
		printf("No se ha podido crear el fichero\n");	}
	for (i=0; i < contador; i++) {
		fprintf(pfichero, "%08d     %-35s        %06d      %8d    %8d     %8d             %-.2f    \n", vector[i].cod_art, vector[i].descripcion, vector[i].ubicacion, vector[i].existencias, vector[i].nivel_min, vector[i].unid_pedido_min,vector[i].precio);;// Escribo los datos en el fichero abierto
	}
	fclose(pfichero); // Se cierra el fichero
			banner();
			printf("\n\n\n \t\t EL FICHERO DE DATOS DE LA APLICACI�N HA SIDO ORDENADO CORRECTAMENTE\n\n\n  ");
			printf(" \t\t\t  USANDO COMO INDICE EL CAMPO CODIGO DE ARTICULO \n\n\n\n\n");	
		system("pause");
}

//(para separar funciones)****************************************************************************************************************************************************************
void buscar_articulo(){

FILE * pfichero;
	int contador=0, i, uni, ubicacion, unidades, decenas, centenas, millar,dmillar, ddmillar  ;
	struct articulos vector[NA]; 
	int buscar; //Guardar codi_articulo a buscar
	char opc;
		   
	pfichero = fopen("almacen.txt", "r");
	
	if (pfichero == NULL) {
		printf("No se encuentra el fichero\n");	}
		while (fscanf(pfichero, "%d %s %d %d %d %d %f", &vector[contador].cod_art, &vector[contador].descripcion, &vector[contador].ubicacion, &vector[contador].existencias, &vector[contador].nivel_min, &vector[contador].unid_pedido_min, &vector[contador].precio) != EOF)
		 {
		printf("%08d %s %06d %d %d %d %.2f\n", vector[contador].cod_art, vector[contador].descripcion, vector[contador].ubicacion, vector[contador].existencias, vector[contador].nivel_min, vector[contador].unid_pedido_min);
		contador++;	}
		printf("Contador de articulos: %d\n", contador);
	fclose(pfichero);
		//este trozo de codigo no es necesario pero vale para verificar que el algoritmo trabaja bien, por eso cuando acaba pongo un system("cls") para borrarlo.
		do{
	system("cls");
	banner();
	   printf("\n\t\t\t******   BUSCAR FICHA ARTICULOS EN ALMACEN       ******");  printf("         (Articulos encontrados: %d)", contador); 
	   printf("\n\t\t\t------------------------------------------------------\n");		
	
		printf("\n\n\t* CODIGO ARTICULO: [        ]\b\b\b\b\b\b\b\b\b"); scanf("%d", &buscar);
           for (i = 0; i < contador; i++) //Recorremos el array
               if (buscar== vector[i].cod_art) //Si art_buscar  es igual a algun cod_art del struct  de los alumnos
              {
        printf("\n\t* DESCRIPCION: [                                          ]\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b"); printf("%s\n\n",vector[i].descripcion);
		// descomponemos el campo ubicacion para usar los dos primeros numeros "pasillo" para ordenar.	
		ubicacion = vector[i].ubicacion;
					unidades	= ubicacion%10 ; ubicacion = ubicacion/10;
					decenas		= ubicacion%10;  ubicacion = ubicacion/10;
					centenas 	= ubicacion%10;  ubicacion = ubicacion/10;
					millar 		= ubicacion%10 ; ubicacion = ubicacion/10;
					dmillar 	= ubicacion%10 ; ubicacion = ubicacion/10;
					ddmillar	= ubicacion%10 ; ubicacion = ubicacion/10;
	
		printf("\n\t\t\t\t--> PASILLO:     ");  printf("%d%d",ddmillar, dmillar);      
		printf("\n\t* UBICACION:  "); printf("\t\t--> ESTANTERIA:  ");  printf("%d%d",millar, centenas); 
		printf("\n\t\t\t\t--> FILA:        ");  printf("%d%d",decenas, unidades); 
		printf("\n\n\t* EXISTENCIAS: [      ]\b\b\b\b\b\b\b"); printf("%d\n",vector[i].existencias);
		printf("\n\t* NIVEL MINIMO: [      ]\b\b\b\b\b\b\b");printf("%d\n",vector[i].nivel_min);
		printf("\n\t* UNIDADES MINIMAS PARA PEDIDO: [      ]\b\b\b\b\b\b\b"); printf("%d",vector[i].unid_pedido_min);
		printf("\n\t* PRECIO :[      ]\b\b\b\b\b\b\b "); printf("%.2f",vector[i].precio);
            }   
	fflush(stdin);
		printf("\n\n\n\n\t\tPuse 'S' para buscar mas articulos y cualquier tecla para salir: %c");
		scanf("%c",&opc);
    } 
	while( opc=='S'|| opc=='s'); //Si no tecleamos "s/S" sale al menu.//
}
//(para separar funciones)****************************************************************************************************************************************************************
void impri_ficha_almacen(){

	FILE * pfichero;
	FILE * pfichero1;
	int contador=0, i,  uni, ubicacion, unidades, decenas, centenas, millar,dmillar, ddmillar  ;
	struct articulos vector[NA]; 
	int buscar; //Guardar codi_articulo a buscar
	char opc;
	char nom_ficha[14];
	   
	pfichero = fopen("almacen.txt", "r");
	if (pfichero == NULL) {
		printf("No se encuentra el fichero\n");	}
		while (fscanf(pfichero, "%d %s %d %d %d %d %f", &vector[contador].cod_art, &vector[contador].descripcion, &vector[contador].ubicacion, &vector[contador].existencias, &vector[contador].nivel_min, &vector[contador].unid_pedido_min, &vector[contador].precio) != EOF)
		 {
				contador++;		}
		printf("Contador de articulos: %d\n", contador);
	fclose(pfichero);
		//este trozo de codigo no es necesario pero vale para verificar que el algoritmo trabaja bien, por eso cuando acaba pongo un system("cls") para borrarlo.
		do {
	system("cls");
	banner();
		
	    printf("\n\t\t\t******   IMPRIMIR ARTICULOS EN ALMACEN       ******");  printf("         (Articulos encontrados: %d)", contador); 
	    printf("\n\t\t\t------------------------------------------------------\n");		
	
		printf("\n\n\t* CODIGO ARTICULO: [        ]\b\b\b\b\b\b\b\b\b"); scanf("%08d", &buscar);
	   
           for (i = 0; i < contador; i++) 
              if (buscar== vector[i].cod_art) //Si art_buscar  es igual a algun cod_art del struct  de los alumnos
              {
        printf("\n\t* DESCRIPCION: [                                    ]\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b"); printf("%s\n\n",vector[i].descripcion);
			
		ubicacion = vector[i].ubicacion;
					unidades	= ubicacion%10 ; ubicacion = ubicacion/10;
					decenas		= ubicacion%10;  ubicacion = ubicacion/10;
					centenas 	= ubicacion%10;  ubicacion = ubicacion/10;
					millar 		= ubicacion%10 ; ubicacion = ubicacion/10;
					dmillar 	= ubicacion%10 ; ubicacion = ubicacion/10;
					ddmillar	= ubicacion%10 ; ubicacion = ubicacion/10;

		pfichero1 = fopen("alm_aux.txt", "w");
	if (pfichero1 == NULL) {
		printf("No se ha podido crear el fichero\n");
	}
			fprintf(pfichero1,"\n\n\t\t\t\tSOLUCIONES INFORMATICAS U. P. M. ");
			fprintf(pfichero1,"\n\t\t\t\t--------------------------------");
			fprintf(pfichero1,"\n\t\t\t");
			fprintf(pfichero1,"\n\t\tSergio Torres Madrazo & Alejandro Tejedor Moreno (Copyright 2020) ");
			fprintf(pfichero1,"\n=========================================================================================");	
			fprintf(pfichero1,"\n\t\t\t******  INFORME ARTICULO EN ALMACEN       ******"); 
			fprintf(pfichero1,"\n\t\t\t------------------------------------------------------\n");		
			fprintf(pfichero1,"\n\n\t* CODIGO ARTICULO:  "); fprintf(pfichero1,"%08d\n\n",buscar);
			fprintf(pfichero1,"\n\t* DESCRIPCION: "); fprintf(pfichero1,"%s\n\n",vector[i].descripcion);
			fprintf(pfichero1,"\n\t\t\t\t--> PASILLO:     ");  fprintf(pfichero1,"%d%d",ddmillar, dmillar);      
			fprintf(pfichero1,"\n\t* UBICACION:  "); fprintf(pfichero1,"\t\t--> ESTANTERIA:  ");  fprintf(pfichero1,"%d%d",millar, centenas); 
			fprintf(pfichero1,"\n\t\t\t\t--> FILA:        ");  fprintf(pfichero1,"%d%d",decenas, unidades); 
			fprintf(pfichero1,"\n\n\t* EXISTENCIAS: "); fprintf(pfichero1,"%d\n",vector[i].existencias);
			fprintf(pfichero1,"\n\t* NIVEL MINIMO: "); fprintf(pfichero1,"%d\n",vector[i].nivel_min);
			fprintf(pfichero1,"\n\t* UNIDADES MINIMAS PARA PEDIDO: "); fprintf(pfichero1,"%d",vector[i].unid_pedido_min);
			fprintf(pfichero1,"\n\t* PRECIO : "); fprintf(pfichero1,"%.2f �",vector[i].precio);
	
	fclose(pfichero); // Se cierra el fichero

		printf("\n\n\t\tTeclee el nombre del fichero para guardar, con la extension .txt");
        printf("\n\n\t\t   ejemplo    50000101.txt ");
        printf("\n\n\t\t   NOMBRE FICHERO:  [              ]\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b"); 
	 fflush(stdin);
		scanf("%s", &nom_ficha);	
    rename ("alm_aux.txt", ("%s",nom_ficha)); // cambiamos el nombre "alma_aux"  por el que le hemos puesto nosotros en la variable "nom_ficha" //
 	printf("\n\n\n\t !!La ficaha ha sido impresa con el nombre:  ");
	printf ("%s !!\n\n\n",nom_ficha);        } 
	printf("\n\n\t\tPuse 'S' para imrpimir mas fichas y cualquier tecla para guardar y salir: ");
	fflush(stdin);
	scanf("%c",&opc);
 	 } 
	while( opc=='S'|| opc=='s'); //Si no tecleamos "s/S" sale al menu.//
}

//(para separar funciones)****************************************************************************************************************************************************************
void impri_almacen(){

	FILE *pfichero;
	FILE *pfichero_aux;
	int contador=0, i, j;
	struct articulos vector[NA]; 
	struct articulos aux;
	
	   
	pfichero = fopen("almacen.txt", "r");
	if (pfichero == NULL) {
		printf("No se encuentra el fichero\n");
	
	}
		while (fscanf(pfichero, "%d %s %d %d %d %d %f", &vector[contador].cod_art, &vector[contador].descripcion, &vector[contador].ubicacion, &vector[contador].existencias, &vector[contador].nivel_min, &vector[contador].unid_pedido_min, &vector[contador].precio) != EOF)
		 {
		printf("%d %s %d %d %d %d %.2f\n", vector[contador].cod_art, vector[contador].descripcion, vector[contador].ubicacion, vector[contador].existencias, vector[contador].nivel_min, vector[contador].unid_pedido_min);
		contador++;
		//este trozo de codigo no es necesario pero vale para verificar que se han cargado bien los datos del fichero, por eso cuando acaba pongo un system("cls") para borrarlo.
		}
		printf("Contador de articulos: %d\n", contador);
	fclose(pfichero);
	system("cls"); 
// ordenamos los datos con la rutina de void ordenar_articulo() para que quede mas limpio en la impresion del fichero	
			for (i = 0; i < contador - 1; i++)
			   for (j = i + 1; j < contador; j++){
			      if ((vector[i].cod_art) > (vector[j].cod_art) ){
			        aux = vector[i];
			        vector[i] = vector[j];
			      	vector[j] = aux;
			      }
   }
	pfichero_aux = fopen("lis_almacen.txt", "w"); //creamos un fichero nuevo para guardar nuestros datos ya ordenados
		if (pfichero_aux == NULL) {
			printf("No se ha podido crear el fichero\n");
	}
		fprintf(pfichero_aux,"\t\t\t\t\t\tSOLUCIONES INFORMATICAS U. P. M. ");
		fprintf(pfichero_aux,"\n\t\t\t\t\t\t--------------------------------\n");
		fprintf(pfichero_aux,"\t\t\t\tSergio Torres Madrazo & Alejandro Tejedor Moreno (Copyright 2020) ");
		fprintf(pfichero_aux,"\n\t\t\t=========================================================================================");
		fprintf(pfichero_aux,"\n\t\t\t\t\t******   LISTADO DE ARTICULOS REGISTRADOS       ******");
		fprintf(pfichero_aux,"\n\t\t\t\t\t=======================================================\n\n");
		fprintf(pfichero_aux,"COD-ART.              DESCRIPCION                       UBICACION    EXISTENCIAS   NIVEL MIN.   PEDIDO MIN.      PRECIO            \n");
		fprintf (pfichero_aux,"======================================================================================================================================\n");
	
	for (i=0; i < contador; i++) {
		fprintf(pfichero, "%08d     %-35s        %06d      %8d    %8d     %8d             %-.2f    \n", vector[i].cod_art, vector[i].descripcion, vector[i].ubicacion, vector[i].existencias, vector[i].nivel_min, vector[i].unid_pedido_min,vector[i].precio);;// Escribo los datos en el fichero abierto
	}
	fprintf (pfichero_aux,"======================================================================================================================================\n");
	fprintf(pfichero_aux,"TOTAL DE ARTICULOS REGISTRADOS:  %d\n", contador);
	fclose(pfichero_aux); // Se cierra el fichero
			banner();
			printf("\n\n\n\n\n\t SE HA IMPRESO CORRECTAMENTE UN FICHERO CON EL NOMBRE : 'lis_almacen.txt'\n\n\n  ");
		system("pause");
}
//(para separar funciones)****************************************************************************************************************************************************************
void contrasenia(){
/* seguridad por contrase�a; mejora en la aplicacion, no estaba en los objetivos iniciales, en pruebas 
fuente https://algoritmosyalgomas.com/login-en-c-con-clave-en-asteriscos-y-3-intentos
 solo la hemos adaptado a nustra aplicacion con lijeros cambios */
	
	int LONGITUD=4;  	//maxima longitud en caracteres de usuario o contrase�a se puede cambiar en funcion la longitud de usuario/contrase�a
	char usuario[LONGITUD + 1];
    char clave[LONGITUD + 1];
    
    int intento = 0;
    int ingresa = 0;
    char caracter;
    int i = 0; 
	int contador_intento= 4;
       do {
        i = 0;
        system("cls");
        banner();
		printf("\n\n\n\n\t\t\t\t\tINICIO DE SESION");
        printf("\n\t\t\t\t\t===============\n");
        contador_intento--;
	   	printf("\n\n\t\t\t\t***   Le quedan %i de 3 intentos.   *** ", contador_intento);
	    printf("\n\n\n\n\tTECLEE SU USUARIO: ");
        gets(usuario);
        printf("\n\n\tTECLEE SU PASSWORD: ");
        // este while es el que hace los asteriscos 
 
        while (caracter = getch()) {
            if (caracter == 13) {
                clave[i] = '\0';
                break;
       
            } else if (caracter == 8) {
                if (i > 0) {
                    i--;
                    printf("\b \b"); 
                }
                
            } else {
                if (i < LONGITUD) {
                    printf("*");
                    clave[i] = caracter;
                    i++;
                }
            }
        }
        
        if (strcmp(usuario, USUARIO) == 0 && strcmp(clave, CLAVE) == 0) {
            ingresa = 1;
            
        } else {
            printf("\n\n\t...............................................................");
			printf("\n\n\tUsuario y/o password son incorrectos\n\n\n Pulse 'INTRO' para volver a intentarlo. ");
            intento++;
            getchar();
        }
 
    } while (intento < 3 && ingresa == 0);
    if (ingresa == 1) {
	        system("cls");
			system ("color 0a"); 
			banner();
			printf("\n\n\n\n\t     *****   BIENVENIDO A LA APLICACION  GESTION DE ALMACEN  *****\n\n\n\n");
			printf("\n\n\n\nPulse una tecla para continuar");
	       	system("pause");
	        
    } else {
	        system("cls");
			system ("color 0c"); //negro rojo
			banner();
			printf("\n\n\n\n\n\t\t\t ******  E R R O R  ******\n\n\n");
			printf("\n\n\n\tHa sobrepasado el numero maximo de intentos permitidos\n\n\n");
		    system("pause");
			exit(0); // fuerza la salida del programa por acumulacion de intentos fallidos 
    }
	
}
	
//(para separar funciones)****************************************************************************************************************************************************************	
void inventario_almacen(){
	FILE * pfichero;
	int contador=0, i, j;
	float import_art_al=0, impor_total=0; 
	struct articulos vector[NA]; 
	struct articulos aux;
	
	   
	pfichero = fopen("almacen.txt", "r");
			if (pfichero == NULL) {
				printf("No se encuentra el fichero\n");
				}
				while (fscanf(pfichero, "%d %s %d %d %d %d %f", &vector[contador].cod_art, &vector[contador].descripcion, &vector[contador].ubicacion, &vector[contador].existencias, &vector[contador].nivel_min, &vector[contador].unid_pedido_min, &vector[contador].precio) != EOF)
				 {
				contador++;
				}
			fclose(pfichero);
// ordenamos el estruct usando como indice el campo ubicacion
			for (i = 0; i < contador - 1; i++)
			   for (j = i + 1; j < contador; j++){
			      
			      if ((vector[i].ubicacion) > (vector[j].ubicacion) ){
  
		        aux = vector[i];
		        vector[i] = vector[j];
		      	vector[j] = aux;
      }
   }
		system("cls");
		printf("\t\t\t\t=======================================================");
		printf("\n\t\t\t\t\t******   INVENTARIO ALMACEN        ******");
		printf("\n\t\t\t\t=======================================================\n\n");
		printf("UBICACION    COD-ART.          DESCRIPCION                             EXISTENCIAS      PRECIO          VALOR ART.  \n");
		printf ("==================================================================================================================\n");
			
		for (i=0; i < contador; i++) {
				import_art_al= (vector[i].existencias)*(vector[i].precio); 
		printf(" %06d      %08d     %-35s        %8d        %8.2f          %8.2f \n",vector[i].ubicacion, vector[i].cod_art, vector[i].descripcion,  vector[i].existencias,vector[i].precio, import_art_al );
		printf ("------------------------------------------------------------------------------------------------------------------\n");
		
				import_art_al= (vector[i].existencias)*(vector[i].precio); 
				impor_total += import_art_al;
		}
		printf ("==================================================================================================================\n");
		  printf("\t\t\t\t\t\t\t\t  SUMA TOTAL VALOR ARTICULOS ALMACEN:  %.2f \n", 	impor_total );

system("pause"); // paramos y pide pulsar una tecla//
}
//(para separar funciones)****************************************************************************************************************************************************************	
void verifi_inventario(){
	FILE * pfichero;
	FILE *list_pasillo;
	int contador=0, i, j;
	int pasillo=0, min=0, max=0; 
	struct articulos vector[NA]; 
	struct articulos aux;
	char fichero[15]; //Nombre del fichero para guardar la consulta *.txt
	char opcion;  
	
	pfichero = fopen("almacen.txt", "r");
	
	if (pfichero == NULL) {
		printf("No se encuentra el fichero\n");
	}
		while (fscanf(pfichero, "%d %s %d %d %d %d %f", &vector[contador].cod_art, &vector[contador].descripcion, &vector[contador].ubicacion, &vector[contador].existencias, &vector[contador].nivel_min, &vector[contador].unid_pedido_min, &vector[contador].precio) != EOF)
		 {
	contador++;		}
	fclose(pfichero);
// ordenamos el estruct usando como indice el campo ubicacion
			for (i = 0; i < contador - 1; i++)
			   for (j = i + 1; j < contador; j++){
			      
			      if ((vector[i].ubicacion) > (vector[j].ubicacion) ){
  
		        aux = vector[i];
		        vector[i] = vector[j];
		      	vector[j] = aux;
      }
   }
   
   system("cls");
			banner();	
   	   		printf("\n\n\n\t\t EN ESTE MENU UD. CONSEGUIRA IMPRIMIR LA RELACION  ARTICULOS EXISTENTES \n\t\t EN UN DETERMINADO PASILLO DEL ALMACEN,");
	   		printf(" CON  LO  QUE PODRA VERIFICAR SI  \n\t\t SE  CORRESPONDE  CON  LAS  EXISTENCIAS  REALES, DEBERA PONER NOMBRE AL  \n\t\t FICHERO A IMPRIMIR ");
	  		printf("  CON LA TERMINACION *.txt   \n\n\t\t\t\t ***** EJEMPLO:  'PASILLO 10.txt' *****");
   
		   printf("\n\n\n\t* TECLEE EL PASILLO DONDE QUIERE HACER LA REVISION: [  ]\b\b\b"); scanf("%d", &pasillo);
		   printf("\n\n\t* TECLEE EL NOMBRE CON EL QUE QUIERE GUARDAR LA CONSULTA : [               ]\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b");
		fflush(stdin);
		  scanf("%s", &fichero);
		     max = (pasillo * 10000);
		     min = (max + 9999); 
   
   		list_pasillo= fopen("l_pasillo.txt", "w"); //creamos un fichero nuevo para guardar nuestros datos
	
			if (list_pasillo == NULL) {
				printf("No se ha podido crear el fichero\n");
		   
    	}
			fprintf(list_pasillo,"\t\t\t===================================================");  
			fprintf(list_pasillo,"\n\t\t\t******   INVENTARIO ALMACEN  PASILLO %d      ******", pasillo);
			fprintf(list_pasillo,"\n\t\t\t===================================================\n\n");
			fprintf(list_pasillo,"UBICACION    COD-ART.          DESCRIPCION                             EXISTENCIAS    CANTIDAD ACTUAL.  \n");
			fprintf (list_pasillo,"========================================================================================================\n");
	
		for (i=0; i < contador; i++) 
			
			 if (vector[i].ubicacion>=max && vector[i].ubicacion<=min)
{
		
			fprintf(list_pasillo," %06d      %08d     %-35s        %8d          [           ]\n",vector[i].ubicacion, vector[i].cod_art, vector[i].descripcion,  vector[i].existencias);
			fprintf (list_pasillo,"--------------------------------------------------------------------------------------------------------\n");
	}
 
	fclose(list_pasillo); // Se cierra el fichero
			rename ("l_pasillo.txt", ("%s",fichero)); // cambiamos el nombre "l_pasillor"  por el que le hemos puesto nosotros en la variable "fichero" //
	
			printf("\n\n\n \t\t SE HA IMPRESO CORRECTAMENTE UN FICHERO CON EL NOMBRE :  %s \n\n", fichero);
	system("pause"); // paramos y pide pulsar una tecla//
}

//(para separar funciones)****************************************************************************************************************************************************************

void art_bajo_nivel(){
	FILE * pfichero;
	int contador=0, i=0, faltan=0;
	struct articulos vector[100]; 
	int exis=0, nivel=0;
	   
		pfichero = fopen("almacen.txt", "r");
	
			if (pfichero == NULL) {
				printf("No se encuentra el fichero\n");
			}
				while (fscanf(pfichero, "%d %s %d %d %d %d %f", &vector[contador].cod_art, &vector[contador].descripcion, &vector[contador].ubicacion, &vector[contador].existencias, &vector[contador].nivel_min, &vector[contador].unid_pedido_min, &vector[contador].precio) != EOF)
				 {
				contador++;
				}
				fclose(pfichero);
	system("cls");	
			banner();
			printf("\n\t\t\t******   ARTICULOS POR DEBAJO DE SU NIVEL EN ALMACEN       ******");  
			printf("\n\t\t\t------------------------------------------------------\n");		
			printf("COD-ART.          DESCRIPCION                             EXISTENCIAS     NIVEL MINIMO         DIFERENCIA.  \n");
			printf ("==================================================================================================================\n");
	
				while(i<contador){
		
				exis =	vector[i].existencias ;  
			    nivel =  vector[i].nivel_min ; 
				faltan = (vector[i].nivel_min )-(vector[i].existencias);
					if(exis < nivel){
			
			
			printf("%08d     %-35s        %8d         %8d             %8d \n", vector[i].cod_art, vector[i].descripcion,  vector[i].existencias, vector[i].nivel_min, faltan);
			printf ("------------------------------------------------------------------------------------------------------------------\n");
		}
				i++;
	}	
	system("pause"); // paramos y pide pulsar una tecla//
}
//(para separar funciones)****************************************************************************************************************************************************************
	
void listar_pedido(){
	
	FILE * pfichero;
	FILE * lis_pedido;
	int contador=0, i=0, j=0;
	struct articulos vector[100]; 
	int exis=0, nivel=0, prev_pedido=0, pedid_mini=0, aux=0 ;
	float importe=0, importe_total=0;
	   
	pfichero = fopen("almacen.txt", "r");
			if (pfichero == NULL) {
				printf("No se encuentra el fichero\n");
			}
				while (fscanf(pfichero, "%d %s %d %d %d %d %f", &vector[contador].cod_art, &vector[contador].descripcion, &vector[contador].ubicacion, &vector[contador].existencias, &vector[contador].nivel_min, &vector[contador].unid_pedido_min, &vector[contador].precio) != EOF)
				 {
				contador++;
				}
	fclose(pfichero);
	
	lis_pedido = fopen("peti_arti.txt", "w"); // si no existe el fichero se creara, si existe se sobre escribe.
	
			if (lis_pedido == NULL) {
				printf("No se ha podido crear el fichero\n");
	}
		fprintf(lis_pedido,"\t\t\t\t\tSOLUCIONES INFORMATICAS U. P. M. ");
		fprintf(lis_pedido,"\n\t\t\t\t\t--------------------------------");
		fprintf(lis_pedido,"\n");
		fprintf(lis_pedido,"\n\t\t\tSergio Torres Madrazo & Alejandro Tejedor Moreno (Copyright 2020) ");
		fprintf(lis_pedido,"\n\t\t===================================================================================");
	
		fprintf(lis_pedido,"\n\t\t\t******   PETICION ARTICULOS POR DEBAJO DE SU NIVEL EN ALMACEN     ******");  
		fprintf(lis_pedido,"\n\t\t\t\t------------------------------------------------------\n\n");		
		fprintf(lis_pedido,"COD-ART.        DESCRIPCION                             EXISTENCIAS    NIVEL MIN.   PEDI. MINIMO   PRECIO    PEDIDO     IMPORTE  \n");
		fprintf (lis_pedido,"================================================================================================================================\n");

system("cls");
		banner();
		printf("\n\n\n\t\t EN  ESTE  MENU  UD. CONSEGUIRA  IMPRIMIR LA RELACION  DE ARTICULOS  \n\n\t\t QUE ESTAN POR DEBAJO DE");
	   	printf(" SU NIVEL, PARA REALIZAR EL CORRESPONDIENTE  \n\n\t\t PEDIDO A SU PROVEEDOR.  \n\n\n\n\t\t SE GENERARA UN FICHERO ");
	  	printf("  CON EL NOMBRE 'peti_art.txt'  \n\n\n\n ");

	while(i<contador){
	// buscar los articulos por debajo de su nivel minimo	
		exis =	vector[i].existencias ;  
	    nivel =  vector[i].nivel_min ; 
			prev_pedido=0;	
			if(exis < nivel){
				
		fprintf(lis_pedido,"%08d     %-35s     %8d         %8d    %8d        %6.2f ", vector[i].cod_art, vector[i].descripcion,  vector[i].existencias, vector[i].nivel_min, vector[i].unid_pedido_min, vector[i].precio );
			
//calcularmos cuando hay que pedir respetando el minimo que se puede pedir 
				prev_pedido;
				pedid_mini=vector[i].unid_pedido_min;
								
														
						if((prev_pedido + exis ) < nivel){
								for (j =1 ; j<100; j++){
								prev_pedido = nivel-exis ;
								}
								if (prev_pedido%pedid_mini==0){
								}
								else {
								aux= (nivel-exis)/pedid_mini;
								prev_pedido = (aux +1) * pedid_mini; 
								}
			fprintf(lis_pedido,"%8d",prev_pedido);
							}
// calculamos el coste total del pedido			
				importe =  (vector[i].precio * prev_pedido);
			fprintf(lis_pedido,"       %6.2f\n",importe);
				importe_total +=importe;
			fprintf (lis_pedido,"--------------------------------------------------------------------------------------------------------------------------------\n");	
		}
		i++;
	}	
fprintf (lis_pedido,"================================================================================================================================\n");
   fprintf(lis_pedido,"\t\t\t\t\t\t\t\t  SUMA IMPORTE PETICION DE ARTICULOS ALMACEN:           %.2f \n", 	importe_total );
		fclose(lis_pedido); // Se cierra el fichero
// mensaje explicativo 	
		system("cls");
		banner();
		printf("\n\n\n\t\t EN  ESTE  MENU  UD. CONSEGUIRA  IMPRIMIR LA RELACION  DE ARTICULOS  \n\n\t\t QUE ESTAN POR DEBAJO DE");
	   	printf(" SU NIVEL, PARA REALIZAR EL CORRESPONDIENTE  \n\n\t\t PEDIDO A SU PROVEEDOR.  \n\n\n\n\t\t SE GENERARA UN FICHERO ");
	  	printf("  CON EL NOMBRE 'peti_art.txt'  \n\n\n\n ");
 system("pause"); // paramos y pide pulsar una tecla//
}

//(para separar funciones)****************************************************************************************************************************************************************
void recupera_apli(){

	char nombre_fichero[16] ;
		    
    system("cls");
    
 banner();
 	system ("color 0c"); //negro rojo
	    printf("\n\n\n\t\t\t\t*****  !!!! A T E N C I O N  !!!!  *****\n  ");    
		printf("\n\n\n\t\tCON ESTA FUNCION UD. PODRA RECUPERAR LA APLICACION A PARTIR DE UNA COPIA DE SEGURIDAD\n  ");
		printf("\n\t\tLOS DATOS ANTERIORES SERAN BORRADOS, .\n\n\n");	
		
		printf("\t\t ESCRIBA EL NOMBRE DEL FICHERO DE COPIA DE SEGURIDAD :  [             ]\b\b\b\b\b\b\b\b\b\b\b\b\b\b ");
    fflush(stdin);
 		gets(nombre_fichero);
 		
 	remove( "almacen.txt" ); //eliminamos el fichero actual
    rename  (("%s",nombre_fichero), "almacen.txt" ); // cambiamos el nombre "auxiliar"  por el que le hemos puesto nosotros en la variable "nombre_fichero" //
 
 	 system("cls");
 	banner();
	system ("color 0f");  //blanco sobre negro//     
 		printf("\n\n\n\t\t\t !!La copia de seguridad se restauro con exito!! \n\n\n\n");
 
  	system("pause");
}
//(para separar funciones)****************************************************************************************************************************************************************
void lee_fichero(){
 	char nombre_fichero[18];
    char linea[1024];
    FILE *fich;
 
 	system("cls");	
 	banner();
	 printf("\n\n\n\n\t\t ESCRIBA EL NOMBRE DEL FICHERO DE COPIA DE SEGURIDAD :  [             ]\b\b\b\b\b\b\b\b\b\b\b\b\b\b ");
    fflush(stdin);
 		gets(nombre_fichero);
    	fich = fopen(nombre_fichero, "r");
	system("cls");	
    banner();
    	printf("\n\t\t\t****** CONTENIDO FICHERO  %s   ******", nombre_fichero);
		printf("\n\t\t=======================================================\n\n");
	
		printf("COD-ART.              DESCRIPCION                       UBICACION    EXISTENCIAS   NIVEL MIN.   PEDIDO MIN.      PRECIO            \n");
		printf ("==========================================================================================================================\n\n");
    //Lee l�nea a l�nea y escribe en pantalla hasta el fin de fichero
    while(fgets(linea, 1024, (FILE*) fich)) {
       
	    printf("%s ", linea);
	    printf ("---------------------------------------------------------------------------------------------------------------------------\n");
    }
    fclose(fich);
    
    	system("pause");
    
}

