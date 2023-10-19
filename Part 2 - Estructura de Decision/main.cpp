#include <iostream>

using namespace std;

// Ejercicio 1
/*
int main(){
  int n1, n2;
  cout<<"Ingresa 2 numeros, separados de un espacio cada dato. (Ej: 1 2)"<<endl; cin>>n1>>n2;
  if (n1<n2){
    cout<<"Bien, el numero mas pequenio es: "<<n1<<endl;
  } else{
    cout<<"El numero mas pequenio es: "<<n2<<endl;
  }
  return 0;
}
*/
// Ejercicio 2
/*
int main(){
  int nro;
  cout<<"Ingresa un numero"<<endl; cin>>nro;
  if (nro%2 == 0){
    cout<<"El numero ingresado es par.";
  } else {
    cout<<"El numero ingresado es impar.";
  }
  return 0;
}
*/
// Ejercicio 3
/*
int main(){
  int n1, n2;
  cout<<"Ingrese un numero: "; cin>>n1;
  cout<<"Ingrese otro numero: "; cin>>n2;
  if (n1>n2){
    n1 -= n2;
    cout<<"La resta de aquellos numeros es: "<<n1<<endl;
  } else{
    n2 += n1;
    cout<<"La suma de aquellos numeros es: "<<n2<<endl;
  }
  return 0;
}
*/
// Ejercicio 4
/*
int main(){
  float base, altura, sup=0;
  cout<<"Ingrese el valor de la base: "; cin>>base;
  cout<<"Ingrese el valor de la altura: "; cin>>altura;
  sup = (base*altura)/2;
  if (sup < 100){
    sup *= 100;
    cout<<"La superficie calculada es de: "<<sup<<" mm2"<<endl;
  } else {
    sup /= 10000;
    cout<<"La superficie calculada es de: "<<sup<<" m2"<<endl;
  }
  return 0;
}
*/
// Ejercicio 5
/*
int main(){
  int n1, n2, n3;
  cout<<"Ingrese un primer valor: "; cin>>n1;
  cout<<"Ingrese un segundo valor: "; cin>>n2;
  cout<<"Ingrese un tercer valor: "; cin>>n3;
  if (n1 >= n2 && n1 >= n3){ // Suponiendo que se ingresen valores iguales
    cout<<"El numero mayor es: "<<n1<<endl;
  } else if (n2 >= n1 && n2 >= n3){
    cout<<"El numero mayor es: "<<n2<<endl;
  } else if (n3 >= n1 && n3 >= n2){
    cout<<"El numero mayor es: "<<n3<<endl;
  }
  return 0;
}
*/
// Ejercicio 6
/*
int main(){
  int dia_1, mes_1, anio_1, dia_2, mes_2, anio_2;
  cout<<"Ingrese una fecha en formato DD/MM/AAAA separando cada dato por un espacio. (Ej: 14 01 2004) : "; cin>>dia_1>>mes_1>>anio_1;
  cout<<"Ingrese una fecha en formato DD/MM/AAAA separando cada dato por un espacio. (Ej: 14 01 2004) : "; cin>>dia_2>>mes_2>>anio_2;
  // Cabe aclarar que en estos ejemplos se mantiene la confianza en el usuario, es decir, digitara tal cual lo indicado.
  if (anio_1 > anio_2){
    cout<<"La fecha mas reciente es: "<<dia_1<<"/"<<mes_1<<"/"<<anio_1<<endl;
  } else if (anio_1 < anio_2){
      cout<<"La fecha mas reciente es: "<<dia_2<<"/"<<mes_2<<"/"<<anio_2<<endl;
  } else if (anio_1 == anio_2){

    if (mes_1 > mes_2){
      cout<<"La fecha mas reciente es: "<<dia_1<<"/"<<mes_1<<"/"<<anio_1<<endl;
    } else if(mes_1 < mes_2){
      cout<<"La fecha mas reciente es: "<<dia_2<<"/"<<mes_2<<"/"<<anio_2<<endl;
    } else if (mes_1 == mes_2){
      
      if (dia_1 > dia_2){
        cout<<"La fecha mas reciente es: "<<dia_1<<"/"<<mes_1<<"/"<<anio_1<<endl;
      } else if (dia_1 < dia_2){
        cout<<"La fecha mas reciente es: "<<dia_2<<"/"<<mes_2<<"/"<<anio_2<<endl;
      } else if (dia_1 == dia_2){
        cout<<"Se ingreso la misma fecha."<<endl;
        cout<<"La fecha es: "<<dia_1<<"/"<<mes_1<<"/"<<anio_1<<endl;
      }
    }
  }
  return 0;
}
*/
// Ejercicio 7
/*
int main(){
  float l1, l2, l3;
  cout<<"Ingrese un primer segmento de un posible triangulo: "; cin>>l1;
  cout<<"Ingrese un segundo segmento de un posible triangulo: "; cin>>l2;
  cout<<"Ingrese un tercer segmento de un posible triangulo: "; cin>>l3;
  if (l1 == l2 && l1 == l3){
    cout<<"Forman un triangulo."<<endl;
  } else if (l1 >= l2 && l1 >= l3 && l1 < l2+l3){
    cout<<"Forman un triangulo."<<endl;
  } else if (l2 >= l1 && l2 >= l3 && l2 < l1+l3){
    cout<<"Forman un triangulo."<<endl;
  } else if (l3 >= l1 && l3 >= l2 && l3 < l1+l2){
    cout<<"Forman un triangulo."<<endl;
  } else {
    cout<<"No forman un triangulo."<<endl;
  }
  return 0;
}
*/
// Ejercicio 8
/*
int main(){
  float l1, l2, l3;
  cout<<"Ingrese un primer lado de un triangulo: "; cin>>l1;
  cout<<"Ingrese un segundo lado de un triangulo: "; cin>>l2;
  cout<<"Ingrese un tercer lado de un triangulo: "; cin>>l3;
  // Suponiendo que el usuario ingrese 3 lados VALIDOS* (Ejercicio 7) 
  if (l1 == l2 && l2 == l3){
    cout<<"El triangulo ingresado es un equilatero";
  } else if (l1 == l2 && l2 != l3 || l2 == l3 && l1 != l2 || l1 == l3 && l1 != l2){
    cout<<"El triangulo ingresado es isoceles";
  } else if (l1 != l2 && l2 != l3 && l1 != l3){
    cout<<"El triangulo ingresado es escaleno";
  }
  return 0;
}
*/
// Ejercicio 9
int main(){
  
  
  return 0;
}