
#include <stdio.h>      
#include <time.h>
#include <iostream>
using namespace std;      
int main ()
{
  time_t timer;               //guarda el tiempo del computador en la variable llamada timer
  struct tm tiempo = {0};        //crea una estructura de tiempo y la guarda en una variable llamada tiempo  
  double seconds;             //odejeto que almacena la estrucutra de tiempo

  tiempo.tm_hour = 0;            //variable constante
  tiempo.tm_min = 0;              //variable constante
  tiempo.tm_sec = 0;               //variable constante
  int ano;                       // variable int aun no definida
  cout<<"digite el año:"; cin>> ano;       //imprime el mensaje "digite el año:" y define el valor de la varible int  anterior
  int mes;                       // variable int aun no definida
  cout<<"digite el mes:"; cin>> mes;        //imprime el mensaje "digite el mes:" y define el valor de la varible int  anterior
  int dias;                       // variable int aun no definida
  cout<<"digite el dia:"; cin>> dias; //imprime el mensaje "digite el dia:" y define el valor de la varible int  anterior
  tiempo.tm_year=ano-1900;        // variable que depende de una operacion con otra variable
  
  tiempo.tm_mon=mes-1;           // variable que depende de una operacion con otra variable
  
  tiempo.tm_mday=dias;           // variable que depende de una operacion con otra variable
                                 //ademas estos valores de tiempo los redondea
  time(&timer);                  // convierte en tiempo unix lo de la varible timer

  seconds = difftime(timer,mktime(&tiempo)); //es una operacion de diferencial de tiempo entre la estructura tiempo y el timer en tiempo unix) 
  float dia=seconds/86400;        // operacion que convierte el tiempo unix (seg) en dias
  printf ("has vivido %.f :D ",dia);   // imprime el valor de la variable dia con una frase
  return 0;
}