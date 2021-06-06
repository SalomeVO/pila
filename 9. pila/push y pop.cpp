/*Ingenieria en Sistemas 
  Mercy Salome Vasquez Otiz
  Carnet: 0909-20-5202
  Tercer Semestre*/

//Declaracion de libreras 
#include <iostream>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>

using namespace std;

//Declaramos las variables a utilizar
int Espila;
int op;
int pila[1]; //inicializar vector

//funcion para determinar el tamaño del vector
int tampila(){
  
  cout<<"\n\n\tIngrese el limite de la Pila Estudiantil: "; 
  cin>>Espila; //leer variable
}//fin de funcion tampila

//Insertar los datos 
int push(){ 

  cout<<"\n\t                   * PUSH *"; //Titulo
  
  //for para ingresar los datos
  for (int i=0; i<Espila; i++){
  	
    cout<<"\n\tIngrese la calificacion del estudiante " << i+1 << ": "; 
    cin>>pila[i];//leer os datos ingresados
    
  }//fin de for
}//fin de funcion push

//Eliminar los datos 
int pop(){ 

  pila[Espila-1] = 0;//incializo pila
  
  cout<<"\n\t                *POP*                   ";
  cout <<"\n\t * La calificacion ha sido eliminada *"; //Mensaje a usuario
  _getch();//detener programa
}

//Visualizar los datos 
int mostrar(){

  do{                                            //numero
    cout<<"\n\tCalificacion del estudiante " << Espila << ": " << pila[Espila-1];//datos
    Espila--; }
    while (Espila!=0);
    cout<<"\n\n";//salto de linea
   _getch(); //detener programa
}

int main(){ 

  do{ system("color B0"); //Color de la pantalla
      system("cls"); //limpiar la pantallla
  
             //visualizar menu de opciones 
    cout<<"\n\t*********************************";
    cout<<"\n\t*        MENU PRINCIPAL         *";
    cout<<"\n\t*********************************";
    cout<<"\n\t* 1. Establecer tamano de array *";
    cout<<"\n\t* 2. Funcion PUSH               *";
    cout<<"\n\t* 3. Funcion POP                *";
    cout<<"\n\t* 4. Visualizar pila            *";
    cout<<"\n\t* 5. Finalizar                  *";
    cout<<"\n\t*********************************";
  
    cout<<"\n\t Elije una Opcion: ";
    cin>>op; //leer opcion
    system("cls"); //limpiar la pantallla
    
    switch(op){
    	
      case 1: system("cls"); //limpiar pantalla
        tampila(); //Invocacion de la funcion tampila
        break;
        
      case 2:system("cls"); //limpiar pantalla
        push(); //Invocacion de la funcion push
        break;
        
      case 3:system("cls"); //limpiar pantalla
        pop(); //Invocacion de la funcion pop
        break;
        
      case 4:system("cls"); //limpiar pantalla
        mostrar(); //Invocacion de la funcion mostrar
        break;
        
      case 5: break; //Para evitar que ingrese a la opcion de error
        
      default:{ system("color C0");//color de pantalla
      
		cout<<"\tERROR: El numero que ingreso es incorrecto!"; //Mensaje de error 
		_getch();//detener el porgrama para leer
		 break; }//mensaje de error
    }//fin default
  } while(op!=5);
}//fn de main 

/*Ingenieria en Sistemas 
  Mercy Salome Vasquez Otiz
  Carnet: 0909-20-5202
  Tercer semestre*/
  

