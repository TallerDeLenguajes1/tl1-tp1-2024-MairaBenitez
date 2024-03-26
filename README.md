# tp1
Investigar el archivo .gitignore ¿Por qué es conveniente incluirlo?
¿Cuándo se debe hacer?¿Cómo configuraría el archivo .gitignore?

Es conveniente incluir un archivo .gitignore ya que este nos permite ignorar archivos de un mismo tipo que no querramos que se suba al repositorio remoto o bien un archivo en especifico, como por ejermplo archivos de textos o archivos que se generen por defecto.
Para configurar un archivo .gitignore debemos crear un archivo de texto con este nombre, luego dentro del archivo:
    - Para ignorar un archivo o carpeta en especifico basta con poner su nombre y extension
    - Si lo que se desea ignorar son archivos con una misma coincidencia, como una misma extension se utiliza el caracter "*".
    Por ejemplo para ignorar archivos de texto: *.txt 
    - Si queremos especificar en que carpeta se quieren ignorar una serie de archivos o uno en especifico se utiliza "/"
    - Si solamente se desea colocar un comentario utilizaremos el caracter "#"