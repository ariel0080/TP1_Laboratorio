#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED




/** \brief

Funci�n para el ingreso y validaci�n de rango de datos. Se le ingresan los l�mites dentro de los cuales tiene que estar el n�mero que a continuaci�n se va a pedir ingresar.
La funci�n misma solicita el ingreso del numero, chequea que este entre los l�mites que se pasaron por par�metro y si es asi, devuelve el n�mero validado, si se ingresa un
n�mero fuera del rango, lo vuelve a solicitar hasta que la entrada sea correcta.
 *
 * \param maximo m�ximo n�mero que se puede ingresar
 * \param minimo m�nimo n�mero que se puede ingresar
  * \return  retorna el numero ingresado por teclado
 *
 */
float ingNumyVal (float,float);
/** \brief Realiza la operaci�n suma y la muestra por pantalla
 *
 * \param sumando 1
 * \param sumando 2
 * \return nada (imprime en pantalla el resultado)
 *
 */
void fSuma(float,float);
/** \brief Validaci�n de flags
 *Funci�n que valida el ingreso de los dos n�meros con los que se van a ejecutar las operaciones.
 *
 * \param flag de primer numero (0 no ingresado, 1 ingresado)
 * \param flag de primer numero (0 no ingresado, 1 ingresado)
 * \return 0 si no se ingreso nada o solo se ingreso el 2do n�mero, 1 si se ingreso 1er n�mero y 2 si ambos n�meros fueron ingresados.
 *
 */
int val2opciones(int,int);
/** \brief Realiza la operaci�nr esta y la muesta por pantalla
 *
 * \param numero1
 * \param numero2
 * \return nada (imprime el resultado por pantalla)
 *
 */
void fResta(float ,float);
/** \brief Divisi�n. Realiza la operaci�n y la muestra por pantalla
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
 * \param numero a factorizar. La funcion valida que no sea un numero con parte decimal, y tambi�n que no sea negativo
 * \param numero m�ximo que se puede factorizar, dependiendo de que tipo de dato se haya usado para la variable este l�mite puede cambiar (int, float, double, etc)
 * \return nada (imprime el resultado por pantalla o da un mensaje de error en caso de resultar falsa la validaci�n)
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
 * \return 0 para numero con parte decimal igual a 0, 1 para n�mero con parte decimal distinta a 0
 *
 */
int esEntero(float);

#endif // FUNCIONES_H_INCLUDED
