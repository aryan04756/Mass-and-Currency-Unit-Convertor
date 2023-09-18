#include <stdio.h> 
char category; 
int currencyChoice; 
int massChoice; int userinputUSDtoEuro; // User inputted for USD to EURO; 
int userinputUSDtoJPY; // User inputted for USD to JPY; 
int userinputUSDtoRMB; // User inputted for USD to RMB; 
int userinputOunce; // User inputted for Ounce; 
int userinputGram; // User inputted for Gram; 
float USDtoEURO ; // varaible that stores the converted USD->EURO; 
float USDtoJPY; // stores the converted USD->JPY; 
float USDtoRMB; // stores the converted USD->RMB; 
float ounceToPounds; // stores the converted Ounce->Pounds; 
float gramsToPounds; // stores the vonerted Grams->Pounds; 
int mass(char *catgy){ 
 if(*catgy == 'C'){ 
 printf("Welcome to Currency Converter! \n"); 
printf("Here is a list of conversions to choose from: \n"); 
printf("Enter 1: USD to Euro. \n"); 
printf("Enter 2: USD to JPY. \n"); 
printf("Enter 3: USD to RMB. \n"); 
scanf("%d",&currencyChoice); if(currencyChoice == 1){ 
printf("Please enter the USD amount: \n"); 
scanf("%d",&userinputUSDtoEuro); 
 USDtoEURO = userinputUSDtoEuro * 0.87; 
 printf("Euro: %.2f",USDtoEURO); // %.2f = rounds the float to only 2 decimal places; 
 } 
 else if(currencyChoice == 2){ 
printf("Please enter the USD amount: \n"); 
scanf("%d",&userinputUSDtoJPY); 
USDtoJPY = userinputUSDtoJPY * 111.09; 
printf("JPY: %.2f",USDtoJPY); 
 } 
 else if(currencyChoice == 3) { 
printf("Please enter the USD amount: \n"); 
scanf("%d",&userinputUSDtoRMB); 
USDtoRMB = userinputUSDtoRMB * 6.82; 
printf("RMB: %.2f",USDtoRMB); 
 } 
 else 
 printf("Invalid!!\nPlease enter the correct choice. \n"); 
 }return 0; 
 } 
int curr(char *catgy){ if(*catgy == 'M'){ 
printf("Welcome to Mass Converter! \n"); 
printf("Here is a list of conversions to choose from: \n"); 
printf("Enter 1: Ounces to Pounds. \n"); 
printf("Enter 2: Gram to Pounds. \n"); 
scanf("%d",&massChoice); 
if(massChoice == 1){ printf("Please enter the ounce amount: \n"); 
scanf("%d",&userinputOunce); 
ounceToPounds = userinputOunce * 0.0625; 
printf("Pounds: %.2f",ounceToPounds); 
 } 
 else if(massChoice == 2) { printf("Please enter the gram amount: \n"); 
scanf("%d",&userinputGram); gramsToPounds 
= userinputGram * 0.00220462; printf("Pounds: %.2f",gramsToPounds); 
 } 
 else 
 printf("Invalid!!\nPlease enter the correct choice. \n"); 
 } return 0; 
} 
int main() { printf("Welcome to Unit Converter! \n"); 
printf("Here is a list of conversions to choose from: \n"); 
printf("C:Currency\nM:Mass \n"); printf("Please enter the letter you want to convert.\n"); 
scanf("%c",&category); 
if(category=='M' || category=='C') 
{ 
 curr(&category); 
mass(&category); 
} 
else printf("Invalid!!\nPlease enter the correct choice. \n"); 
return 0;
}