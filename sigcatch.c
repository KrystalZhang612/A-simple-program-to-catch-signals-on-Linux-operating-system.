#include<stdio.h>
#include<unistd.h>
#include<signal.h>
#include<time.h>
#include<string.h>


//Register signal handler for default action 

void sig_handler(int signum){
  
    signal(SIGINT,SIG_DFL); 
    
  }

//driver 

int main(){
    
    signal(SIGINT,sig_handler); // Register signal handler
    
    
    int input; 
    
    
    for(input =1;input <=9;input ++){    //loop until sent signal 9
      
      printf("Process any signal: "); 
      
    
      scanf("%d", &input);
      
      //signal 1 
      
      if (input == 1){
        
        time_t t;   // not a primitive datatype
        
        time(&t);  
        
        char str1[] ="Received signal 1 (SIGHUP)"; 
    
        
        printf("%s\n", strcat(ctime(&t), str1) ); 
        
        
        sleep(1);  // Delay for 1 second
      }
      
      //signal 2 
      
      else if (input == 2){
        
        time_t t;   // not a primitive datatype
        
        time(&t);  
        
        char str2[] ="Received signal 2 (SIGHUP)"; 
        
        
        printf("%s\n", strcat(ctime(&t), str2) ); 
        
        
        sleep(1);  // Delay for 1 second
      }

      
    
      //signal 3 
      
      else if (input == 3){
        
        time_t t;   // not a primitive datatype
        
        time(&t);  
        
        char str3[] ="Received signal 3 (SIGHUP)"; 
        
        
        printf("%s\n", strcat(ctime(&t), str3) ); 
        
        
        sleep(1);  // Delay for 1 second
      }
      
      
      //signal 4
      
      else if (input == 4){
        
        time_t t;   // not a primitive datatype
        
        time(&t);  
        
        char str4[] ="Received signal 4 (SIGHUP)"; 
        
        
        printf("%s\n", strcat(ctime(&t), str4) ); 
        
        
        sleep(1);  // Delay for 1 second
      }
      
      //signal 5
      
      else if (input == 5){
        
        time_t t;   // not a primitive datatype
        
        time(&t);  
        
        char str5[] ="Received signal 5 (SIGHUP)"; 
        
        
        printf("%s\n", strcat(ctime(&t), str5) ); 
        
        
        sleep(1);  // Delay for 1 second
      }

      
      
      //signal 6
      
      else if (input == 6){
        
        time_t t;   // not a primitive datatype
        
        time(&t);  
        
        char str6[] ="Received signal 6 (SIGHUP)"; 
        
        
        printf("%s\n", strcat(ctime(&t), str6) ); 
        
        
        sleep(1);  // Delay for 1 second
      }
      
      
      //signal 7
      
      else if (input == 7){
        
        time_t t;   // not a primitive datatype
        
        time(&t);  
        
        char str7[] ="Received signal 7 (SIGHUP)"; 
        
        
        printf("%s\n", strcat(ctime(&t), str7) ); 
        
        
        sleep(1);  // Delay for 1 second
      }
      
      
      //signal 8
      
      else if (input == 8){
        
        time_t t;   // not a primitive datatype
        
        time(&t);  
        
        char str8[] ="Received signal 8 (SIGHUP)"; 
        
        
        printf("%s\n", strcat(ctime(&t), str8) ); 
        
        
        sleep(1);  // Delay for 1 second
      }
      
      //signal 9
      
      else if (input == 9){
    
        
        char str9[] ="(SIGKILL). This signal cannot be caught. Terminated."; 
        
        
        printf("%s\n", str9 ); 
        
        
        sleep(1);  // Delay for 1 second
      }

//end of the loop. 
      
    }

    return 0;
  }
  

  

