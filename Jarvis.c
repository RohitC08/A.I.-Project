#include <stdioh.h>

int main(){
      int commands; //Weather, Tech News, Country News, Set Reminder, Make Note, Fix Agenda, Make To-Do List
  
      printf("\t\n\tList of Commands\t\n\t");
      printf("\n1.Weather");
      printf("\n2.Tech News");
      printf("\nCountry News");
      printf("\nSet Reminder");
      printf("\nMake Note");
      printf("\nFix Agenda");
      printf("\nMake To-Do List");
      
      printf("\nHello Boss, How Can I Help You Today?");
      
      printf("\nEnter Your Prompt Here: ");
      scanf("%d", commands);
      
      switch(commands){
              case 1:
              printf("\nThe Weather Today in Jamaica");
      }  
  
  
  return 0;
}
