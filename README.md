# Proyecto: Buscaminas

## Descripción
Buscaminas es un clásico juego de computadora que consiste en despejar un campo de minas sin detonar ninguna. Este proyecto es una implementación en C++ donde los jugadores pueden seleccionar diferentes niveles de dificultad y tratar de descubrir todos los bloques sin hacer explotar las minas.

## Tecnologías Utilizadas
- Lenguaje de programación: C++
- Biblioteca estándar de C++
- Entorno de desarrollo: Windows

## Esquema de Base de Datos
No aplica para este proyecto, ya que no se utiliza una base de datos.

## Cómo Correr el Proyecto
1. Asegúrate de tener un compilador de C++ instalado en tu sistema (como [MinGW para Windows](https://www.mingw-w64.org/)).
2. Descarga el código fuente del proyecto desde [aquí](https://github.com/CharlesRafael/GrupoB_AdminConfig.git).
3. Abre una terminal o línea de comandos.
4. Navega al directorio donde se encuentra el archivo `main.cpp`.
5. Compila el proyecto utilizando el siguiente comando:
   ```sh
   g++ -o buscaminas main.cpp
   ```
6. Ejecuta el archivo compilado:
   ```sh
   ./buscaminas
   ```

## Cómo Correr el Comando de Pruebas
No se han definido pruebas automatizadas específicas para este proyecto. Las pruebas se realizan manualmente ejecutando el juego y verificando su funcionalidad.

## Workflow
El workflow actual ejecuta dos trabajos al detectar un pull request a la rama de QA:

1. `dockerize` crea y ejecuta una imagen de docker del proyecto, para asegurar que esta pueda ejecutarse en todo entorno con acceso a docker

2. `run-tests` ejecuta el script `runtime.sh` para validar que la compilación del proyecto sea exitosa.

Es **obligatorio** que ambas pruebas pasen para proceder con el merge.

## Contribuidores
- Daniel Dominguez [StackOverNani10](https://github.com/StackOverNani10)
- Charles Mendez [CharlesRafael](https://github.com/CharlesRafael)
- Victor Gomez [Rohtgib](https://github.com/Rohtgib)
- Willians Olaverria [Willians-Olaverria-Intec](https://github.com/Willians-Olaverria-Intec)
- Denzel Perez [denzel-perez-intec](https://github.com/denzel-perez-intec)