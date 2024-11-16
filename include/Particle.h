#ifndef PARTICLE_H
#define PARTICLE_H

#include <SFML/Graphics.hpp>

/**
 * @file Particle.h
 * @brief Declaración de la clase Particle.
 *
 * Este archivo contiene la definición de la clase Particle, que representa
 * una partícula en el simulador, junto con sus propiedades y métodos.
 */

/**
 * @class Particle
 * @brief Representa una partícula en el simulador.
 *
 * La clase Particle contiene información sobre la posición, velocidad,
 * aceleración y el radio de una partícula. También incluye métodos para
 * actualizar su estado y dibujarla en una ventana gráfica.
 */
class Particle {
public:
 float x, y; ///< Posición de la partícula.
 float vx, vy; ///< Velocidad de la partícula.
 float ax, ay; ///< Aceleración de la partícula.
 float radius; ///< Radio de la partícula.
 sf::Color color; ///< Color de la partícula.

 /**
  * @brief Constructor de la clase Particle.
  *
  * Inicializa una partícula con una posición inicial y un radio.
  *
  * @param x Posición inicial en el eje X.
  * @param y Posición inicial en el eje Y.
  * @param radius Radio de la partícula.
  */
 Particle(float x, float y, float radius);

 /**
  * @brief Actualiza el estado de la partícula.
  *
  * Calcula la nueva posición de la partícula basándose en su velocidad
  * y aceleración.
  *
  * @param dt Tiempo transcurrido desde la última actualización (en segundos).
  */
 void update(float dt);

 /**
  * @brief Dibuja la partícula en la ventana.
  *
  * Representa visualmente la partícula en la ventana especificada.
  *
  * @param window Referencia a la ventana de SFML donde se dibujará la partícula.
  */
 void draw(sf::RenderWindow& window);
};

#endif //PARTICLE_H
