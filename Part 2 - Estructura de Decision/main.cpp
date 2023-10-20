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
/*
int main(){
  int nro;
  cout<<"Ingrese un numero de cinco cifras: "; cin>>nro;
  if (nro%10 == nro/10000){
    nro /= 10; // 12021 -> 1202
    nro -= (nro/1000)*1000; // 1202 - 1000 -> 202

    if (nro%10 == nro/100){
      cout<<"El numero ingresado es capicua"<<endl;
    } else {
      cout<<"El numero ingresado no es capicua"<<endl;
    }

  } else {
    cout<<"El numero ingresado no es capicua"<<endl;
  }
  return 0;
}
*/
// Ejercicio 10
/*
int main(){
  int dia=0, mes, anio;
  cout<<"Ingrese el mes y el anio en formato de MM AAAA separando cada dato con un espacio (Ej: 07 2004): "; cin>>mes>>anio;
  if (anio>=10000 || anio<=999){
    cout<<"El anio ingresado no es valido. Recuerda que debe ser de 4 digitos y positivo."<<endl;
  } else {
    switch (mes){
    case 1:
      dia = 31;
      break;
    case 2:
      if (anio%4 ==0){
        dia = 29;
      } else {
        dia = 28;
      } 
      break;
    case 3:
      dia = 31;
      break;
    case 4:
      dia = 30;
      break;
    case 5:
      dia = 31;
      break;
    case 6:
      dia = 30;
      break;
    case 7:
      dia = 31;
      break;
    case 8:
      dia = 31;
      break;
    case 9:
      dia = 30;
      break;
    case 10:
      dia = 31;
      break;
    case 11:
      dia = 30;
      break;
    case 12:
      dia = 31;
      break;
    default:
      cout<<"El mes ingresado no es valido. Recuerde que tiene que estar entre 1 o hasta 12"<<endl;
      break;
    }
  }
  cout<<"En el mes y anio ingresados, los dias del mes son: "<<dia<<endl;
  return 0;
}
*/
// Ejercicio 11
/*
int main(){
  int codigo, cantidad;
  float precio=0;
  cout<<"Ingrese el codigo del articulo: "; cin>>codigo;
  cout<<"Ingrese la cantidad que busca llevar de ese articulo: "; cin>>cantidad;
  switch (codigo){
    case 1:
    case 10:
    case 100:
      precio = cantidad*10;
      break;
    case 2:
    case 22:
    case 222:
      if (cantidad/10 >= 1){
        precio = (cantidad/10)*65;
        cantidad %= 10;
      }
      precio += cantidad*7;
      break;
    case 3:
    case 33:
      if (cantidad > 10){
        precio = cantidad*3;
        precio -= precio*0.1;
      } else{
        precio = cantidad*3;
      }
      break;
    case 4:
    case 44:
      precio = cantidad*2;
      break;
    default:
      cout<<"\n Error! El código digitado no es valido.";
      break;
  }
  cout<<"ARTICULO: "<<codigo<<" | CANTIDAD: "<<cantidad<<" | IMPORTE A PAGAR: $"<<precio<<endl;
  return 0;
}
*/
// Ejercicio 12
/*
int main(){
  char codigo;
  int importe=0, nro_historia;
  cout<<"Ingrese el numero de historia clinica: "; cin>>nro_historia;
  cout<<"Ingrese el codigo de prestamo a realizar: "; cin>>codigo;
  switch (codigo)
  {
    case 'A':
    case 'a':
      importe = 200;
      break;
    case 'D':
    case 'd':
      importe = 400;
      break;
    case 'F':
    case 'f':
      importe = 600;
      break;
    case 'M':
    case 'm':
      importe = 1500;
      break;
    case 'T':
    case 't':
      importe = 150;
      break;
    default:
      cout<<"Error! El codgio de prestamo ingresado no es valido. Recuerde que las opciones son 'A' 'D' 'F' 'M' 'T'."<<endl;
      break;
  }
  cout<<"#############################################"<<endl;
  cout<<"               NUMERO DE HISTORIA: "<<nro_historia<<endl;
  cout<<"               CODIGO DE PRESTAMO: "<<codigo<<endl;
  cout<<"               IMPORTE A PAGAR:    $"<<importe<<endl;
  cout<<"#############################################"<<endl;
  return 0;
}
*/