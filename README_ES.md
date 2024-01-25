# Bienvenido

Esta propuesta ofrece una estructura para desarrollar videojuegos en C++. A través de esta guía, te enseñaré a emplear patrones de diseño convenientes. Ten en cuenta que esta arquitectura es experimental y puede sufrir cambios con el tiempo. ¡No olvides dejar tu estrella para mantenerte informado!

# Directorios

- **dep**: Contiene las bibliotecas necesarias para nuestro proyecto.
- **src**: Archivos propios de nuestra implementación.
  - **src/core**: Clases lógicas, como tipos personalizados, que serán utilizados por nuestras entidades.
  - **src/entities**: Almacena interfaces y, aunque podrían considerarse parte de core, se mantienen aquí para evitar subcarpetas anidadas.
  - **src/integration**: Implementación de las entidades; se recomienda agrupar todas las implementaciones de una interfaz en una carpeta. Además, se crea una interfaz `builder` para manejar diferentes formas de configurar las interfaces del juego.
  - **src/game**: El dominio del juego.

# Patrones

- **Facade**: Permite reunir diferentes entidades. En este caso, se aplica a la entidad `videogame`, donde convergen todas las entidades, facilitando la comunicación entre ellas y la aplicación de métodos globales. Facade puedes usarlo para decidir que implementacion usar o para crear un objeto con diferentes valores en atributos.
- **Builder**: Ayuda a definir la configuración inicial de cómo se crea una entidad.
- **Factory**: Permite obtener objetos de plantilla. Los patrones Builder y Factory son similares al permitir la creación de entidades desde plantillas; se recomienda usar Factory si se quieren crear entidades en tiempo de ejecución.
- **Inyección de dependencias**: En el método constructor de un objeto, permite definir los atributos del objeto desde parámetros de entrada. Se utiliza para definir implementaciones de interfaces.
- **Interfaces**: Brinda flexibilidad al cambiar la implementación de cierta clase sin tener que modificar todo el código.

# Caso Práctico

Se utilizará el juego clásico Snake como ejemplo de implementación. Además, se ha modificado ligeramente para poner a prueba todos los patrones de arquitectura mencionados.

# Diagrama de Relación de Clases

# Cómo Correr el Proyecto




