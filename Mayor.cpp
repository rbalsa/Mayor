/*Dado dos números informar el mayor
 *Ramiro Balsa	
 *09042017
 */
 
 #include <iostream>
 #include <string>
 #include <string>
 
 using namespace std;
 
 
 int main (){
 	
	 string i,j; 	
 	
 	std :: cout << "Ingrese un numero "  ;
 	
 	std :: cin >> i;
 	
 	std :: cout << "\nIngrese otro numero " ;
 	
 	std :: cin >> j;
	 	 

 	if (i>j){	 
	 
 		
 		std :: cout << "\nEl numero mayor es\n" <<i<< endl;
 		
 }
    
 
 
 	else if (i<j){
 		
 		
 		std :: cout <<"\nEl numero mayor es " <<j<< endl;
}
 		

	 
 	else if(i==j){
	 
	 	  		
 		std :: cout << "\nNo existe numero mayor, los numeros son iguales\n" << endl;
 		
 		}
 		
 		
 	 
 		
  	
  	 	
 return 0;
}  
