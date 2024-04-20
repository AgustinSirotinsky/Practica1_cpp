#include <iostream>
#include <stdlib.h>

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
int ReadInt(string txt);
double ReadDouble(string txt);
float ReaFloat(string txt);

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
            cout << "Suma actual: " << numeroFinal << "\n";
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
    cout << "Se realiza una inspección en una fábrica de pinturas, y se detectaron 20 infracciones. De cada infracción se tomó nota de los siguientes datos: \n - Tipo de Infracción (1, 2, 3, o 4) \n - Motivo de la Infracción \n - Valor de la multa (un entero) \n - Gravedad de la infracción (‘L’,‘M’, ‘G’) \n Se pide informar al final del proceso: \n • Los valores totales de la multa a pagar de acuerdo al tipo de gravedad. \n• La leyenda “Clausurar fabrica” si la cantidad de infracciones 3 y 4 con gravedad “G” sean mayor a 3. \n \n";


}

void Ejercicio10() {
    
}

void Ejercicio11() {
    
}

void Ejercicio12() {
    
}

void Ejercicio13() {
    
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


//Leer Texto con chars (no anda)
// char ReadText(string txt){
//     char[10+1] result;
//     cout << txt << "\n";
//     cin >> result;
//     return result;
// }

//Leer Numero
int ReadInt(string txt){
    int result;
    cout << txt << "\n";
    cin>>result;
    return result;
}

//Leer Numeros Double
double ReadDouble(string txt){
    double result;
    cout << txt << "\n";
    cin>>result;
    return result;
}

//Leer Numeros Float
float ReadFloat(string txt){
    float result;
    cout << txt << "\n";
    cin>>result;
    return result;
}
