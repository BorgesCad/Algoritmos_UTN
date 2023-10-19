#include <iostream>

using namespace std;

// Ejercicio 1
/*
int main()
{
    int nro_1 = 2, nro_2 = 3, nro_3 = 5, suma = 0, resta = 0, multiplicacion = 0;
    suma = nro_1 + nro_2 + nro_3;
    resta = nro_1 - nro_2 - nro_3;
    multiplicacion = nro_1 * nro_2 * nro_3;
    cout<<"La suma de todos los numeros dados es de: "<<suma<<endl;
    cout<<"La resta de todos los numeros dados es de: "<<resta<<endl;
    cout<<"La multiplicacion de todos los numeros dados es de: " <<multiplicacion<<endl;
    return 0;
}
*/
// Ejercicio 2
    // Camino 1
/*
int main(){
    int n1, n2, suma=0;
    float prom=0;
    cout<<"Ingrese un numero: "<<endl; cin>>n1;
    cout<<"Ahora ingrese otro numero: "<<endl; cin>>n2;
    suma = n1*2 + n2*n2;
    prom = float(n1*n1*n1 + n2*n2*n2)/2;
    cout<<"Perfecto! \nLa suma del doble de n1 mas el cuadrado de n2 es: "<<suma<<endl;
    cout<<"El promedio de la suma de sus cubos es: "<<prom<<endl;
    return 0;
}
*/
    // Camino 2
/*
#include <math.h> //Libreria para potencia y raiz cuadrada;
int main(){
    int n1, n2, suma=0;
    float prom=0;
    cout<<"Ingrese un numero: "<<endl; cin>>n1;
    cout<<"Ahora ingrese otro numero: "<<endl; cin>>n2;
    suma = n1*2 + pow(n2, 2);
    prom = float(pow(n1, 3) + pow(n2, 3))/2;
    cout<<"Perfecto! \nLa suma del doble de n1 mas el cuadrado de n2 es: "<<suma<<endl;
    cout<<"El promedio de la suma de sus cubos es: "<<prom<<endl;
    return 0;
}
*/
// Ejercicio 3
/*
int main(){
    int nro, cifra = 0;
    cout<<"Ingresa un numero positivo de 4 cifras: "<<endl; cin>>nro;
    cifra += nro%10;
    nro /= 10;
    cifra += nro%10;
    nro /= 10;
    cifra += nro%10;
    nro /= 10;
    cifra += nro%10;
    cout<<"La suma de las cifras de dicho numero es: "<<cifra<<endl;
    return 0;
}
*/
// Ejercicio 4
/*
int main(){
    int anio, mes;
    cout<<"Hola,ingrese su edad en anios y meses\nPrimero, cuantos anios tenes?"<<endl; cin>>anio;
    cout<<"Bien, y cuantos tenes este anio?"<<endl; cin>>mes;
    anio *= 12;
    mes += anio;
    cout<<"Tu edad actual puesta en solo meses seria: "<<mes<<endl;
    return 0;
}
*/
// Ejercicio 5
/*
int main(){
    int nota_1 = 4, nota_2 = 5, nota_3 = 3, nota_4 = 9;
    float prom = 0;
    cout<<"Hola, el promedio de la nota de los examenes es:"<<endl;
    prom = float(nota_1 + nota_2 + nota_3 + nota_4)/4;
    cout<<prom<<endl;
    return 0;
}
*/
// Ejercicio 6
    // Camino 1
/*
int main(){
    float radio, diametro = 0, perimetro = 0, superficie = 0, PI = 3.14;
    cout<<"Hola, ingresa el radio del circulo: "<<endl; cin>>radio;
    diametro = radio*2;
    perimetro = 2*PI*radio;
    superficie = PI*radio*radio;
    cout<<"El diametro es: "<<diametro<<endl;
    cout<<"El perimetro es: "<<perimetro<<endl;
    cout<<"La superficie es: "<<superficie<<endl;
    return 0;
}
*/
    // Camino 2
/*
#include <math.h>
#define PI 3.14
int main(){
    float radio, diam=0, perim=0, sup=0;
    cout<<"Hola, ingresa el radiod el circulo: "<<endl; cin>>radio;
    diam = radio*2;
    perim = 2*PI*radio;
    sup = PI*pow(radio, 2);
    cout<<"El diametro es: "<<diam<<endl;
    cout<<"El perimetro es: "<<perim<<endl;
    cout<<"La superficie es: "<<sup<<endl;
    return 0;
}
*/
// Ejercicio 7
/*
int main(){
    float area = 0, perim = 0, base, altura;
    cout<<"Hola, ingrese la base y la altura del rectangulo separando con un espacio cada dato 'Ej: 5 6'."<<endl; cin>>base>>altura;
    perim = (base+altura)*2;
    area = base*altura;
    cout<<"El perim del rectangulo es: "<<perim<<endl;
    cout<<"El area del rectangulo es: "<<area<<endl ;
    return 0;
}
*/
// Ejercicio 8
/*
int main(){
    float aprob, desaprob, ausent;
    int alumnos=0;
    cout<<"Hola ingrese la cantidad de alumnos aprobados: "<<endl; cin>>aprob;
    cout<<"Hola ingrese la cantidad de alumnos desaprobados: "<<endl; cin>>desaprob;
    cout<<"Hola ingrese la cantidad de alumnos ausentes: "<<endl; cin>>ausent;
    alumnos = aprob + desaprob + ausent;
    aprob = (aprob*100)/alumnos;
    desaprob = (desaprob*100)/alumnos;
    ausent = (ausent*100)/alumnos;
    cout<<"Existe una cantidad de: "<<alumnos<<endl;
    cout<<"El porcentaje de alumnos aprobados es del: "<<aprob<<"%"<<endl;
    cout<<"El porcentaje de alumnos desaprobados es del: "<<desaprob<<"%"<<endl;
    cout<<"El porcentaje de alumnos ausentes es del: "<<ausent<<"%"<<endl;
    return 0;
}
*/
// Ejercicio 9
/*
int main(){
    int nro, unidad, decena, centena;
    cout<<"Ingrese un numero de 3 cifras:"<<endl; cin>>nro;
    unidad = nro%10; nro /= 10;
    decena = nro%10; nro /= 10;
    centena = nro%10;
    cout<<"La unidad es:"<<unidad<<endl;
    cout<<"La decena es:"<<decena<<endl;
    cout<<"La centena es:"<<centena<<endl; 
    return 0;
}
*/
// Ejercicio 10
/*
#include <math.h>
int main(){
    float c1, c2, h=0;
    cout<<"Ingrese los valores del cateto 1 y el cateto 2 separando cada dato con un espacio. (Ej: 5 6)"<<endl; cin>>c1>>c2;
    h = sqrt(pow(c1, 2) + pow(c2, 2));
    cout<<"Bien, la hipotenusa de ese triangulo es: "<<h<<endl;
    return 0;
}
*/
// Ejercicio 11
/*
int main(){
    int metros;
    cout<<"Hola, ingrese la cantidad de metros pedidos: "<<endl; cin>>metros;
    metros *= 75;
    cout<<"El precio de la cantidad de metros exigida es: "<<metros<<endl;
    return 0;
}
*/
// Ejercicio 12
/*
int main(){
    float dolares, euros;
    int pesos; //Teniendo en cuenta que en Arg casi ni se usan los centavos...
    cout<<"Ingrese la cantidad de pesos a cambiar: "; cin>>pesos;
    cout<<"Ingrese el valor del dolar: "; cin>>dolares;
    cout<<"Ingrese el valor del euro:"; cin>>euros;
    dolares = pesos/dolares;
    euros = pesos/euros;
    cout<<"La cantidad de dolares que poserías al cambio de hoy sería: "<<dolares<<endl;
    cout<<"La cantidad de euros que poserías al cambio de hoy sería: "<<euros<<endl;
    return 0;
}
*/
// Ejercicio 13
/*
int main(){
    float ensambladora=0.37, pintura=0.42, electrica=0.21;
    int presupuesto; //Suponiendo que el presupuesto seria un número redondo.
    cout<<"Ingrese el presupuesto anual para informar cuanta plata le correspondera a cada sector:"; cin>>presupuesto;
    ensambladora *= presupuesto;
    pintura *= presupuesto;
    electrica *= presupuesto;
    cout<<"Al area de ensambladora es de: "<<ensambladora<<endl;
    cout<<"Al area de pintura es de: "<<pintura<<endl;
    cout<<"Al area de electrica es de: "<<electrica<<endl;
    return 0;
}
*/
// Ejercicio 14
/*
int main(){
    float largo, alto, arena=0;
    cout<<"Ingrese el largo y el alto de la pared separando por un espacio cada dato. (Ej: '10 5')"<<endl; cin>>largo>>alto;
    arena =  (largo*alto)/2;
    cout<<"Se necesita una cantidad de "<<arena<<" metros cubicos de arena.";
    return 0;
}
*/