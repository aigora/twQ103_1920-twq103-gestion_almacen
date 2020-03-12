#include <stdio.h>
#include <stdlib.h> //para que pueda funcionar system//

int main()
{
	int opcion; //variable para la opcion del menu de inicio//
       
    

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
	system ("color 0f"); 

	
	do{
	printf("=============================================================================================");	
	printf("\n\n\t\t\t\tSOLUCIONES INFORMATICAS U. P. M. ");
	printf("\n\t\t\t\t--------------------------------");
	printf("\n\t\t\t");
	printf("\n\t\tSergio Torres Madrazo & Alejandro Tejedor Moreno (Copyright 2020) ");
	printf("\n=============================================================================================");
	printf("\n\n\n\t\t\t      MENU PRINCIPAL GESTION DE ALMACENES \n\t\t\t      =================================== \n\n\n\t\t10-Menu Articulos.\n\n\t\t20-Menu Consultas.");
	printf("\n\n\t\t30-Menu Inventario\n\n\t\t40-Menu Mantenimiento.\n\n\n\t\t90-SALIR DE LA APLICACION \n");
	printf("\n---------------------------------------------------------------------------------------------");
	printf("\nTeclee la opcion deseada: ");
	
	scanf(" %d",&opcion);
	
switch(opcion)
{
	
	case 10:
			
			system("cls");
			printf("=============================================================================================");	
			printf("\n\n\t\t\t\tSOLUCIONES INFORMATICAS U. P. M. ");
			printf("\n\t\t\t\t--------------------------------");
			printf("\n\t\t\t");
			printf("\n\t\tSergio Torres Madrazo & Alejandro Tejedor Moreno (Copyright 2020) ");
			printf("\n=============================================================================================");
			printf("\n\n\n\t\t\t\tMENU ARTICULOS \n\t\t\t\t============== \n\n\n \t\t10-Alta de un articulo en inventario.\n\n \t\t20-Consulta de un articulo en inventario.");
			printf("\n\n \t\t30-Baja de un articulo en inventario.\n\n\n\t\t90-VOLVER MENU ANTERIOR \n");
			printf("\n---------------------------------------------------------------------------------------------");
			printf("\nTeclee la opcion deseada: ");
			scanf(" %d",&opcion);
		
	break;
	
	case 20:
		
			system("cls");
			printf("=============================================================================================");	
			printf("\n\n\t\t\t\tSOLUCIONES INFORMATICAS U. P. M. ");
			printf("\n\t\t\t\t--------------------------------");
			printf("\n\t\t\t");
			printf("\n\t\tSergio Torres Madrazo & Alejandro Tejedor Moreno (Copyright 2020) ");
			printf("\n=============================================================================================");
			printf("\n\n\n\t\t\t\tMENU CONSULTAS \n\t\t\t\t============== \n\n\n \t\t10-Consulta simple por referencia.\n\n \t\t20-Consulta multiple por referecias.");
			printf("\n\n \t\t30-Consulta multiple por descripcion.\n\n \t\t\n\n\n\t\t90-VOLVER MENU ANTERIOR \n");
			printf("\n---------------------------------------------------------------------------------------------");
			printf("\nTeclee la opcion deseada: ");
			scanf(" %d",&opcion);
		
	
	break;
	case 30:
		
			system("cls");
			printf("=============================================================================================");	
			printf("\n\n\t\t\t\tSOLUCIONES INFORMATICAS U. P. M. ");
			printf("\n\t\t\t\t--------------------------------");
			printf("\n\t\t\t");
			printf("\n\t\tSergio Torres Madrazo & Alejandro Tejedor Moreno (Copyright 2020) ");
			printf("\n=============================================================================================");
			printf("\n\n\n\t\t\tMENU INVENTARIO \n\t\t\t=============== \n\n\n\t\t10-Listado de productos por ubicacion en almacen  .\n\n \t\t20-Actualizar / modificar inventario.");
			printf("\n\n \t\t30-Articulos por debajo de su nivel minimo.\n\n \t\t\n\n\n\t\t90-VOLVER MENU ANTERIOR \n");
			printf("\n---------------------------------------------------------------------------------------------");
			printf("\nTeclee la opcion deseada: ");
			scanf(" %d",&opcion);
		
	break;
	case 40:
		
			system("cls");
			printf("=============================================================================================");	
			printf("\n\n\t\t\t\tSOLUCIONES INFORMATICAS U. P. M. ");
			printf("\n\t\t\t\t--------------------------------");
			printf("\n\t\t\t");
			printf("\n\t\tSergio Torres Madrazo & Alejandro Tejedor Moreno (Copyright 2020) ");
			printf("\n=============================================================================================");
			printf("\n\n\n\t\t\tMENU MANTENIMIENTO \n\t\t\t============ \n\n\n\t\t10-Recuperar articulos borrados.\n\n \t\t20-Copia de seguridad.");
			printf("\n\n \t\t30-Borrado fisico de articulos.\n\n \t\t\n\n\n\t\t90-VOLVER MENU ANTERIOR \n");
			printf("\n---------------------------------------------------------------------------------------------");
			printf("\nTeclee la opcion deseada: ");
			scanf(" %d",&opcion);
	
	
}
}while(opcion!=90);
			system ("color 0a"); //cambia a verde para despedida//
			system("cls");
			printf("=============================================================================================");	
			printf("\n\n\t\t\t\tSOLUCIONES INFORMATICAS U. P. M. ");
			printf("\n\t\t\t\t--------------------------------");
			printf("\n\t\t\t");
			printf("\n\t\tSergio Torres Madrazo & Alejandro Tejedor Moreno (Copyright 2020) ");
			printf("\n=============================================================================================");
			printf("\n\n\n\t\t\t     SALIO DE LA APLICACION\n\n\n\nQue pase un buen dia ;-) \n\n\n\n");
			
		system("pause"); // paramos el printf y pide pulsal una tecla//
		return 0;
}
