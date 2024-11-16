# Versión mínima de CMake requerida
cmake_minimum_required(VERSION 3.10)

# Nombre del proyecto
project(ParticleSimulator)

# Activar compilación en modo C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_PREFIX_PATH "/opt/homebrew/Cellar/sfml/2.5.1/lib/cmake/SFML")


# Incluir directorios de cabeceras
include_directories(include)

# Buscar e incluir SFML
find_package(SFML 2.5 COMPONENTS system window graphics REQUIRED)

# Agregar archivos fuente
file(GLOB SOURCES src/*.cpp)

# Crear el ejecutable
add_executable(ParticleSimulator ${SOURCES})

# Vincular las bibliotecas de SFML
target_link_libraries(ParticleSimulator sfml-system sfml-window sfml-graphics)

# Configuración para pruebas (opcional)
enable_testing()
