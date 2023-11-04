#include <iostream>

using namespace std;
// ########################################
// Ejercicios REPETICIÓN (Linea 9 hasta 492)
// Ejercicios MAXIMOS y MINIMOS (linea 495)
// ########################################


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
/*
int main()
{
    int cant_alumn, i=0, nota;
    float aprobados=0, desaprobados=0;
    string nombre;
    cout<<"Ingrese la cantidad de alumnos del curso: "; cin>>cant_alumn;
    i = cant_alumn;
    for (i; i > 0; i--){
        cout<<"Ingrese el nombre del alumno: "; cin>>nombre;
        cout<<"Ingrese la nota de ese alumno: "; cin>>nota;
        if (nota >= 0 && nota <=10){
            if (nota >=7){
                aprobados++;
                cout<<"\nEl alumno "<<nombre<<" esta aprobado.\n"<<endl;
            } else {
                desaprobados++;
                cout<<"\nEl alumno "<<nombre<<" esta desaprobado.\n"<<endl;
            }
        } else {
            cout<<"\nLa nota ingresada no es valida.\n"<<endl;
        }
    }
    aprobados = (aprobados*100)/cant_alumn;
    desaprobados = (desaprobados*100)/cant_alumn;
    cout<<"\nLa cantidad de alumnos aprobados fue de: "<<aprobados<<"%"<<endl;
    cout<<"La cantidad de alumnos desaprobados fue de: "<<desaprobados<<"%"<<endl;
    return 0;
}
*/
// Ejercicio 8
/*
int main(){
  int nro, partes=0;
  string numero= " ";
  cout<<"Ingrese un numero y te dire su representacion romana: "; cin>>nro;
  if (nro >= 1000){
    partes = nro/1000;
    nro -= partes*1000;
    switch (partes){
      case 1: numero += "M"; break;
      case 2: numero += "MM"; break;
      case 3: numero += "MMM"; break;
      default: break;
    }
  }
  if (nro >= 100){
    partes = nro/100;
    nro -= partes*100;
    switch (partes){
      case 1: numero += "C"; break;
      case 2: numero += "CC"; break;
      case 3: numero += "CCC"; break;
      case 4: numero += "CD"; break;
      case 5: numero += "D"; break;
      case 6: numero += "DC"; break;
      case 7: numero += "DCC"; break;
      case 8: numero += "DCCC"; break;
      case 9: numero += "CM"; break;
      default: break;
    }
  }
  if (nro >= 10){
    partes = nro/10;
    nro -= partes*10;
    switch (partes){
      case 1: numero += "X"; break;
      case 2: numero += "XX"; break;
      case 3: numero += "XXX"; break;
      case 4: numero += "XL"; break;
      case 5: numero += "L"; break;
      case 6: numero += "LX"; break;
      case 7: numero += "LXX"; break;
      case 8: numero += "LXXX"; break;
      case 9: numero += "XC"; break;
      default: break;
    }
  }
  if (nro >= 1){
    switch (nro){
      case 1: numero += "I"; break;
      case 2: numero += "II"; break;
      case 3: numero += "III"; break;
      case 4: numero += "IV"; break;
      case 5: numero += "V"; break;
      case 6: numero += "VI"; break;
      case 7: numero += "VII"; break;
      case 8: numero += "VIII"; break;
      case 9: numero += "IX"; break;
      default: break;
    }
  }
  cout<<"\nEl numero ingresado en romano seria: "<<numero<<endl;
  return 0;
}
*/
// Ejercicio 9
/*
int main(){
  int nro, suma=0, contador=0;
  float prom=0;
  for (int i = 1; i <= 50; i++){
    cout<<"Ingrese un numero: "; cin>>nro;
    if (nro > 100){
      prom+=nro;
      contador++;
    } else if (nro < -10){
      suma+=nro;
    }
  }
  return 0;
}
*/
// Ejercicio 10
/*
int main(){
  int equipos, partidos, puntaje;
  string nombre, resultado="\n";
  char codigo;
  cout<<"Ingrese la cantidad de equipos: "; cin>>equipos;
  partidos = equipos-1;
  for (equipos; equipos > 0; equipos--){
    puntaje = 0;
    cout<<"\nIngrese el nombre del equipo: "; cin>>nombre;
    for (int i = 1; i <= partidos ; i++){
      cout<<"Ingrese el resultado del partido numero "<<i<<":"; cin>>codigo;
      switch (codigo){
        case 'P':
          break;
        case 'E':
          puntaje += 1;
          break;
        case 'G':
          puntaje +=3;
        default:
          break;
      }
    }
    resultado += "El equipo " + nombre + " obtuvo un puntaje de " + to_string(puntaje) + "\n";
  }
  cout<<resultado;
  return 0;
}
*/
// Ejercicio 11
/*
int main(){
  int n, n_inicial=0, m;
  cout<<"Ingrese dos numeros separando cada dato por un espacio (Ej: 2 3)"; cin>>n>>m;
  n_inicial = n;
  cout<<"El numero ingresado ahora vale: "<<n<<endl;
  while (m != 1)
  {
    n += n_inicial;
    m--;
    cout<<"El numero ingresado ahora vale: "<<n<<endl;
  }
  return 0;
}
*/
// Ejercicio 12
/*
int main(){
  int nro, fac=1;
  cout<<"Ingrese un numero y se informara su factorial: "; cin>>nro;
  for (nro; nro>1;nro--){
    fac *= nro;
  }
  cout<<"\nEl factorial del nro es: "<<fac;
  return 0;
}
*/
// Ejercicio 13
/*
int main(){
  int nro, contador=0;
  float prom=0;
  do 
  {
    cout<<"Ingrese un nro: "; cin>>nro;
    if (nro>0)
    {
    prom += nro;
    contador++;
    }
  } while (nro != 0);
  prom /= contador;
  cout<<"\nEl promedio de los nros positivos es: "<<prom;
  return 0;
}
*/
// Ejercicio 14
/*
int main(){
  int cant_a=0, cant_b=0, cant_c=0, cant_d=0, sueldo=1;
  while (sueldo != 0)
  {
    cout<<"Ingrese el sueldo del empleado: "; cin>>sueldo;
    if (sueldo > 0)
    {
     if (sueldo < 900)
     {
      cant_a++;
     }
     if (sueldo >= 900 && sueldo < 1200)
     {
      cant_b++;
     }
     if (sueldo >= 1200 && sueldo < 2000)
     {
      cant_c++;
     }
     if (sueldo >= 2000)
     {
      cant_d++;
     }
    } else {
      cout<<"Debe ingresar un sueldo valido, minimo $1.";
    }
  }
  cout<<"\nCantidad de Empleados que ganan:"<<endl;
  cout<<"Menos de $900: "<<cant_a<<endl;
  cout<<"Entre $900 y $1200: "<<cant_b<<endl;
  cout<<"Entre $1200 y $2000: "<<cant_c<<endl;
  cout<<"Mas de $2000: "<<cant_d<<endl;
  return 0;
}
*/
// Ejercicio 15
/*
int main(){
  int edad=1, cant_18=0, cant_19=0, cant_20=0, cant_21=0, cant_22=0;
  while (edad != 0)
  {
    cout<<"Ingrese una edad entre 18 y 22: "; cin>>edad;
    switch (edad)
    {
      case 18: cant_18++; break;
      case 19: cant_19++; break;
      case 20: cant_20++; break;
      case 21: cant_21++; break;
      case 22: cant_22++; break;
      default: cout<<"La edad ingresada no es valida, recuerda que debe estar entre 18 y 22."<<endl; break;
    }
  }
  cout<<"\nEdades de personas:"<<endl;
  cout<<"De edad 18: "<<cant_18<<endl;
  cout<<"De edad 19: "<<cant_19<<endl;
  cout<<"De edad 20: "<<cant_20<<endl;
  cout<<"De edad 21: "<<cant_21<<endl;
  cout<<"De edad 22: "<<cant_22<<endl;
  return 0;
}
*/
// Ejercicio 16
/*
int main(){
  int fac, nro=1;
  while (nro != 0)
  {
    fac=1;
    cout<<"Ingrese un nro, si es positivo se informara su factorial: "; cin>>nro;
    if (nro >0)
    {
      for (nro; nro > 1; nro--)
      {
        fac *= nro;
      }
      cout<<"\nEl factorial de ese numero es: "<<fac<<endl;
    }
  }
  return 0;
}
*/
// Ejercicio 17
/*
int main(){
  int l1=1, l2=1, l3=1, cant_equi=0, cant_iso=0, cant_esc=0;
  while (l1 != 0 && l2 != 0 && l3 != 0)
  { // Teniendo confianza que el usuario ingresará un triangulo valido*
    cout<<"\nIngrese el lado 1 del triangulo: "; cin>>l1;
    if (l1 == 0){
      break;
    }
    cout<<"Ingrese el lado 2 del triangulo: "; cin>>l2;
    if (l2 == 0){
      break;
    }
    cout<<"Ingrese el lado 3 del triangulo: "; cin>>l3;
    if (l3 == 0){
      break;
    }
    if (l1 == l2 && l2 == l3)
    {
      cant_equi++;
    } else if (l1 == l2 && l1 != l3 || l1 == l3 && l1 != l2 || l2 == l3 && l2 != l1)
    {
      cant_iso++;
    } else {
      cant_esc++;
    }
  }
  cout<<"\nCantidad de triangulos ingresados:"<<endl;
  cout<<"Equilatero: "<<cant_equi<<endl;
  cout<<"Isoceles: "<<cant_iso<<endl;
  cout<<"Escaleno: "<<cant_esc<<endl;
  return 0;
}
*/
// Ejercicio 18
/*
int main(){
  int nota = 1, cant_nota=0;
  float prom=0;
  string nombre;
  for (int i = 1; i <= 25; i++)
  {
    int materia = 0; // Varibale no necesaria pero que ayuda a mantener una coherencia en el ejecutable*
    nota = 1;
    prom = 0;
    cant_nota = 0;
    cout<<"\nIngrese el nombre del alumno: "; cin>>nombre;
    while (nota != 0)
    {
      materia++;
      cout<<"Ingrese la nota que obtuvo de la materia numero "<<materia<<": "; cin>>nota;
      if (nota > 0)
      {
        prom += nota;
        cant_nota++;
      } else {
        cout<<"\nLa nota ingresada no es valida o es 0."<<endl;
      }
    }
    prom /= cant_nota;
    cout<<"El alumno "<<nombre<<" tiene un promedio de: "<<prom<<endl;
  }
  
  cout<<"Ingrese el nombre del alumno: "; cin>>nombre;
  cout<<"Ingrese la nota que obtuvo de la materia numero "<<": "; cin>>nota;
  return 0;
}
*/
// Ejercicio 19
/*
int main(){
  int nro_cuenta=1, saldo, cant_ac=0, cant_deu=0, cant_null=0;
  string nombre;
  while (nro_cuenta > 0)
  {
    cout<<"\nIngrese el nro de la cuenta: "; cin>>nro_cuenta;
    if (nro_cuenta < 0){
      break;
    }
    cout<<"Ingrese el nombre del duenio de la cuenta: "; cin>>nombre;
    cout<<"Ingrese el saldo de la cuenta: "; cin>>saldo;
    if (saldo == 0){
      nombre += " | Estado: NULO.";
      cant_null++;
    } else if (saldo > 0){
      nombre += " | Estado: ACREEDOR.";
      cant_ac++;
    } else {
      nombre += " | Estado: DEUDOR.";
      cant_deu++;
    }
    cout<<"Nro de cuenta: "<<nro_cuenta<<" | Nombre: "<<nombre<<endl;
  }
  cout<<"\nCantidad de cuentas segun tipo de saldo:"<<endl;
  cout<<"Con saldo NULO:"<<cant_null<<endl;
  cout<<"Con saldo ACREEDOR:"<<cant_ac<<endl;
  cout<<"Con saldo DEUDOR:"<<cant_deu<<endl;
  return 0;
}
*/

// MAXIMOS Y MINIMOS
// Ejercicio 1
/*
int main(){
  int nro, menor=0;
  for (int i = 1; i <= 50; i++)
  {
    cout<<"Ingrese un numero: "; cin>>nro;
    if (menor == 0){
      menor = nro;
      cout<<"\nActualmente el nro mas pequenio ingresado es: "<<menor<<endl;
    } else if (nro < menor){
      menor = nro;
      cout<<"\nActualmente el nro mas pequenio ingresado es: "<<menor<<endl;
    } 
  }
  return 0;
}
*/
// Ejercicio 2
/*
int main(){
  int nro, mayor=0, posicion=0;
  for (int i=1; i <= 50; i++)
  {
    cout<<"Ingrese un nro: "; cin>>nro;
    if (i == 1){
      mayor = nro;
      posicion = i;
    } else if (nro > mayor){
      mayor = nro;
      posicion = i;
    }
  }
  cout<<"\nEl numero mayor "<<mayor<<" se ingreso en la posicion: "<<posicion<<endl;
  return 0;
}
*/
// Ejercicio 3
/*
int main(){
  int nro, mayor=0, repetido=0;
  for (int i=1; i <= 5; i++)
  {
    cout<<"Ingrese un nro: "; cin>>nro;
    if (i == 1){
      mayor = nro;
      repetido++;
    } else if (nro > mayor){
      mayor = nro;
      repetido=1;
    } else if (nro == mayor){
      repetido++;
    }
  }
  cout<<"\nNumero mayor: "<<mayor<<" | Cantidad de veces ingresado: "<<repetido<<endl;
  return 0;
}
*/
// Ejercicio 4
/*
int main(){
  int nro, mayor=0, submayor=0;
  for (int i = 1; i < 10; i++)
  {
    cout<<"Ingrese un nro: "; cin>>nro;
    if (i == 1){
      submayor = mayor;
      mayor = nro;
    } else if (nro > mayor){
      submayor = mayor;
      mayor = nro;
    }
  }
  cout<<"Numero mayor ingresado: "<<mayor<<endl;
  cout<<"Numero submayor ingresado: "<<submayor<<endl;
  return 0;
}
*/
// Ejercicio 5
/*
int main(){
  int nro=1, cantidad=0, max_neg=0, min_pos=0; 
  float prom=0;
  while (nro != 0)
  {
    cout<<"Hola ingrese un nro:"; cin>>nro;
    prom += nro;
    cantidad++;
    if (max_neg == 0 && nro < 0){
      max_neg = nro;
    } else if (max_neg < nro && nro < 0){
      max_neg = nro;
    } else if (min_pos == 0 && nro > 0){
      min_pos = nro;
    } else if (min_pos > nro && nro > 0){
      min_pos = nro;
    }
  }
  prom /= cantidad-1;
  cout<<"\nEl valor maximo negativo fue: "<<max_neg<<endl;
  cout<<"El valor minimo positivo fue: "<<min_pos<<endl;
  cout<<"El promedio de todos los valores fue: "<<prom<<endl;
  return 0;
}
*/
// Ejercicio 6
/*
int main(){
  int anio, mes, dia, a_joven=0, m_joven=0, d_joven=0, a_viejo=0, m_viejo=0, d_viejo=0;
  string nombre, n_joven="", n_viejo="";
  while (nombre != "FIN"){
    cout<<"Ingrese su nombre: "; cin>>nombre;
    if (nombre == "FIN"){
      break;
    }
    do{ // Verificar si la fecha es valida
      cout<<"Ingrese su fecha de nacimiento separando cada dato con un espacio [AAAA MM DD , Ej:2004 01 14]: "; cin>>anio>>mes>>dia;
      if (anio < 1000 || mes < 1 || mes > 12 || dia < 1 || dia > 31){
        cout<<"\nError! Ingrese una fecha valida."<<endl;
      }
    } while (anio < 1000 || mes < 1 || mes > 12 || dia < 1 || dia > 31);
    if (a_joven == 0 || a_viejo == 0){ // Primer ingreso
      n_joven = nombre;
      a_joven = anio;
      m_joven = mes;
      d_joven = dia;
      a_viejo = anio;
      m_viejo = mes;
      d_viejo = dia;
    } else if (a_joven < anio){ // OBTECION DEL JOVEN
      n_joven = nombre;
      a_joven = anio;
      m_joven = mes;
      d_joven = dia;
    } else if (a_joven == anio){
      if (m_joven < mes){
      n_joven = nombre;
      a_joven = anio;
      m_joven = mes;
      d_joven = dia;
      } else if (m_joven == mes){
        if (d_joven < dia){
          n_joven = nombre;
          a_joven = anio;
          m_joven = mes;
          d_joven = dia;
        }
      }
    } else if (a_viejo > anio){ // OBTECION DEL VIEJO
      n_viejo = nombre;
      a_viejo = anio;
      m_viejo = mes;
      d_viejo = dia;
    } else if (a_viejo == anio){
      if (m_viejo > mes){
      n_viejo = nombre;
      a_viejo = anio;
      m_viejo = mes;
      d_viejo = dia;
      } else if (m_viejo == mes){
        if (d_viejo > dia){
          n_viejo = nombre;
          a_viejo = anio;
          m_viejo = mes;
          d_viejo = dia;
        }
      }
    }
  }
  cout<<"\nLa persona mas joven ingresada fue: "<<n_joven<<" del "<<a_joven<<" "<<m_joven<<" "<<d_joven<<endl;
  cout<<"La persona mas vieja ingresada fue: "<<n_viejo<<" del "<<a_viejo<<" "<<m_viejo<<" "<<d_viejo<<endl;
  return 0;
}
*/

// Ejercicio 7
#include <stdlib.h>
#include <time.h>
int main(){
  char continuar;
  int dado=1, mayor=0, submayor=0, puntaje=0, max_puntaje=0, cantidad=0;
  float prom=0;
  srand(time(NULL));
  do{
    for (int i = 1; i <= 5; i++){
      dado = 1 + (rand()%6);
      cout<<"El dado ahora es: "<<dado<<endl;
      if (i == 1){
        mayor = dado;
        cout<<"MAYOR ES: "<<mayor<<endl;
      } else if (dado > mayor){
        submayor = mayor;
        mayor = dado;
        cout<<"MAYOR ES submayor: "<<submayor<<endl;
        cout<<"MAYOR ES mayor: "<<mayor<<endl;
      }
    }
    puntaje = mayor + submayor;
    cout<<"El puntaje ahora es: "<<puntaje<<endl;
    if (max_puntaje == 0){
      max_puntaje = puntaje;
    } else if (max_puntaje<puntaje){
      max_puntaje = puntaje;
    }
    cantidad++;
    prom += puntaje;
    cout<<"MAX PUNTAJE:"<<max_puntaje<<endl;
    cout<<"PROMEDIO: "<<prom<<endl;
    do{
      cout<<"\nDesea continuar jugando? S/N: "; cin>>continuar;
      if (continuar != 'N' && continuar != 'n' && continuar != 'S' && continuar != 's'){
        cout<<"Esa opcion no es valida. Ingrese S para 'Si' o N para 'No'"<<endl;
      } 
    } while (continuar != 'N' && continuar != 'n' && continuar != 'S' && continuar != 's');
  } while (continuar != 'N' && continuar != 'n');
  prom /= cantidad;
  cout<<"\n==================================="<<endl;
  cout<<"Cantidad de tiros: "<<cantidad<<endl;
  cout<<"Maximo puntaje obtenido: "<<max_puntaje<<endl;
  cout<<"Puntaje promedio: "<<prom<<endl;
  return 0;
}