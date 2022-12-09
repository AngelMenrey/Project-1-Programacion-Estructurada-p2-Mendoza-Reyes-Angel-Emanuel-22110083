// Angel Emanuel Mendoza Reyes / Grupo 1 O /22110083 / 	Programacion Estructurada / 18/03/2022

#include <iostream> // Se incluye una libreria.


using namespace std; // Se usa para evitar escribir std:: antes de el proceso de cout o cint.


int main() // Esta es la funcion principal,esta es la parte donde inicia el programa.
{
        float residuo=0;/* Se declara una variable del tipo flotante la cual nos permite guardar
                          decimales de nombre residuo e igualado a 0*/
                          
        
        int contar=1;/* Aqui se declara una variable del tipo entero llamada contar, la cual esta igualada 
                      al valor 1*/
        
        while (contar != 11) /* Aqui se crea el ciclo While el cual se encarga de ejecutar las siguientes lineas 
                              de codigo mientras la condicion se cumpla, en este ejemplo se ejecutaran mientras la variable 
							  contar sea diferente de 11. */
        {
                residuo = contar % 2;/* Dividimos el valor de la variable contar entre dos y almacenamos el valor
				                      de su residuo en la variable residuo igualandola.*/ 
                
                if (residuo == 0) /* Aqui inicia la estructura condicional If con la condicion de ejecutar la siguente 
                                     linea de codigo en dado caso de que la variable residuo sea igual a 0*/
                                     
                                    
                
                {
                        cout << "el numero " << contar << " es par " <<endl ; /* Se muestra un texto el cual muestra el valor de la variable 
                                                                              contar y dice que el numero es par, el endl se encarga de hacer un salto de linea 
																			  */
                    
                        
                }
                else/* En caso de no cumplirse la primera condicion ejecutara el siguiente codigo que se encuentra dentro de las llaves*/
                
                {
                        cout << "el numero " << contar << "es impar "<<endl ; /* se muestra un texto el cual muestra el valor de la variable 
						                                                          contar y dice que el numero es impar, el endl se encarga de
																				  hacer un salto de linea.*/
                }
                contar = contar + 1;/*  Aqui al salir del If se le suma un valor de una unidad a la variable contar.*/
        }

    cout << "Hello World!\n";/* Aqui al salir del ciclo While se muestra un texto que dice: Hola mundo*/
    
    
}
