# CPP Module 00 - Introduction to C++

## Descripción
Este es el primer módulo del curso de C++ en 42 School. Introduce los conceptos básicos de C++, incluyendo espacios de nombres, clases, funciones miembro, stdio streams, listas de inicialización, static, const, y otras características fundamentales del lenguaje.

## Ejercicios

### Ejercicio 00: Megaphone
**Archivo:** `ex00/megaphone.cpp`

Un programa simple que convierte argumentos de línea de comandos a mayúsculas.

#### Compilación:
```bash
cd ex00
make
```

#### Uso:
```bash
./megaphone "texto a convertir"
./megaphone texto1 texto2 texto3
./megaphone  # Sin argumentos
```

#### Ejemplos:
```bash
$ ./megaphone "shhhhh... I think the students are asleep..."
SHHHHH... I THINK THE STUDENTS ARE ASLEEP...

$ ./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
DAMNIT ! SORRY STUDENTS, I THOUGHT THIS THING WAS OFF.

$ ./megaphone
* LOUD AND UNBEARABLE FEEDBACK NOISE *
```

### Ejercicio 01: Mi Increíble PhoneBook
**Archivos:** 
- `ex01/main.cpp`
- `ex01/contact.hpp` / `ex01/contact.cpp`
- `ex01/phonebook.hpp` / `ex01/phonebook.cpp`

Una agenda telefónica que puede almacenar hasta 8 contactos con funcionalidades de añadir, buscar y salir.

#### Características:
- **Clase Contact:** Almacena información de contacto (nombre, apellido, apodo, número de teléfono, secreto más oscuro)
- **Clase PhoneBook:** Gestiona una colección de hasta 8 contactos
- **Comandos disponibles:**
  - `ADD`: Añadir un nuevo contacto
  - `SEARCH`: Buscar y mostrar contactos
  - `EXIT`: Salir del programa

#### Compilación:
```bash
cd ex01
make
```

#### Uso:
```bash
./phone
```

#### Funcionalidades:
1. **ADD:** Solicita información del contacto paso a paso
2. **SEARCH:** Muestra una tabla con todos los contactos y permite seleccionar uno para ver detalles completos
3. **EXIT:** Termina el programa

#### Validaciones:
- No acepta campos vacíos
- No acepta campos que solo contengan espacios
- Valida que el número de teléfono solo contenga dígitos
- Trunca campos largos en la vista de tabla (máximo 10 caracteres)

### Ejercicio 02: The Job Of Your Dreams
**Archivos:**
- `ex02/Account.hpp` (proporcionado)
- `ex02/Account.cpp` (a implementar)
- `ex02/tests.cpp` (proporcionado)
- `ex02/19920104_091532.log` (salida esperada)

Implementación de la clase `Account` basándose en un archivo de header proporcionado y un log de salida esperada.

#### Características implementadas:
- Gestión de cuentas bancarias con depósitos y retiros
- Seguimiento de estadísticas globales
- Timestamps en formato específico
- Funciones estáticas para información global
- Funciones miembro para operaciones individuales

#### Compilación:
```bash
cd ex02
make
```

#### Uso:
```bash
./account
```

#### Funciones implementadas:
- `makeDeposit()`: Realizar depósitos
- `makeWithdrawal()`: Realizar retiros (con validación de fondos)
- `displayStatus()`: Mostrar estado de cuenta individual
- `displayAccountsInfos()`: Mostrar información global de todas las cuentas
- `_displayTimestamp()`: Mostrar timestamp en formato específico

## Normas y Estándares

### Norma de 42
- Todos los archivos siguen la norma de 42
- Headers con el formato estándar de comentarios
- Nombres de archivos en minúsculas
- Un solo punto y coma por línea (salvo en bucles for)
- Máximo 80 caracteres por línea

### Estándar C++98
- Compilación con flags: `-Wall -Wextra -Werror -std=c++98`
- No se utilizan características posteriores a C++98
- Uso de bibliotecas estándar de C++ apropiadas

### Características de C++ utilizadas:
- **Clases y objetos**
- **Encapsulación** (miembros privados/públicos)
- **Constructores y destructores**
- **Funciones miembro**
- **Funciones estáticas**
- **Referencias**
- **Streams de entrada/salida**

## Compilación

Cada ejercicio tiene su propio Makefile con las siguientes reglas:
- `make` o `make all`: Compila el programa
- `make clean`: Elimina archivos objeto
- `make fclean`: Elimina archivos objeto y ejecutable
- `make re`: Limpia y recompila

### Flags de compilación:
```makefile
CFLAGS = -Wall -Wextra -Werror -std=c++98
```

## Estructura del Proyecto
```
CPP00/
├── .gitignore
├── README.md
├── ex00/
│   ├── Makefile
│   └── megaphone.cpp
├── ex01/
│   ├── Makefile
│   ├── main.cpp
│   ├── contact.hpp
│   ├── contact.cpp
│   ├── phonebook.hpp
│   └── phonebook.cpp
└── ex02/
    ├── Makefile
    ├── Account.hpp
    ├── Account.cpp
    ├── tests.cpp
    └── 19920104_091532.log
```

## Conceptos de C++ Aprendidos

1. **Espacios de nombres (namespace)**
2. **Clases básicas** - Definición y uso
3. **Encapsulación** - Miembros públicos y privados
4. **Constructores y destructores**
5. **Funciones miembro** vs funciones estáticas
6. **Referencias** - Paso por referencia
7. **Streams** - std::cout, std::cin, std::getline
8. **Strings de C++** - std::string
9. **Validación de entrada**
10. **Gestión de memoria básica**

## Notas de Implementación

- Los constructores y destructores muestran mensajes para propósitos educativos
- La validación de entrada es robusta para evitar comportamientos inesperados
- El ejercicio 02 requiere ingeniería inversa basada en logs de salida
- Todos los programas manejan EOF (Ctrl+D) correctamente

## Autor
Iker Portillo
