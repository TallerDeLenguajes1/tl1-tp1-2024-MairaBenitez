# tp1
Investigar el archivo .gitignore ¿Por qué es conveniente incluirlo? ¿Cuándo se debe hacer?¿Cómo configuraría el archivo .gitignore?

Es conveniente incluir un archivo .gitignore ya que este nos permite ignorar archivos de un mismo tipo que no querramos que se suba al repositorio remoto o bien un archivo en especifico, como por ejermplo archivos de textos o archivos que se generen por defecto.
Para configurar un archivo .gitignore debemos crear un archivo con este nombre, luego dentro del archivo:

    - Para ignorar un archivo o carpeta en especifico basta con poner su nombre y extension.
    - Si lo que se desea ignorar son archivos con una misma coincidencia, como una misma extension se utiliza el caracter "*".
    Por ejemplo para ignorar archivos de texto: *.txt 
    - Si queremos especificar en que carpeta se quieren ignorar una serie de archivos o uno en especifico se utiliza "/".
    - Si solamente se desea colocar un comentario utilizaremos el caracter "#".


Revise los archivos subidos en su repositorio de github. ¿Qué archivos vé?¿Cuál cree que no hace falta que esté?

Los archivos ejecutables como el .exe no son necesarios que esten en el repositorio remoto

(Punto 3G) Si resolvió correctamente los apartados 2 y 3 del punto anterior notará que el resultado es el mismo. ¿a qué se debe? ¿Qué obtiene en el punto 4? ¿Es igual a los anteriores? ¿Por qué? Responder en el archivo readme.md

Que el resultado de los items 2 y 3 sean los mismos se debe a que, en el item 2 lo que muestro por pantalla es la direccion de memoria de la variable a la que apunta el puntero con el que se esta trabajado, es decir, que accedemos "inderectamente" a la direccion de memoria de la variable deseada mientras que en el item 3 accedemos "directamente" a la direccion de la misma.
En el item 4 lo que se obtiene es la direccion de memoria en donde se encuntra almacenado el puntero, es decir, la direccion de memoria propia del puntero y no la que este almacena de la variable que apunta, por ello es que esta no es igual a las anteriores.