# monty
Recursos
Leer o mirar :

Google
¿Cómo uso extern para compartir variables entre archivos fuente en C?
Objetivos de aprendizaje
Al final de este proyecto, se espera que puedas explicarle a cualquiera , sin la ayuda de Google :

General
¿Qué significan LIFO y FIFO?
¿Qué es una pila y cuándo usarla?
¿Qué es una cola y cuándo usarla?
¿Cuáles son las implementaciones comunes de pilas y colas?
¿Cuáles son los casos de uso más comunes de pilas y colas?
¿Cuál es la forma correcta de usar variables globales?
Requisitos
General
Editores permitidos: vi, vim,emacs
Todos sus archivos serán compilados en Ubuntu 14.04 LTS
Sus programas y funciones se compilarán gcc 4.8.4usando las banderas-Wall -Werror -Wextra and -pedantic
Todos sus archivos deben terminar con una nueva línea.
Un README.mdarchivo, en la raíz de la carpeta del proyecto es obligatorio
Su código debe usar el Bettyestilo. Se verificará usando betty-style.pl y betty-doc.pl
Permitió utilizar un máximo de una variable global
No más de 5 funciones por archivo
Puede usar la biblioteca estándar de C
Los prototipos de todas sus funciones deben incluirse en su archivo de encabezado llamado monty.h
No olvides empujar tu archivo de encabezado
Todos los archivos de encabezado deben estar guardados
Se espera que realice las tareas en el orden que se muestra en el proyecto
Github
Debe haber un repositorio de proyectos por grupo. Si clona / bifurca / lo que sea un repositorio de proyecto con el mismo nombre antes de la segunda fecha límite, corre el riesgo de obtener un puntaje de 0%.

Más información
Estructuras de datos
Utilice las siguientes estructuras de datos para este proyecto. No olvide incluirlos en su archivo de encabezado.

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
Compilación y salida
Su código se compilará de esta manera:
$ gcc -Wall -Werror -Wextra -pedantic *.c -o monty
Cualquier salida debe imprimirse en stdout
Cualquier mensaje de error debe imprimirse en stderr
Aquí hay un enlace a un repositorio de GitHub que podría ayudarlo a asegurarse de que sus errores se impriman enstderr
Pruebas
Le recomendamos encarecidamente que trabajen todos juntos en un conjunto de pruebas.

El lenguaje Monty
Monty 0.98 es un lenguaje de secuencias de comandos que primero se compila en códigos de bytes Monty (al igual que Python). Se basa en una pila única, con instrucciones específicas para manipularlo. El objetivo de este proyecto es crear un intérprete para los archivos Monty ByteCodes.

Archivos de código de bytes Monty

Los archivos que contienen códigos de bytes Monty generalmente tienen la .mextensión. La mayoría de la industria usa este estándar, pero no es requerido por la especificación del lenguaje. No hay más de una instrucción por línea. Puede haber cualquier cantidad de espacios antes o después del código de operación y su argumento:

julien@ubuntu:~/monty$ cat -e bytecodes/000.m
push 0$
push 1$
push 2$
  push 3$
                   pall    $
push 4$
    push 5    $
      push    6        $
pall$
julien@ubuntu:~/monty$
Los archivos de código de bytes Monty pueden contener líneas en blanco (vacías o hechas solo de espacios, y cualquier texto adicional después del código de operación o su argumento requerido no se tiene en cuenta:

julien@ubuntu:~/monty$ cat -e bytecodes/001.m
push 0 Push 0 onto the stack$
push 1 Push 1 onto the stack$
$
push 2$
  push 3$
                   pall    $
$
$
                           $
push 4$
$
    push 5    $
      push    6        $
$
pall This is the end of our program. Monty is awesome!$
julien@ubuntu:~/monty$
El programa monty

Uso: monty file
¿Dónde fileestá la ruta al archivo que contiene el código de bytes Monty?
Si el usuario no proporciona ningún archivo o más de un argumento a su programa, imprima el mensaje de error USAGE: monty file, seguido de una nueva línea y salga con el estadoEXIT_FAILURE
Si, por algún motivo, no es posible abrir el archivo, imprimir el mensaje de error Error: Can't open file <file>, seguido de una nueva línea y salir con el estadoEXIT_FAILURE
donde <file>esta el nombre del archivo
Si el archivo contiene una instrucción no válida, imprima el mensaje de error L<line_number>: unknown instruction <opcode>, seguido de una nueva línea y salga con el estadoEXIT_FAILURE
dónde es el número de línea donde aparece la instrucción.
Los números de línea siempre comienzan en 1
El programa monty ejecuta los bytecodes línea por línea y se detiene si:
se ejecutó correctamente cada línea del archivo
encuentra un error en el archivo
ocurrió un error
Si ya no puede malloc, imprima el mensaje de error Error: malloc failed, seguido de una nueva línea y salga con el estado EXIT_FAILURE.
Tienes que usar mallocy freeno man mallocpuedes usar ninguna otra función de (realloc, calloc, ...)
