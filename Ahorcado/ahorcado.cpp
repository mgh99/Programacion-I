#include <iostream>

using namespace std;

void EscribirMensaje(string mensaje, bool escribeArriba = true, bool escribeAbajo = true){

    if (escribeArriba){
        cout << "+-----------------------------------------+" << endl;
        cout << "I";
    }else{
        cout << "I";
    }

    bool frente = true;
    for (int i = mensaje.length(); i < 41; i ++){   //se refiere a la longitud del mensaje
    // 41 es el numero de simbolos de "-" que hay en el cuadro del programa
        if (frente){
            mensaje = " " + mensaje;
        }else{
            mensaje = mensaje + " ";
        }

        frente = !frente;
    }
    cout << mensaje.c_str();

    if (escribeAbajo){
        cout << "I"<< endl; // debe de haber un salto de linea para que salga más abajo la siguiente linea
        cout << "+-----------------------------------------+" << endl;
    }else{
        cout << "I" << endl; // al poner este salto de linea la segunad cuerda (I) se coloca debajo
    }
}

void DibujoAhorcado( int contador = 0){

    if(contador >=1 ){ // en el dibujo va un "I"

        EscribirMensaje("I", false, false); // las palabras de false significa que no escriba las lineas de las de (frente y boton) de antes

    }else{ // son para poner los cierres de los extremos

        EscribirMensaje("", false, false); // false significa que no muestra en pantalla las lineas de (frente y boton)

    }

    if(contador >=2 ){ // en el dibujo va un "I"

        EscribirMensaje("I", false, false);

    }else{

        EscribirMensaje("", false, false);
        EscribirMensaje("", "", "");

    }

    if(contador >=3 ){ // en el dibujo va un "O", es la cabeza

        EscribirMensaje("O", false, false);

    }else{

        EscribirMensaje("", false, false);

    }

    if(contador ==4 ){ // en el dibujo va un "/", es un brazo

        EscribirMensaje("/", false, false);
    }

    if(contador == 5 ){ // en el dibujo va un "/|", es el tronco

        EscribirMensaje("/|", false, false);
    }

    if(contador >= 6 ){ // en el dibujo va un "/|\", es todo el cuerpo

        EscribirMensaje("/|\\", false, false); // he tenido que poner dos brazos izquierdos porque con uno era una funcion del texto
    }else{

        EscribirMensaje("", false, false);

    }

    if(contador >=7 ){ // en el dibujo va un "|", es del cuerpo

        EscribirMensaje("|", false, false);

    }else{

        EscribirMensaje("", false, false);

    }

    if(contador == 8 ){ // en el dibujo va un "/", es una pierna

        EscribirMensaje("/", false, false);
    }

    if(contador >= 9 ){ // en el dibujo va un "/ \", es todo el cuerpo

        EscribirMensaje("/ \\", false, false);
    }else{

        EscribirMensaje("", false, false);

    }


}

void EscribirLetras(string mensaje, bool escribeArriba = true, bool escribeAbajo = true){

    if (escribeArriba){
        cout << "+-----------------------------------------+" << endl;
        cout << "I";
    }else{
        cout << "I";
    }

    bool frente = true;
    for (int i = mensaje.length(); i < 41; i ++){   //se refiere a la longitud del mensaje
    // 41 es el numero de simbolos de "-" que hay en el cuadro del programa
        if (frente){
            mensaje = " " + mensaje;
        }else{
            mensaje = mensaje + " ";
        }

        frente = !frente;
    }
    cout << mensaje.c_str();

    if (escribeAbajo){
        cout << "I"<< endl; // debe de haber un salto de linea para que salga más abajo la siguiente linea
        cout << "+-----------------------------------------+" << endl;
    }else{
        cout << "I" << endl; // al poner este salto de linea la segunad cuerda (I) se coloca debajo
    }
}

void EscribirAbecedario1(string mensaje, bool escribeArriba = true, bool escribeAbajo = true){

    if (escribeArriba){

        cout << "I";
    }else{
        cout << "I";
    }

    bool frente = true;
    for (int i = mensaje.length(); i < 41; i ++){   //se refiere a la longitud del mensaje
    // 41 es el numero de simbolos de "-" que hay en el cuadro del programa
        if (frente){
            mensaje = " " + mensaje;
        }else{
            mensaje = mensaje + " ";
        }

        frente = !frente;
    }
    cout << mensaje.c_str();

    if (escribeAbajo){
        cout << "I"<< endl;

    }else{
        cout << "I" << endl;
    }
}

void EscribirAbecedario2(string mensaje, bool escribeArriba = true, bool escribeAbajo = true){

    if (escribeArriba){

        cout << "I";

    }else{

        cout << "I";
    }

    bool frente = true;
    for (int i = mensaje.length(); i < 41; i ++){   //se refiere a la longitud del mensaje
    // 41 es el numero de simbolos de "-" que hay en el cuadro del programa
        if (frente){
            mensaje = " " + mensaje;
        }else{
            mensaje = mensaje + " ";
        }

        frente = !frente;
    }
    cout << mensaje.c_str();

    if (escribeAbajo){
        cout << "I"<< endl; // debe de haber un salto de linea para que salga más abajo la siguiente linea
        cout << "+-----------------------------------------+" << endl;
    }else{
        cout << "I" << endl; // al poner este salto de linea la segunad cuerda (I) se coloca debajo
    }
}

bool EscribirPalabraCompruebaGana(string palabra, string adivinar){

    bool ganar = true;
    string s;

    for (int i= 0; i < palabra.length(); i++){

        if(adivinar.find(palabra[i]) == string::npos){

            ganar = false;
            s += "_ ";

        }else{

            s += palabra[i];
            s += " ";

        }
    }

    EscribirMensaje(s, false);


}

void EscribirMensaje2(string mensaje, bool escribeArriba = true, bool escribeAbajo = true){

    if (escribeArriba){

        cout << "I";
    }else{
        cout << "I";
    }

    bool frente = true;
    for (int i = mensaje.length(); i < 41; i ++){   //se refiere a la longitud del mensaje
    // 41 es el numero de simbolos de "-" que hay en el cuadro del programa
        if (frente){
            mensaje = " " + mensaje;
        }else{
            mensaje = mensaje + " ";
        }

        frente = !frente;
    }
    cout << mensaje.c_str();

    if (escribeAbajo){
        cout << "I"<< endl; // debe de haber un salto de linea para que salga más abajo la siguiente linea
        cout << "+-----------------------------------------+" << endl;
    }else{
        cout << "I" << endl; // al poner este salto de linea la segunad cuerda (I) se coloca debajo
    }
}


int main(){
    string adivinar = "ABHJIKKLL";

    EscribirMensaje("JUEGO DEL AHORCADO"); // escribe el mensaje en el centro del cuadrado que lo rodea
    DibujoAhorcado(9); // dibuja el numero de lineas que estan marcados en el if
    EscribirLetras("LETRAS DISPONIBLES");
    EscribirAbecedario1(" A B C D E F G H I J K L M ");
    EscribirAbecedario2(" N O P Q R S T U V W X Y Z ");
    EscribirMensaje2("ADIVINA LA PALABRA");
    EscribirPalabraCompruebaGana("ALEXES", adivinar);
    getchar();
    return 0;


}



/* como podría quedar eL JUEGO DEL AHORCADO:

+-----------------------------------------+   
I          JUEGO DEL AHORCADO             I
+-----------------------------------------+
I                   I                     I
I                   I                     I
I                   O                     I
I                  |I\                    I
I                   I                     I
I                  | \                    I
I              *.........*                I
I              I         I                I
+-----------------------------------------I
I            LETRAS DISPONIBLES           I
+-----------------------------------------I
I       A B C D F G H I J K L M           I
I       N O P Q R T U V W X Y Z           I
+-----------------------------------------I
I   ADIVINA LA PALABRA, TIENES X VIDAS    I
+-----------------------------------------I
I  _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _  I
+-----------------------------------------+
*/
