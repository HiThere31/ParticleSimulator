#include <SFML/Graphics.hpp>
#include <iostream>
#include <Particle.h>

/**
 * @file main.cpp
 * @brief Punto de entrada principal para el simulador de partículas.
 *
 * Este archivo contiene la función principal del programa. Se encarga
 * de crear la ventana del simulador, manejar los eventos de usuario,
 * y actualizar y renderizar las partículas.
 */

/**
 * @brief Función principal del simulador de partículas.
 *
 * Crea una ventana usando SFML, inicializa una partícula y ejecuta
 * el bucle principal del simulador.
 *
 * @return int Código de retorno del programa.
 */
int main() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "Particle Simulator"); ///< Ventana del simulador

    Particle particle(400, 300, 10); ///< Partícula inicial
    sf::Clock clock; ///< Reloj para medir el tiempo entre actualizaciones

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            /**
             * @brief Cierra la ventana si el usuario lo solicita.
             */
            if (event.type == sf::Event::Closed)
                window.close();
        }

        float dt = clock.restart().asSeconds(); ///< Tiempo transcurrido desde la última actualización
        particle.update(dt); ///< Actualiza el estado de la partícula

        window.clear(); ///< Limpia la ventana antes de dibujar
        particle.draw(window); ///< Dibuja la partícula en la ventana
        window.display(); ///< Muestra los contenidos en pantalla
    }

    return 0; ///< Indica que el programa terminó correctamente
}
