#include <iostream>
#include <cstdlib>
#include <string>
#include <stdlib.h>
#include <math.h>
#include<conio.h>
#include<windows.h>
#include<iomanip>
#include "decimales a letras.cpp"


using namespace std;

void gotoxy(int x1, int y1){
	HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x1;
	dwPos.Y = y1;
	SetConsoleCursorPosition(hcon, dwPos);
	
	// OCULTAR CURSOR
	CONSOLE_CURSOR_INFO cci;
	GetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cci);
	cci.bVisible = 0;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cci);
}

char opcion;
int x, y;

int num, a;

int main(int argc, char *argv[])
{
    int opcion;
    bool repetir = true;
    
    do {
        system("cls");
        
        // Texto del menú que se verá cada vez
        cout << "\n\n\t\t\tMenu de Opciones Programas Basicos" << endl;
        cout << "\t\t\t----------------------------------" << endl;
        cout << "\n\t1.  Sumar dos numeros" << endl;
        cout << "\t2.  Restar dos numeros" << endl;
        cout << "\t3.  Multiplicar dos numeros" << endl;
        cout << "\t4.  Dividir dos numeros" << endl;
        cout << "\t5.  Numero Par o Impar" << endl;
        cout << "\t6.  Convertir kilometros a millas" << endl;
        cout << "\t7.  Convertir metros a pulgadas" << endl;
        cout << "\t8.  Convertir libras a kilos" << endl;
        cout << "\t9.  Convertir millas a kilometros" << endl;
        cout << "\t10. Convertir pulgadas a metros" << endl;
        cout << "\t11. Convertir kilos a libras" << endl;
        cout << "\t12. Palidromo" << endl;
        cout << "\t13. Convertir numeros arabigos a romanos" << endl;
        cout << "\t14. Convertir numeros a letras" << endl;
        cout << "\t15. Convertir numeros enteros con punto decimal a letras" << endl;
        cout << "\t16. Tabla de multiplicar" << endl;
        cout << "\t17. Tablas del 1 al 10" << endl;
        cout << "\t18. Multiplicacion Grafica" << endl;
        cout << "\t19. Convertir numero decimal a binario" << endl;
        cout << "\t20. Convertir numero decimal a hexadecimal" << endl;
        cout << "\t21. Figuras Geometricas" << endl;
        cout << "\t22. Mover un punto en toda la pantalla" << endl;
        cout << "\t23. Cajero Automatico" << endl;
        cout << "\t24. Calcular Hipotenusa" << endl;
        cout << "\t0.  SALIR" << endl;
        
        cout << "\n\tIngrese una opcion: ";
        cin >> opcion;
        
        cout<<endl;
    
        float saldo, ingresado, retirar, opc;
        bool repetir;
        int numm, nummm, a, b, c, d;
        int multi, multi2, multi3, multi4;
        int numero1, numero2;
		float resultado;
		int aux = 0, igual = 0;
		string texto;
		string binario = "";
        switch (opcion) {
            
			case 1:
                // Instrucciones para sumar dos números
                cout << "\n\tIngrese primer numero: ";
                cin >> numero1;
                
                cout << "\tIngrese segundo numero: ";
                cin >> numero2;
                
                cout << "\t---------------------------" << endl;
                resultado = numero1 + numero2;
                cout << "\tResultado: " << resultado << endl;
                
                system("pause>nul");
                break;
                
            case 2:
                // Instrucciones para restar dos números
                cout << "\n\tIngrese primer numero: ";
                cin >> numero1;
                
                cout << "\tIngrese segundo numero: ";
                cin >> numero2;
                
                cout << "\t---------------------------" << endl;
                resultado = numero1 - numero2;
                cout << "\tResultado: " << resultado << endl;
                
                system("pause>nul");
                break;
                
            case 3:
                // Instrucciones para multiplicar dos números
                cout << "\n\tIngrese primer numero: ";
                cin >> numero1;
                
                cout << "\tIngrese segundo numero: ";
                cin >> numero2;
                
                cout << "\t---------------------------" << endl;
                resultado = numero1 * numero2;
                cout << "\tResultado: " << resultado << endl;
                
                system("pause>nul");
                break;
                
            case 4:
                // Instrucciones para dividir dos números
                cout << "\n\tIngrese primer numero: ";
                cin >> numero1;
                
                cout << "\tIngrese segundo numero: ";
                cin >> numero2;
                
                cout << "\t---------------------------" << endl;
                
                if (numero2 == 0) {
                	cout << "\tResultado: No se puede dividir por cero." << endl; 
		} else {
			resultado = numero1 / (numero2 * 1.0);
			cout << "\tResultado: " << resultado << endl;
		}
        	
        	system("pause>nul");     
                break;
        	
			case 5:
				
				cout<<"*** Es Par o Impar ***"<<endl;
				cout<<""<<endl;
				
				int numero;
	
				cout << "Ingresa un numero: ";
				cin >> numero;
				
				cout << " " << endl;
				cout << "---------------------------" << endl;
				
				if(numero % 2 == 0){
					cout<<"Es par: ";
				}
	
				else {
    				cout<<"Es impar: ";
  				}
  	
				
				cout << numero << endl;
				
		        
                system("pause>nul");     
                break;
            
            case 6:
            	
            	cout<<"### Kilometros a Millas ###"<<endl;
				cout<<""<<endl;
	
				int num;
	
				cout<<"Ingrese kilometros : ";
				cin>>num;
				
				cout << " " << endl;
				cout << "---------------------------" << endl;
				
				cout<<num<<" kilometros a millas son: "<<num / 1.609<< endl;
            		
            	system("pause>nul");     
                break;
            
			case 7:
			
				cout<<"### Metros a Pulgadas ###"<<endl;
				cout<<""<<endl;
	
				int num2;
	
				cout<<"Ingrese metros : ";
				cin>>num2;
				
				cout << " " << endl;
				cout << "---------------------------" << endl;
				
				cout<<num2<<" metros a pulgadas son: "<<num2 * 39.37<< endl;
			
				system("pause>nul");     
            	break;
            
            case 8:
            	
            	cout<<"### Libras a Kilos ###"<<endl;
				cout<<""<<endl;
	
				int num3;
	
				cout<<"Ingrese libras : ";
				cin>>num3;
				
				cout << " " << endl;
				cout << "---------------------------" << endl;
				
				cout<<num3<<" libras a kilos son: "<<num3 / 2.205<<" kilos"<<endl;

            	system("pause>nul");     
            	break;
            
            case 9:
            
            	cout<<"### Millas a Kilometros ###"<<endl;
				cout<<""<<endl;
	
				int num4;
	
				cout<<"Ingrese millas : ";
				cin>>num4;
				
				cout << " " << endl;
				cout << "---------------------------" << endl;
				
				cout<<num4<<" millas a kilometross son: "<<num4 * 1.609<< endl;
            
            
           		system("pause>nul");     
           		break; 
            
            case 10:
            	
				cout<<"### Pulgadas a Metros ###"<<endl;
				cout<<""<<endl;
	
				int num5;
	
				cout<<"Ingrese pulgadas : ";
				cin>>num5;
				
				cout << " " << endl;
				cout << "---------------------------" << endl;
				
				cout<<num5<<" pulgadas a metros son: "<<num5 / 39.37<< endl;

				system("pause>nul");     
           		break;
            
            case 11:
            	
				cout<<"### Kilos a Libras ###"<<endl;
				cout<<""<<endl;
	
				int num6;
	
				cout<<"Ingrese kilos : ";
				cin>>num6;
				
				cout << " " << endl;
				cout << "---------------------------" << endl;
				
				cout<<num6<<" kilos a libras son: "<<num6 * 2.205<<" libras"<<endl;
	
				system("pause>nul");     
           		break;
           		
           	case 12:	
				
				//string texto;
    			//int aux = 0, igual = 0;
    
    			cout << "Ingrese la palabra o numero: ";
    			getline(cin >> ws, texto);
    
			    for(int ind = texto.length() - 1; ind >= 0; ind--) {
			        if(texto[ind] == texto[aux]) {
			            igual++;
			        }
			        aux++;
			    }
    			
    			cout << " " << endl;
				cout << "---------------------------" << endl;
    			
			    if(texto.length() == igual) {
			        cout << "La palabra o numero ingresado es palindromo" << endl;
			    } else {
			        cout << "La palabra o numero ingresado no es palindromo" << endl;
			    }
				
				system("pause>nul");     
           		break;
           		
           	case 13:	
           		
           		cout << "*** Convercion de numero arabigos a romanos ***" << endl;
				cout<<endl;
				
				cout << "Escribe el numero para convertir: "; 
				cin >> a;
				num=a;
				
				cout << " " << endl;
				cout << "---------------------------" << endl;
				
				cout<<endl;
				cout<<"El numero convertido es: ";
				
				while(num!=0)
				{
				
				if (num<= 3999 && num>= 1000){
				cout << "M";
				num = num -1000;
				}
				
				else if(num <1000 && num>=900)
				{
				cout << "CM";
				num = num - 900;
				}
				
				else if(num < 900 && num>500)
				{
				cout << "D";
				num = num - 500;
				}
				
				else if (num == 500)
				{
				cout << "D";
				num = num -500;
				}
				
				else if (num<500 && num>= 400)
				{
				cout << "CD";
				num = num - 400;
				}
				
				else if (num<400 && num >99)
				{
				cout << "C";
				num = num -100;
				}
				
				else if (num< 100 && num>89)
				{
				cout << "XC";
				num = num - 90;
				}
				
				else if (num< 90 && num>59)
				{
				cout << "L";
				num = num - 50;
				}
				
				else if(num<60 && num >50)
				{
				cout << "L";
				num = num - 50;
				}
				
				else if (num ==50)
				{
				cout << "L";
				num = num -50;
				}
				
				else if(num<50 && num>39)
				{
				cout << "XL";
				num = num - 40;
				}
				
				else if(num< 40 && num> 10)
				{
				cout << "X";
				num = num - 10;
				}
				
				else if(num == 10)
				{
				cout << "X";
				num = num -10;
				}
				
				else if(num==9)
				{
				cout << "IX";
				num = num - 9;
				}
				
				else if(num<=8 && num>=6)
				{
				cout << "V";
				num = num - 5;
				}
				
				else if (num == 5)
				{
				cout << "V";
				num = num - 5;
				}
				
				else if (num == 4)
				{
				cout << "IV";
				num = num - 4;
				}
				
				else if (num<= 3 && num>=1)
				{
				cout << "I";
				num = num - 1;
				}
				}
			
           		system("pause>nul");     
           		break;
           		
           	case 14:
           		
           		int x;
			    cout<<"ingrese un numero: ";
			    cin>>x;
			    
			    
			if((x<1)||(x>999)) cout<<"INGRESA UN NUMERO DEL 1 AL 999\n";
			else
			 
			    {
			        if(x>=900)   {cout<<"NOVECIENTOS " ;x=x-900;}
			       else if(x>=800)   {cout<<"OCHOCIENTOS " ;x=x-800;}
			       else if(x>=700)   {cout<<"SETECIENTOS " ;x=x-700;}
			       else if(x>=600)   {cout<<"SEISCIENTOS " ;x=x-600;}
			       else if(x>=500)   {cout<<"QUINIENTOS "  ;x=x-500;}
			       else if(x>=400)   {cout<<"CUATROCIENTOS "   ;x=x-400;}
			       else if(x>=300)   {cout<<"TRESCIENTOS " ;x=x-300;}
			       else if(x>=200)   {cout<<"DOSCIENTOS "  ;x=x-200;}
			       else if(x>100)    {cout<<"CIENTO "  ;x=x-100;}
			       else if(x==100)  {cout<<"CIEN"     ;x=x-100;}
			        if(x>90) {cout<<"NOVENTA Y "   ;x=x-90; }
			            if(x==90)   {cout<<"NOVENTA"  ;x=x-90; }  
			            if(x>80) {cout<<"OCHENTA Y "   ;x=x-80; }
			            if(x==80)   {cout<<"OCHENTA"  ;x=x-80; }
			            if(x>70) {cout<<"SETENTA Y "   ;x=x-70; }
			            if(x==70)   {cout<<"SETENTA"  ;x=x-70; }
			            if(x>60) {cout<<"SESENTA Y "   ;x=x-60; }
			            if(x==60)   {cout<<"SESENTA"  ;x=x-60; }
			            if(x>50) {cout<<"CINCUENTA Y " ;x=x-50; }
			            if(x==50)   {cout<<"CINCUENTA"    ;x=x-50; }
			            if(x>40) {cout<<"CUARENTA Y "  ;x=x-40; }
			            if(x==40)   {cout<<"CUARENTA" ;x=x-40; }
			            if(x>30) {cout<<"TREINTA Y "   ;x=x-30; }
			            if(x==30)   {cout<<"TREINTA"  ;x=x-30; }
			            if(x>20) {cout<<"VEINTI"       ;x=x-20; }
			            if(x==20)   {cout<<"VEINTE"       ;x=x-20; }
			        if(x>=16)    {cout<<"DIECI"        ;x=x-10; }
			       else if(x==15)   {cout<<"QUINCE"       ;x=x-15; }
			       else if(x==14)   {cout<<"CATORCE"  ;x=x-14; }
			       else if(x==13)   {cout<<"TRECE"        ;x=x-13; } 
			       else if(x==12)   {cout<<"DOCE"     ;x=x-12; }
			       else if(x==11)   {cout<<"ONCE"     ;x=x-11; }
			       else if(x==10)   {cout<<"DIEZ"     ;x=x-10; }      
			        if(x==9)    {cout<<"NUEVE"        ;x=x-9;  }
			        if(x==8)    {cout<<"OCHO"     ;x=x-8;  }
			        if(x==7)    {cout<<"SIETE"        ;x=x-7;  }
			            if(x==6)    {cout<<"SEIS"     ;x=x-6;  }
			       else if(x==5)    {cout<<"CINCO"        ;x=x-5;  }
			       else if(x==4)    {cout<<"CUATRO"       ;x=x-4;  }
			       else if(x==3)    {cout<<"TRES"     ;x=x-3;  }
			       else if(x==2)    {cout<<"DOS"      ;x=x-2;  }
			       else if(x==1)    {cout<<"UNO"      ;x=x-1;  }
			       }
			    cout<<endl;
				cin.ignore();return 0;
           		
           		system("pause>nul");     
           		break;
           		
           	case 15:	
           		
           		perro();
				system("pause");
           		
           		system("pause>nul");     
           		break;
           		
           		
           	case 16:	
           		
           		cout<<"*** UNA TABLA DE MULTIPLICAR ***"<<endl;
				cout<<""<<endl;
				
				int numero2;
				do{
					cout<<"Ingrese un numero: ";
					cin>>numero;
					cout<<""<<endl;
					
				}while((numero<1) || (numero>10));
				
				for(int i=1; i<=10; i++){
					cout<<numero<<" * "<<i<<" = "<<numero * i<<endl;
				}
           		
           		
           		system("pause>nul");     
           		break;	
           	
           	case 17:
           		
				cout<<"*** TODAS LAS TABLAS DE MULTIPLICAR ***"<<endl;
				cout<<""<<endl;
				
				for(int ii = 1; ii<=10; ii++){
					cout<<"--------------------------------------------------"<<endl;
					cout <<"La Tabla del "<< ii <<endl;
				
					for(int m10 =0; m10 <= 10; m10++){
						cout << ii << " x " << m10 << " = " <<ii * m10 <<endl;
					}
				}   
				  		
				system("pause>nul");     
           		break;
			
			case 18:
				
				cout<<"*** Multiplicacion Manual ***"<<endl;
				cout<<endl;
				
				//int numm, nummm, a, b, c, d;
				
				cout << "Ingrese la primera cifra: ";
				cin >> numm;
				
				cout << "Ingrese la segunda cifra: ";
				cin >> nummm;
				cout << endl;
				
				a = numm % 100 / 10;
				b = numm % 10 / 1;
				c = nummm % 100 / 10 ;
				d = nummm % 10 / 1;
				
				multi  = d * b;
				multi2 = d * a + multi % 100 / 10;
				multi3 = c * b;
				multi4 = c * a + multi3 % 100 / 10;
				
				
				if (multi >= 10){
					multi = multi % 10 / 1;
				}
				
				if (multi3 >= 10){
					multi3 = multi3 % 10 / 1;
				}
				
				cout << "  "<< a << " "<< b << endl;
				cout << "x "<< c << " "<< d << endl;
				cout <<"--------" << endl;
				cout << "  "<< multi2 << multi << endl;
				cout << " " << multi4 << multi3 << endl;
				cout <<"--------" << endl;
				cout << " " << numm*nummm << endl;
				cout<<endl;
							
				system("pause>nul");     
			    break;
			
			case 19:
			
				cout << "*** Decimal a Binario *** \n";
				cout<<""<<endl;
				
			    cout << "Ingrese un numero Decimal: ";
			    int numerob;
			    //string binario = "";
			    cin >> numero;
			    if (numero > 0) {
			        while (numero > 0) {
			            if (numero%2 == 0) {
			                binario = "0"+binario;
			            } else {
			                binario = "1"+binario;
			            }
			            numero = (int) numero/2;
			        }
			    } else if (numero == 0) {
			        binario = "0";
			    } else {
			        binario = "No se puede, por que es negativo";
			    }
			    
			    cout << " " << endl;
				cout << "----------------------------------------" << endl;
			    
			    cout << "El resultado de la conversion es: " << binario;
			
				system("pause>nul");     
			    break;
			
			case 20:
				
				cout<<"*** Decimal a Hexadecimal ***"<<endl;
				cout<<""<<endl;
				
				int val;
			    cout<<"Ingrese un numero Decimal: ";
				cin >> val;
			    
			    cout<<""<<endl;
				
				cout << " " << endl;
				cout << "---------------------------" << endl;
				
				cout << hex << "El resultado de la conversion es: "<<val << endl;
				
				system("pause>nul");     
			    break;
			
			case 21:
				
				int opcion;
			    repetir = true;
			    
			    do {
			        system("cls");
			        
			        // Texto del menú que se verá cada vez
			        cout << "\n\nElija una figura" << endl;
			        cout << "" << endl;
			        cout << "1. Circulo" << endl;
			        cout << "2. Cuadrado" << endl;
			        cout << "3. Rombo" << endl;
			        cout << "4. Triangulo" << endl;
			        cout << "0. SALIR" << endl;
			        
			        cout << "\nIngrese una opcion: ";
			        cin >> opcion;
			        
			        cout<<""<<endl;
			        
			        int n, rows, columns;
			        int radius;
					switch (opcion) {
			            
						case 1:
			                
			                int z;
			                radius = 6;
						    int i,j;
						    for (i=0; i<=2*radius; i++)
						    {
						        for (j=0; j<=2*radius; j++)
						        {
						            double distance = sqrt((double)(i-radius)*(i-radius) + (j-radius)*(j-radius));
						            if (distance>radius-0.65 && distance<radius+0.2)
						            {
						                std::cout << "**";
						            }
						            else
						            { 
						                std::cout << "  ";
						            }
						        }
						        std::cout << std::endl;
							}
			                
			                system("pause>nul"); // Pausa
			                break;
			                
			                
			            case 2:
			            	
							for(int a=1;a<=25;a++)
						            {
						                cout<<"*";
						            }
						                cout<<endl;
						    for(int b=1;b<=10;b++)
						        {
						        for(int c=1;c<=1;c++)
						            {
						                    cout<<"*";
						            }
						            for(int d=1;d<=23;d++)
						                  {
						                    cout<<" ";
						                  }
						                    cout<<"*"<<endl;
						           }
						    for(int e=1;e<=25;e++)
						     {
						     cout<<"*";
						     }
							
							system("pause>nul"); // Pausa
			                break;	
			            	
			            case 3:
							
							n = 10, rows, columns;
				
							for (rows = 1; rows <= n; rows++) {
						
								for (columns = n; columns > rows; columns--) {
									cout << " ";
								}
						
								cout << "*";
							
								for (columns = 1; columns < (rows - 1) * 2;
									columns++) {
									cout << " ";
								}
								if (rows == 1) {
									cout << "\n";
								}
								else {
									cout << "*\n";
								}
							}
						
							for (rows = n - 1; rows >= 1; rows--) {
						
								for (columns = n; columns > rows; columns--) {
									cout << " ";
								}
							
								cout << "*";
								for (columns = 1; columns < (rows - 1) * 2;
									columns++) {
									cout << " ";
								}
								if (rows == 1) {
									cout << "\n";
								}
								else {
									cout << "*\n";
								}
							}
							
							system("pause>nul"); // Pausa
			                break;
						
						case 4:
							
							z=1;
			
							  for (int i=0; i<7; i++)
							  {
							    for (int j=7; j>i; j--)
							    {
							      cout<<" "; 
							    }
							    cout<<"*"; 
							
							    if (i!=0)
							    {
							      for (int k=1; k<=z; k++)
							      {
							        cout<<" ";
							      }
							      cout<<"*";
							      z+=2;
							    }
							    cout<<endl; 
							  }
							
							  for (int i=0; i<=z+1; i++)
							  {
							    cout<<"*";
							  }
							
							system("pause>nul"); // Pausa
			                break;
									
			            case 0:
			            	repetir = false;
			            	break;
			        }        
			    } while (repetir);
			
				
				system("pause>nul");     
			    break;	
				
			case 22:
				
				
				x=10, y=10;
							
				while(opcion!='z')
				{
					system("cls");
					gotoxy(x,y); printf(".");
					opcion=getch();
					switch(opcion)
					{
						// MOVER EL PUNTO
						case 'w': y--; break;
						case 's': y++; break;
						case 'a': x--; break;
						case 'd': x++; break;
					}
				
					}
				
				repetir = false;
            	break;	
			
			case 23:
			
				saldo = 0;
	
				cout<<"\t\t\t========================================="<<endl;
				cout<<"\t\t\t        Programa cajero automatico."<<endl;
				cout<<"\t\t\t========================================="<<endl<<endl;
				
				
				while(opc != 4){
					system("pause>null");
					system("cls");
				
						cout<<"\t\t\t================="<<endl;
						cout<<"\t\t\tCajero Automatico"<<endl;
						cout<<"\t\t\t================="<<endl;
					cout<<"\nQue operacion desea realizar."<<endl;
					cout<<"1. Ingresar dinero."<<endl;
					cout<<"2. Retirar dinero."<<endl;
					cout<<"3. Consultar."<<endl;
					cout<<"4. Salir."<<endl;
					cout<<"Seleccione una opcion: ";
					cin>>opc;
											
					switch(int (opc)){
						case 1:
							cout<<"Cuanto dinero desea depositar: ";
							cin>>ingresado;
							saldo += ingresado;
							if(ingresado < 0){
								cout<<"---------------------------------"<<endl;
								cout<<"No puede ingresar saldo negativo."<<endl;
								cout<<"---------------------------------"<<endl;
								saldo -= ingresado;
							}
							else{
							cout<<"#########################################################################"<<endl;
							cout<<"Su dinero en la cuenta bancaria es: "<<fixed<<setprecision(2)<<saldo<<" Quetzalez"<<endl;
							cout<<"#########################################################################"<<endl;					
							}
							break;		
						case 2:
							cout<<"Cuanto dinero desea retirar: ";
							cin>>retirar;
							if(retirar<0){
								cout<<"--------------------------------"<<endl;
								cout<<"No puede retirar saldo negativo ya que el systema no lo permite."<<endl;
								cout<<"--------------------------------"<<endl;			
							}
							else if(retirar>saldo){
								cout<<"--------------------------------"<<endl;
								cout<<"No tiene esa cantidad de dinero en la cuenta bancaria."<<endl;
								cout<<"--------------------------------"<<endl;
							}
							else{
								saldo -= retirar;
								cout<<"---------------------------------"<<endl;
								cout<<"Su saldo restante es de: "<<fixed<<setprecision(2)<<saldo<<" Quetzalez"<<endl;
								cout<<"---------------------------------"<<endl;
							}
							break;
						case 3:
							cout<<"----------------------------------"<<endl;
							cout<<"Su saldo en la cuenta bancaria es de: "<<fixed<<setprecision(2)<<saldo<<" Quetzalez"<<endl;
							cout<<"----------------------------------"<<endl;
							break;
						case 4:
							cout<<"\nPreciona cualquier tecla para salir.";
							break;
						default :
						cout<<"--------------------------------------------------------------------------------------------------"<<endl;
						cout<<"Digite una opcion  [1-4] en caso de no respetar esta accion de regresara al menu anterior ."<<endl;	
						cout<<"--------------------------------------------------------------------------------------------------"<<endl;
						break;
					}
				}
				
				getch();
			
				repetir = false;
            	break;
			
			case 24:
				
				cout<<"*** Calculo de Hipotenusa ***"<<endl;
				cout<<""<<endl;
				
				int a,b,c;
				
				cout<<"Ingrese cateto adyacente: ";
				cin>>a;
				
				cout<<"Ingrese cateto opuesto: ";
				cin>>b;
				
				c = sqrt(pow(a,2) + pow(b,2));
				
				cout<<""<<endl;
				
				cout<<"La hipotenusa es: "<<c<<endl;
					
				repetir = true;
            	break;
				
            case 0:
            	
				repetir = false;
            	break;
        }    
		    
    } while (repetir);
	 
	system("pause"); 
    return 0;
}


