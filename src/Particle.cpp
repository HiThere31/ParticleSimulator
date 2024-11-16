#include "Particle.h"

/**
 * @file Particle.cpp
 * @brief Implementación de la clase Particle.
 *
 * Este archivo contiene la implementación de los métodos de la clase Particle,
 * incluyendo su constructor, la actualización de su estado y el método para
 * dibujarla en la ventana.
 */

/**
 * @brief Constructor de la clase Particle.
 *
 * Inicializa una partícula con su posición, velocidad inicial, aceleración,
 * radio y color predeterminado.
 *
 * @param x Posición inicial en el eje X.
 * @param y Posición inicial en el eje Y.
 * @param radius Radio de la partícula.
 */
Particle::Particle(float x, float y, float radius)
    : x(x), y(y), vx(0), vy(0), ax(0), ay(0), radius(radius), color(sf::Color::White) {}

/**
 * @brief Actualiza el estado de la partícula.
 *
 * Modifica la posición de la partícula basándose en su velocidad,
 * aceleración y el tiempo transcurrido desde la última actualización.
 *
 * @param dt Tiempo transcurrido desde la última actualización (en segundos).
 */
void Particle::update(float dt) {
    vx += ax * dt; ///< Actualiza la velocidad en el eje X
    vy += ay * dt; ///< Actualiza la velocidad en el eje Y
    x += vx * dt; ///< Actualiza la posición en el eje X
    y += vy * dt; ///< Actualiza la posición en el eje Y
}

/**
 * @brief Dibuja la partícula en la ventana.
 *
 * Crea un círculo que representa la partícula y lo dibuja en la ventana especificada.
 *
 * @param window Referencia a la ventana de SFML donde se dibujará la partícula.
 */
void Particle::draw(sf::RenderWindow &window) {
    sf::CircleShape circle(radius); ///< Círculo que representa la partícula
    circle.setPosition(x, y); ///< Establece la posición del círculo
    circle.setFillColor(color); ///< Establece el color del círculo
    window.draw(circle); ///< Dibuja el círculo en la ventana
}
