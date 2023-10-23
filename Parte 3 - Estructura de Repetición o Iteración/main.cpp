#include <iostream>

using namespace std;

// Ejercicio 1
//    Camino 1
/*
int main(){
  int nro;
  for (int i = 1; i <= 10; i++)
  {
    cout<<"Ingrese un numero: "; cin>>nro;
    if (nro > 0){
      cout<<"\nBien, el numero "<<nro<<" es positivo."<<endl;
    }
  }
  return 0;
}
*/
//    Camino 2
/*
int main(){
  int nro, contador=1;
  while (contador<=10)
  {
    cout<<"Ingrese un numero: "; cin>>nro;
    if (nro > 0){
      cout<<"\nBien, el numero "<<nro<<" es positivo."<<endl;
    }
    contador++;
  }
  return 0;
}
*/
// Ejericio 2
/*
int main(){
  int alumnos, nota;
  float prom=0;
  string nombre;
  cout<<"Ingrese la cantidad de alumnos del curso: "; cin>>alumnos;
  for (alumnos; alumnos > 0; alumnos--)
  { // Teniendo confianza de que el usuario ingresara una nota de entre 1 y 10;
    cout<<"Ingrese el nombre del alumno:"; cin>>nombre;
    cout<<"Ingrese la primera nota del alumno:"; cin>>nota;
    cout<<"Ingrese la primera nota del alumno:"; cin>>prom;
    prom = (nota+prom)/2;

    cout<<"\nALUMNO: "<<nombre<<" | PROMEDIO: "<<prom<<endl;
  }
  return 0;
}
*/
// Ejercicio 3
/*
int main(){
  int pares, nro=0;
  cout<<"Ingrese la cantidad de numeros positivos que desee ver: "; cin>>pares;
  for (pares ; pares > 0; pares--)
  {
    nro += 2;
    cout<<nro<<endl;
  }
  return 0;
}
*/
// Ejercicio 4
/*
int main(){
  int nro, contador_neg=0;
  for (int i=1; i<=20; i++){
    cout<<"Ingrese un numero: "; cin>>nro;
    if (nro < 0){
      contador_neg++;
    }
  }
  cout<<"\nBien, la cantidad de numeros negativos ingresados fueron: "<<contador_neg;
  return 0;
}
*/
// Ejercicio 5
/*
int main(){
  int nro, suma=0;
  for (int i = 0; i < 10; i++)
  {
    cout<<"Ingrese un numero: "; cin>>nro;
    suma += nro;
  }
  cout<<"La suma de todos los numeros ingresados es: "<<suma<<endl;
  return 0;
}
*/
// Ejercicio 6
/*
int main(){
  int nro, suma=0, cant_nro=0, agregado=0;
  float prom;
  cout<<"Ingrese un numero: "; cin>>nro;
  suma = nro;
  cout<<"¿Cuanto numeros mas deseas ingresar? :"; cin>>agregado;
  cant_nro = agregado+1;
  while (agregado != 0) {
    cout<<"Ingrese un numero: "; cin>>nro;
    suma += nro;
    agregado--;
  }
  prom = float(suma)/cant_nro;
  cout<<"El promedio de los numeros ingresados es de: "<<prom;
  return 0;
}
*/
// Ejercicio 7
int main(){
  int cant_nro, nota;
  string alumno;
  float aprobados, desaprobados;
  
  return 0;
}