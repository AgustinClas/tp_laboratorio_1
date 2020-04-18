#ifndef FUNCIONESCALCULADORA_H_INCLUDED
#define FUNCIONESCALCULADORA_H_INCLUDED



#endif // FUNCIONESCALCULADORA_H_INCLUDED

/** \brief permite mostrar un menu y elegir una opcion
 *
 * \param opciones del menu (se debe organizar numericamente para que el usuario elija una opcion)
 * \param opcion minima que puede elegir el usuario
 * \param opcion maxima que puede elegir el usuario
 * \return eleccion del usuario
 *
 */

int menuOpciones(char menu[], int opcionMin, int opcionMax);

/** \brief suma dos enteros
 *
 * \param primer entero a sumar
 * \param segundo entero a sumar
 * \return devuelve el resultado de la suma
 *
 */

int sumar(int numeroA, int numeroB);

/** \brief resta dos enteros
 *
 * \param primer entero
 * \param segundo entero
 * \return resultado de la resta
 *
 */

int restar(int numeroA, int numeroB);

/** \brief lleva a cabo la division de un entero por otro
 *
 * \param primer entero (dividendo)
 * \param segundo entero (divisor)
 * \return resultado de la division tipo float
 *
 */

float dividir(int numeroA, int numeroB);

/** \brief multiplica dos enteros
 *
 * \param primer entero a multiplicar
 * \param segundo entero a multiplicar
 * \return producto de la multiplicacion
 *
 */

int multiplicar (int numeroA, int numeroB);

/** \brief obtiene el factorial de un entero
 *
 * \param entero
 * \return factorial del entero
 *
 */

long long int obtenerFactorial(int numeroA);

/** \brief muestra por pantalla los resultados de las operaciones basicas entre dos enteros y el factorial de cada uno de ellos
 *
 * \param primer entero
 * \param segundo entero
 * \param resultado de la suma
 * \param resultado de la resta
 * \param resultado de la multiplicacion
 * \param resultado de la division
 * \param resultado del factorial del primer entero
 * \param resultado del factorial del segundo entero
 * \return
 *
 */

void mostrarResultados (int numeroA, int numeroB, int suma, int resta, int producto, float division, long long int factorialA, long long int factorialB);

/** \brief obtiene un numero validado
 *
 * \param mensaje que quiera mostrar al pedir el numero
 * \return numero validado
 *
 */

int obtenerNumero(char mensaje[]);
