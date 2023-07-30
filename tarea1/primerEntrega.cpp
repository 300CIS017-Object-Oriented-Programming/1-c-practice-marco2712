/*
Fecha: 29 de julio de 2023
Estudiante: Marco Antonio Riascos Salguero
Codigo: 8952273
Primera entrega de tarea de progrmacion orientada a objetos
*/
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include<string>
#include <stdio.h>
#include <cstdlib>
#include <sstream>

using namespace std;

//             Primer ejercicio

void inputOutput(){
    int a,b,c,result;
    cin >> a >> b >> c; // recibe diferentes input por el normal standard de datos
    result = a + b + c; // suma los datos
    cout << result << endl; // imprime el resultado
}

//           segundo ejercicio

void condicionalStament(){
    int n;
    cin >> n;
    if(n > 9){ // verifica si el numero es mayor a 9 
        cout << "Greater than 9" << endl;
    }
    else{ // si es menor, busca entre los condicioneales para imprimir su respectivo numero en letras
        if(n == 1){
            cout << "one" << endl;
        }
        else if( n == 2){
            cout << "two" << endl;
        }
        else if( n == 3){
            cout << "three" << endl;
        }
        else if( n == 4){
            cout << "four" << endl;
        }
        else if( n == 5){
            cout << "five" << endl;
        }
        else if( n == 6){
            cout << "six" << endl;
        }
        else if(n == 7){
            cout << "seven" << endl;
        }
        else if( n == 8){
            cout << "eight" << endl;
        }
        else if( n == 9){
            cout << "nine" << endl;
        }
    }
}


//      Tercer Ejercicio

bool isEven(int n){ // esta funiocion permite determinar si es par, de los contraio retorna false
    bool ans = false;
    if(n % 2 == 0){
        ans = true;
    }
    return ans;
}
bool forLoop() {
    vector<string>lowercase = {"one","two","three","four","five","six","seven","eight","nine"};
    int a,b, ans;
    cin >> a >> b;
    int i;
    for(i = a; i <= b; i++){
        if(i < 10){ // compara si hay un valor menor a 10 y busca en el vector su respectivo nombre en letras
            cout << lowercase[i -1] << endl; 
        }
        else{
            ans = isEven(i); // la la funcion que le permite saber si es par o no
            if(ans == true){
                cout << "even"<<endl;
            }
            else{
                cout << "odd" << endl;
            }
        }
    }
}

//         Cuarto ejercicio

void update(int *a,int *b) {
    int ans, ans2;
    ans = *a + *b; //guarda la inforamcion de la suma para no modificar las direcciones de menoria 
    ans2= abs(*a - *b);
    *a = ans; // asigna a los punteros nuevas direcciones a las que apuntan
    *b = ans2;
}
bool funcions() {
    int a, b;
    int *pa = &a, *pb = &b; //asigna los puneteros 
    scanf("%d %d", &a, &b);
    update(pa, pb); // llama la fucnion que realiza los cambios
    printf("%d\n%d", a, b);
}

//           Quinto ejercicio

void arrays() {
    int nm, nc; // nm: numero de matrices, nc: numero de consultas.
    cin >> nm >> nc;
    vector<vector<int>> arrayMatrix(nm); // crea el vector que sera la matriz
    for (int r = 0; r < nm; ++r) {
        int longmatrix;
        cin >> longmatrix;
        arrayMatrix[r].resize(longmatrix); // vuelve a dar  el nuevo tamaño
        for (int k = 0; k < longmatrix; ++k) {
            cin >> arrayMatrix[r][k]; // agraga los digitos
        }
    }
    int numberRow, numberDigit;
    for (int h = 0; h < nc; ++h) {
        cin >> numberRow >> numberDigit; // recibe los casos de prueba
        if (numberRow >= 0 && numberRow < nm && numberDigit >= 0 && numberDigit < arrayMatrix[numberRow].size()) {
            cout << arrayMatrix[numberRow][numberDigit] << endl;  // verifica si hay un posccion a la que
        }                                                         // se puded acceder
    }
}

//      sexto ejercicio

void strings() {
	string first, second;
    cin >> first >> second;
    int lengthFirst, lengthSecond;
    lengthFirst = first.size(); // halla la longitud de las palabras 
    lengthSecond = second.size();
    cout << lengthFirst << " " << lengthSecond << endl; //imprime las palabras con un espacio
    string total = first + second; // concatena los strings
    cout << total << endl;
    char letterone = first[0]; //intercambia la primera letra de cada palabra
    char lettertwo = second[0];
    first[0] = lettertwo;
    second[0] = letterone;
    cout << first << " " << second << endl;
    
}

//        septimo Ejercicio

class Student{
    private:  // fija los paramtreos de la clase privados por el principio de abstraccion
    int age;
    int standard;
    string first_name;
    string last_name;
    public:
    void set_age(int a){ // se crean constructores para asignar valores a los parametros de la clase
        age = a;
    }
    void set_standard(int b){
        standard = b;
    }
    void set_first_name(string s){
        first_name = s;
    }
     void set_last_name(string m){
        last_name = m;
    }
    int get_age(){ // Funiones que permiten acceder a los paramtros privados de la clase
        return age;
    }
    int get_standard(){
        return standard;
    }
    string get_last_name(){
        return last_name;
    }
    string get_first_name(){
        return first_name;
    }
    string to_string(){
        string total;
        string number_age =std::to_string(age); //esta funcion de std ppermite transformar un nunmero a cadena
        string number_standard = std::to_string(standard);
        total = number_age + "," +first_name + "," +last_name+ "," + number_standard; //concatena los stirngs con una ";"
        return total;
    }
};

void type_class() {
    int age, standard;
    string first_name, last_name;
    cin >> age >> first_name >> last_name >> standard;
    Student st; // crea la clase y le asigna valores
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n"; // utiliza las funciones de la clase para acceder a los valores privdos e imprimirlos
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
}

//        Octavo Ejercicio

class Student2{
private:
    int scores[5]; // arreglo que almacena las notas de los estudinates

public:
    void input() {
        for (int i = 0; i < 5; ++i) {
            cin >> scores[i]; // almacena todas las notas del estudiante
        }
    }
    int calculateTotalScore() { // calcula el total de la nota y lo retorna 
        int average_score = 0;
        for (int i = 0; i < 5; ++i) {
            average_score += scores[i];
        }
        return average_score;
    }
};

void scores_students() {
    int n; // number of students
    cin >> n;
    Student2 *s = new Student2[n]; // an array of n students
    
    for(int i = 0; i < n; i++){
        s[i].input();
    }
    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();
    // determine how many students scored higher than kristen
    int count = 0; 
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }
    // print result
    cout << count;
}

int main() {
    inputOutput();
    condicionalStament();
    forLoop();
    funcions();
    arrays();
    strings();
    type_class();
    scores_students();
    return 0;
}