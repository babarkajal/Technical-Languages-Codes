/* Write a program to take a string from user and print it. Check whether each character is digit , alphabet or special character
Note: (Use getchar() to take string)
Input: C2w@
Output:
C is alphabet
2 is digit
w is alphabet
@ is special character
*/

#include <stdio.h>

void main() {	
	/* Variables
	 * str : type char[] 
	 * 	 store the input string 
	 * ch : type char
	 * 	store the input char
	 */
        char str[50],ch;
        
	/* i : type int
	 *     stores the index of an char array
	 */ 
	int i = 0;

	//take string from user
        printf("Enter string: ");
        while( (ch=getchar()) != '\n') {
                str[i] = ch;
                i++;
        }

	//explicitly add \0 at the end of string. Indicates that end of string
        str[i] = '\0';
	
	//Print the string 
        printf("Entered string is %s\n", str);
	
	//iterate through the array
        for(int j = 0; j < i; j++) {
		
		//store the character of string in variable ch
                ch = str[j];
		
		//chech whether given character is alphabet or digit 
                if(ch >= 'a' && ch <='z')
                        printf("%c is alphabet\n",ch);

                else if(ch >= 'A' && ch <='Z')
                        printf("%c is alphabet\n",ch);
                
		else if(ch >= '0' && ch <='9')
                        printf("%c is digit\n",ch);
                
		else
                        printf("%c is special character\n",ch);

        }

}//end of main
