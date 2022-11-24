
/*--------------------------------------------------------------------------------------------------------------------------------
 * function myStrLen(char* str):
 *      returnType: int
 *      parameter:
 *              1.char* str : hold string to calculate
 */
int mystrlen(char* str) {
        int count = 0;
        while(*str !='\0') {
                count++;
                str++;
        }
        return count;
}


/*--------------------------------------------------------------------------------------------------------------------------------
 * function isString:
 * 	retunType: int
 * 	parameter: 
 * 		char* - hold the string to check the condition
 * 	implemented to check the test condition of disease name
 */

int isString(char* str) {
	for(int i=0; i< mystrlen(str); i++) {
		if(isalpha(str[i]) == 0 && str[i]!=' ') {
			return 0;
		}
	}
	return 1;

}


/*--------------------------------------------------------------------------------------------------------------------------------
 * function myStrCmp(char* str1,char*str2):
 * 	returnType: char*
 *	parameter: 
 *		1.char* str1 : hold string1 
 *		2.char* str2:  holds strig2
 *	functio to check whether this strings are same or not
 */
int myStrCmp(char *str1, char*str2) {
        if(mystrlen(str1) != mystrlen(str2)) {
                return 1;
        }
        else {
                        while(*str1 !='\0' ) {
                                if(*str1 != *str2  && *str1-*str2 != 32 && *str1-*str2 != -32)
                                        return 1;
                                str1++;
                                str2++;
                        }


        }
        return 0;
}//end of fun


/*--------------------------------------------------------------------------------------------------------------------------------
 * function myStrCpy(char* dest,char*src):
 * 	returnType: char*
 *	parameter:
 *		1.char* dest: destination location to copy the string
 *		2.char* src: source location 
 */
char* myStrcpy(char* dest ,char *src) {
	while(*src !='\0') {
		*dest =*src;
		dest++;
		src++;
	}
	*dest='\0';
	return dest;
}


