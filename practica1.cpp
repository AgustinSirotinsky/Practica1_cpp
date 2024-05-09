#include <iostream>
#include <stdlib.h>
#include <cstring>

using namespace std;

void Ejercicio1();
void Ejercicio2();
void Ejercicio3();
void Ejercicio4();
void Ejercicio5();
void Ejercicio6();
void Ejercicio7();
void Ejercicio8();
void Ejercicio9();
void Ejercicio10();
void Ejercicio11();
void Ejercicio12();
void Ejercicio13();
void Ejercicio14();
void Ejercicio15();
void Ejercicio16();
void Ejercicio17();
void Ejercicio18();
void Ejercicio19();
void Ejercicio20();

// string ReadString(string txt);
// char ReadText(string txt);
int ReadInt(const char txt[]);
double ReadDouble(const char txt[]);
float ReadFloat(const char txt[]);

//Funciones extras
int Random(int minimo, int maximo);

int main() {
    system("CLS");
    int choice = ReadInt("Hola! Eleji lo que quieras hacer: \n0. Creditos \n1 - 19 Ejercicios");
    system("CLS");
    while (choice<=-1 || choice >= 20)
    {
        cout<<"Incorrect input \n";
        int choice = ReadInt("Hola! Eleji lo que quieras hacer: \n0. Creditos \n1 - 19 Ejercicios");
    }
    if (choice==0){
        cout << " Materia: Algoritmos y Estructura de Datos \n Curso: K1042 \n Profesora: Roxana Leituz \n Estudiante: Agustin Sirotinsky \n Mail: agussiro06@gmail.com";
    }
    if (choice==1){
        Ejercicio1();
    }
    if (choice==2){
        Ejercicio2();
    }
    if (choice==3){
        Ejercicio3();
    }
    if (choice==4){
        Ejercicio4();
    }
    if (choice==5){
        Ejercicio5();
    }
    if (choice==6){
        Ejercicio6();
    }
    if (choice==7){
        Ejercicio7();
    }
    if (choice==8){
        Ejercicio8();
    }
    if (choice==9){
        Ejercicio9();
    }
    if (choice==10){
        Ejercicio10();
    }
    if (choice==11){
        Ejercicio11();
    }
    if (choice==12){
        Ejercicio12();
    }
    if (choice==13){
        Ejercicio13();
    }
    if (choice==14){
        Ejercicio14();
    }
    if (choice==15){
        Ejercicio15();
    }
    if (choice==16){
        Ejercicio16();
    }
    if (choice==17){
        Ejercicio17();
    }
    if (choice==18){
        Ejercicio18();
    }
    if (choice==19){
        Ejercicio19();
    }
    if (choice==20){
        Ejercicio20();
    }
    return 0;
}

//Ejercicio 1
void Ejercicio1(){
    cout << "Dados dos valores enteros A y B, informar la suma, la resta y el producto. \n \n";
    int x = ReadInt("Ingrese el primer numero");
    int y = ReadInt("Ingrese el segundo numero");

    int suma = x + y;
    int resta = x - y;
    int producto = x * y;

    cout << "Suma: " << suma << "\nResta: " << resta << "\nProducto: " << producto; 
}

void Ejercicio2(){
    cout<< "Dado un numero entero de la forma (AAAAMMDD), que representa una fecha valida mostrar el dia, mes y año que representa. \n \n";
    int fecha = ReadInt("Ingrese la fecha");
    
    int año = fecha / 10000;
    int mes = (fecha % 10000) / 100;
    int dia = fecha % 100;

    cout << "La fecha es: " << dia << "/" << mes << "/" << año;
}



void Ejercicio3() {
    cout << "Realizar la suma de todos los números pares entre 2 y 10000 \n \n";

    int numeroFinal=0;

    for (int i=2; i<=10000; i++){
        if (i%2==0){
            numeroFinal=numeroFinal+i;
            cout << "Suma personas[i]: " << numeroFinal << "\n";
        }
    }

    cout << "La suma de todos los numeros pares entre 2 y 10000 es " << numeroFinal;
}

void Ejercicio4() {
    cout << "Dado tres valores determinar e imprimir una leyenda según sea: “Forman triangulo” o “No forman triangulo”. \n \n";

    int L1 = ReadInt("Introduzca el valor del lado 1");
    int L2 = ReadInt("Introduzca el valor del lado 2");
    int L3 = ReadInt("Introduzca el valor del lado 3");

    if (L1+L2>=L3 && L1+L3>=L2 && L2+L3>=L1){
        cout << "Forman triangulo";
    }
    else {
        cout << "No forman triangulo";
    }
}

void Ejercicio5() {
    cout << "Dado un triángulo representado por sus lados L1, L2, L3, determinar e imprimir una leyenda según sea: equilátero, isósceles o escalenos. \n \n";

    int L1 = ReadInt("Introduzca el valor del lado 1");
    int L2 = ReadInt("Introduzca el valor del lado 2");
    int L3 = ReadInt("Introduzca el valor del lado 3");

    if (L1 == L2 && L1 == L3 && L2==L3){
        cout << "Equilatero";
    }
    else if (L1 == L2 || L1 == L3 || L2==L3){
        cout << "Isoceles";
    }
    else {
        cout << "Escaleno";
    }
}

void Ejercicio6() {
    cout << "Se ingresa una edad, mostrar por pantalla alguna de las siguientes leyendas: 'menor' si la edad es menor o igual a 12, 'cadete' si la edad esta comprendida entre 13 y 18, 'juvenil'si la edad es mayor que 18 y no supera los 26, 'mayor' en el caso que no cumpla ninguna de las condiciones anteriores \n \n";

    int edad=ReadInt("Ingresar edad:");
    if (edad <= 12) {
        cout << "menor";
    }
    else if (edad <=18){
        cout << "cadete";
    }
    else if (edad<=26){
        cout << "juvenil";
    }
    else {
        cout << "mayor";
    }

}

void Ejercicio7() {
    cout << "Calcular la velocidad (metros/segundo) de los participantes de una carrera de 1500mts dado el tiempo en segundos en recorrerla y determinar el nombre del mas veloz. Y si el tiempo fuera en minutos + segundos? \n \n";

    cout << "Eh?";
}

//Ej 8
void Ejercicio8() {
    cout << "Dados 50 números enteros, informar el promedio de los mayores que 100 y la suma de los menores que -10. \n \n";

    //Generador random de numeros
    int number;
    //Over 100
    int countOver100=0;
    float over100=0;
    float promedioOver100;
    //Negative
    int countNegative=0;
    int negative=0;
    int sumaNegative=0;
    //Other
    int other=0;
    for (int i=0; i<50; i++){
        number = Random(-100,200); // Random(minimo,maximo);
        cout << number << "\n";
        
        if (number >= 100){
            countOver100++;
            over100+=number;
            promedioOver100=over100/countOver100;
        }
        else if (number <= -10){
            countNegative++;
            negative-=number;
        }
        else {
            other++;
        }
    }
    cout << "Number over 100: " << countOver100 << "\n Numbers below -10: " << countNegative << "\n Other: " << other << "\n";
    cout << "Promedio de numeros por arriba de 100: " << promedioOver100 << "\n suma de los numeros menores que -10: " << negative;
}

void Ejercicio9() {
    cout << "Se realiza una inspección en una fábrica de pinturas, y se detectaron 20 infracciones. De cada infracción se tomó nota de los siguientes datos:\n "
    <<"-Tipo de Infracción (1, 2, 3, o 4)\n"
    <<"Motivo de la Infracción\n"
    <<"-Valor de la multa (un entero)\n" 
    <<"-Gravedad de la infracción ('L','M', 'G')\n \n"
    <<"Se pide informar al final del proceso:\n" 
    <<"•Los valores totales de la multa a pagar de acuerdo al tipo de gravedad.\n"
    <<"• La leyenda “Clausurar fabrica” si la cantidad de infracciones 3 y 4 con gravedad “G” sean mayor a 3. \n \n";


}

//Ejercicio 10
struct Ej10{
        int cantEmpleados;
        int menor1520=0;
        int menor2780=0;
        int menor5999=0;
        int mayor5999=0;
    };

void Ejercicio10() {
    cout << "Se ingresa un conjunto de valores float, cada uno de los cuales representan el sueldo de un empleado, excepto el ultimo valor que es cero e indica el fin del conjunto. Se pide desarrollar un programa que determine e informe:\n"
    <<"-Cuantos empleados ganan menos $ 1.520.\n"
    <<"-Cuantos ganan $1.520 o mas pero menos de $2.780.\n"
    <<"-Cuantos ganan $2.780 o mas pero menos de $5.999.\n"
    <<"-Cuantos ganan $5.999 o mas.\n \n";

    Ej10 ej10;
    ej10.cantEmpleados=ReadInt("Cuantos empleados hay?");
    float sueldos[ej10.cantEmpleados+1]; //+1 para el utlimo valor que tiene que dar 0
    for (int i=0; i<ej10.cantEmpleados; i++){
        sueldos[i]=ReadFloat("Ingresar sueldo");
        if(sueldos[i]<1520){
            ej10.menor1520++;
        }
        else if(sueldos[i]<2780){
            ej10.menor2780++;
        }
        else if(sueldos[i]<5999){
            ej10.menor5999++;
        }
        else{
            ej10.mayor5999++;
        }
    }
    cout << "Empleados que ganan menos de 1520: " << ej10.menor1520 << "\n"
    << "Empleados que ganan entre 1520 y 2780: " << ej10.menor2780 << "\n"
    << "Empleados que ganan entre 2780 y 5999: " << ej10.menor5999 << "\n"
    << "Empleados que ganan mas de 5999: " << ej10.mayor5999 << "\n";
}

//Ejercicio 11

struct Ej11{
    int N;
    int mayor=0;
    int menor;
    int posicionMayor=0;
    int posicionMenor=0;
};
void Ejercicio11() {
    cout << "Dados N valores informar el mayor, el menor y en que posición del conjunto fueron ingresados. \n \n";

    Ej11 ej11;
    ej11.N=ReadInt("Cuantos valores hay?");
    int valores[ej11.N+1]; //+1 para el utlimo valor que tiene que dar 0
    for (int i=0; i<ej11.N; i++){
        valores[i]=ReadInt("Ingresar valor numero");
        if (i==0){ //Si es la primera iteracion hago que el valor de ej11.menor sea igual al numero que se incializo primero
            ej11.menor=valores[i];
        }
        if (valores[i]>ej11.mayor){
            ej11.mayor=valores[i];
            ej11.posicionMayor=i+1;
        }
        else if (valores[i]<ej11.menor){
            ej11.menor=valores[i];
            ej11.posicionMenor=i+1;
        }
    }
    cout << "El mayor es: " << ej11.mayor << " y se encuentra en la posicion: " << ej11.posicionMayor << "\n"
    << "El menor es: " << ej11.menor << " y se encuentra en la posicion: " << ej11.posicionMenor << "\n";
}

//Ejercicio 12
struct Ej12{
    char nombre[20] ="";
    int año;
    int mes;
    int dia;
};
void Ejercicio12() {
    cout << " Dado un conjunto de Nombres y Fechas de nacimientos (AAAAMMDD), que finaliza con un Nombre= “FIN”, informar el nombre de la persona con mayor edad y el de la mas joven. Utilizar la función strcmp (<cstring>) para evaluar fin de datos. \n \n";

    // int n = ReadInt("Ingresar la cantidad de valores que quiera ingresar");
    
    Ej12 personas[99];
    Ej12 viejo;
    Ej12 joven;

    viejo.año=9999;
    viejo.mes=99;
    viejo.dia=99;

    joven.año=0;
    joven.mes=0;
    joven.dia=0;

    int fecha=0;

    for (int i=0;i<99;i++){
        cout << "Ingresar el nombre de la persona " << i+1 << "\n";
        cin >> personas[i].nombre;
        if (strcmp(personas[i].nombre, "FIN") == 0){
            i=99;
        }
        else {
            cout << "Ingrese su fecha de nacimiento (AAAAMMDD)" << " \n";
            cin >> fecha;

            personas[i].año = fecha / 10000;
            personas[i].mes = (fecha % 10000) / 100;
            personas[i].dia = fecha % 100;

            if (personas[i].año < viejo.año){
                viejo=personas[i];
            }
            else if (personas[i].año > joven.año){
                joven=personas[i];
            }
            else if (personas[i].año == viejo.año){
                if (personas[i].mes < viejo.mes){
                    viejo=personas[i];
                }
            else if (personas[i].mes > joven.mes){
                    joven=personas[i];
                }
            else if (personas[i].mes=viejo.mes){
                if (personas[i].dia < viejo.dia){
                    viejo=personas[i];
                    }
                else {
                    joven=personas[i];
                    }
                }
            }
        }
    }
    cout << "Persona mas joven: " << joven.nombre << "\nPersona mas vieja: " << viejo.nombre;
}

void Ejercicio13() {
    cout << "Dado un conjunto de valores, que finaliza con un valor nulo, determinar e imprimir (si hubo valores):\n" 
    <<"-El valor máximo negativo\n"
    <<"-El valor mínimo positivo\n"
    <<"-El valor mínimo dentro del rango -17.3 y 26.9\n"
    <<"-El promedio de todos los valores. \n";

    
}

void Ejercicio14() {
    
}

void Ejercicio15() {
    
}

void Ejercicio16() {
    
}

void Ejercicio17() {
    
}

void Ejercicio18() {
    
}

void Ejercicio19() {
    
}
void Ejercicio20() {
    int potencia;
    int numeroOriginal;
    int numeroElevado;
    
    numeroOriginal = ReadInt("Leer el numero");
    potencia = ReadInt("Leer la potencia");
    
    numeroElevado = numeroOriginal;
    for (int i=1; i<potencia; i++){
        numeroElevado*=numeroOriginal;
        cout << numeroOriginal << " Elevado a " << i << ": " << numeroElevado  << "\n";
    }
    cout << numeroOriginal << " Elevado a " << potencia << ": " << numeroElevado  << "\n";
} 

//Funcion random
int Random(int minimo, int maximo){
    int result;
    int distancia=maximo-minimo;

    //rand funciona de esta manera: rand() % distancia + numero inicial
    //Si quisiera usar un intervalo de 10 a 50 tendria que poner rand() % distancia(40) + numero inicial(10)
    result = rand() % distancia + minimo;

    return result;
}

//Leer Texto
// string ReadString(string txt) {
//     string result;
//     cout << txt << "\n";
//     getline(cin,result); //Uso getline para poder conseguir todas las palabras y no se frene en el primer espacio
//     return result;
// }


//Leer Texto con chars LA RE PUTA MADRE NO ANDA PQ C++ NO ME DEJA RETORNAR ARRAYS PORQUE MI VIDA ES TAN UN ASCO AHORA VOY A TENER QUE PONER 20000099999 CIN NOOOO
// char ReadText(const char txt[]){
//     char result[99];
//     cout << txt << "\n";
//     cin >> result;
//     return result;
// }

//Leer Numero
int ReadInt(const char txt[]){
    int result;
    cout << txt << "\n";
    cin>>result;
    return result;
}

//Leer Numeros Double
double ReadDouble(const char txt[]){
    double result;
    cout << txt << "\n";
    cin>>result;
    return result;
}

//Leer Numeros Float
float ReadFloat(const char txt[]){
    float result;
    cout << txt << "\n";
    cin>>result;
    return result;
}