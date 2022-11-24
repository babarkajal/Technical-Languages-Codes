/*
--------------------------------------------------------------------------------------------------------------------------------------
Program 4: Write a program in C to list all the files present in the directory .
--------------------------------------------------------------------------------------------------------------------------------------
*/



#include <dirent.h> 	//for accessing the directory content
#include <stdio.h> 
#include <stdlib.h> 

//prototype of the readdir() function
// __attribute__(nonnull(1) )) used to tell the complier that the arguments should not less than one or greater than one
extern struct dirent* readdir (DIR *__dirp) __attribute__ ((__nonnull__ (1)));

/*struct dirent
  {

    __ino_t d_ino;	   //typedef of unsinged long int 
    __off_t d_off;	   //long int




    unsigned short int d_reclen;
    unsigned char d_type;
    char d_name[256];
  };
*/
  

void main() 
{ 
   //pointer to the directory
    struct dirent *de;  
  
    // opendir() open the given directory and return the address  
    DIR *dr = opendir("/home/kajal/Desktop"); 
  
    //if fails then it contain null
    if (dr == NULL)   
    { 
        printf("Could not open current directory" ); 
  	exit(0);  
    } 
  

    // readdir() is used to read the content of the directory 
    //extern struct dirent* readdir (DIR *__dirp) __attribute__ ((__nonnull__ (1)));
    while ((de = readdir(dr)) != NULL) 
            printf("%s\n", de->d_name); 
  
    //close the directory
    closedir(dr);     
} 

