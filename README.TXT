Buenas, aca va una serie de pasos de como ejecutar los experimentos.

para eso lo primero que se necesita es tener el archivo test.cpp compilado y linkeado en otro llamado a.out. 

a.out debe estar en la misma carpeta que los .ipynb

deben existir las carpetas "resultados", "instancias" y "graficos" (ubicadas al mismo nuvel que los .ipynb).

dentro de la carpeta instancias deben existir unas carpetas con determinados nombres. Para saber mas ir a la foto "cjtoDeCarpetasDeInstancias.png"

tambien hacen falta los modulos para python:
1.jupyter-notebook 
2.numpy
3.pandas 
4.seaborn
5.IPython.display 
6.matplotlib
7.random 
8.math


una vez cumplidas estas precondiciones podemos ejecutar nuestros experimentos.

1. en el archivo instancias.ipynb correr todas las celdas usando run all

2. en el archivo correr-instancias.ipynb

	2.1: si corriamos todos los experimentos se trababa el jupyter asi que vamos a correr todos los experimentos salvo programcion dinamica por un lado y luego dinamica por el otro. 

	2.2: Para esto corremos todas las primeras celdas hasta que llegamos a la seccion de programacion dinamica.

	2.3:Una vez que llegamos a esta seccion la salteamos y corremos la celda con el titulo "Ejectuar los experimentos:"

3. en el archivo Plotter.ipynb Graficamos el conjunto de experimentos.

	3.1: se corren todas las celdas hasta llegar a la celda con el titulo Programacion dinamica
	
4. en este punto volvemos al archivo correr-instancias.ipynb
	
	4.1: si ya se corrieron los experimentos anteriores y ya tiene cargado los imports solo correr la quinta celda con el siguiente codigo:
		experimentos = [];
	Si no se corrieron los experimentos anteriores y se desea correr progrmacion dinamica correr las primeras 5 celdas de codigo sin contar las celdas de markdown.

	4.2 Correr las ultimas 4 celdas de codigo sin contar las de markdown (con direccion arriba hacia abajo primero se cargan las instancias y luego se ejecutan).
	
5. una vez que se corrieron estas instancias ir a Plotter.ipynb
	
	5.1 volver a leer el csv corriendo la tercera celda de codigo.
	
	5.2 graficar los experimentos de pogramacion dinamica corriendo las ultimas 3 celdas de codigo.
	



con eso deberia de bastar para poder correr los experimentos.
