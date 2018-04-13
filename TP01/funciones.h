#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED




/** \brief

Función para el ingreso y validación de rango de datos. Se le ingresan los límites dentro de los cuales tiene que estar el número que a continuación se va a pedir ingresar.
La función misma solicita el ingreso del numero, chequea que este entre los límites que se pasaron por parámetro y si es asi, devuelve el número validado, si se ingresa un
número fuera del rango, lo vuelve a solicitar hasta que la entrada sea correcta.
 *
 * \param maximo máximo número que se puede ingresar
 * \param minimo mínimo nímero que se puede ingresar
  * \return  retorna el numero ingresado por teclado
 *
 */
float ingNumyVal (float,float);
/** \brief Realiza la operación suma y la muestra por pantalla
 *
 * \param sumando 1
 * \param sumando 2
 * \return nada (imprime en pantalla el resultado)
 *
 */
void fSuma(float,float);
/** \brief Validación de flags
 *Función que valida el ingreso de los dos números con los que se van a ejecutar las operaciones.
 *
 * \param flag de primer numero (0 no ingresado, 1 ingresado)
 * \param flag de primer numero (0 no ingresado, 1 ingresado)
 * \return 0 si no se ingreso nada o solo se ingreso el 2do número, 1 si se ingreso 1er número y 2 si ambos números fueron ingresados.
 *
 */
int val2opciones(int,int);
/** \brief Realiza la operaciónr esta y la muesta por pantalla
 *
 * \param numero1
 * \param numero2
 * \return nada (imprime el resultado por pantalla)
 *
 */
void fResta(float ,float);
/** \brief División. Realiza la operación y la muestra por pantalla
 *
 * \param dividendo
 * \param divisor
 * \return nada (imprime el resultado en pantalla)
 *
 */
void fDivision(float,float);
/** \brief Multiplicacion
 *
 * \param multiplicando
 * \param multiplicador
 * \return nada (imprime el resultado en pantalla)
 *
 */
void fMultiplicacion(float,float);
/** \brief Realiza el factorial del numero ingresado
 *
 * \param numero a factorizar. La funcion valida que no sea un numero con parte decimal, y también que no sea negativo
 * \param numero máximo que se puede factorizar, dependiendo de que tipo de dato se haya usado para la variable este límite puede cambiar (int, float, double, etc)
 * \return nada (imprime el resultado por pantalla o da un mensaje de error en caso de resultar falsa la validación)
 *
 */
void fFactorial(float,int);
 /** \brief Imprime mensaje por pantalla
 * Muestra mensaje de despedida cuando se sale del programa
 * \param nada
 * \return nada (solo imprime por pantalla)
 *
 */
void MenFin(void);
/** \brief Muestra mensaje por pantalla
 * Muestra mensaje de error cuando se quiere hacer una operacion sin haber ingresado los datos necesarios.
 * \param no tiene
 * \return nada (imprime mensaje)
 *
 */
void error_0(void);
/** \brief Funcion para verificar si un numero float tiene parte decimal o no
 *
 * \param numero float ingresado
 * \return 0 para numero con parte decimal igual a 0, 1 para número con parte decimal distinta a 0
 *
 */
int esEntero(float);

#endif // FUNCIONES_H_INCLUDED
