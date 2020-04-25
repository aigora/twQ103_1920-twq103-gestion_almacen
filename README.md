## Titulo del trabajo 
GESTIÓN DE ALMACEN

Gestión de  un  almacén, control de inventario, gestión de nivel mínimo de artículos, gestión de pedidos para reposición.

## Integrantes del equipo

Sergio Torres Madrazo;sergiotorresmadrazo y Alejandro Tejedor Moreno ;alejandrotejedormoreno.


## Objetivos del trabajo 

Realizar una aplicación  informatica para gestión de un almacén de productos gestionada por menús.

* inicializar la aplicacion creando el fichero de datos.
* Dar de alta artículos con descripción y ubicación en el almacén.
* Fijar un nivel mínimo por articulo para reponerlo .
* Poder realizar  un control periódico  de inventario.
* Relizar copia de seguridad.
* Recuperar la información a través de una copia de seguridad.
* Diversos tipos consultas en los diferentes menús.


## Ampliación de objetivos.

* Se estudia implementar acceso a la aplicación con contraseña.

## Incidencias.

*Hemos tenido problemas en la gestión de ficheros tipo .txt, ya que los espacios en un campo char del struct nos generaban un salto de linea al recuperar la informacion y corropian el programa, hemos probado varias cosas sin resultdos, por lo que hemos optado en sustitur los espacios entre palabras del string por '_', de momento de una forma provisional funciona de forma aceptable, seguimos buscando una posible solucion. 