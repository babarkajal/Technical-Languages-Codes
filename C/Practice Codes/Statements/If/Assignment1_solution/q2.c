
void main(){
        /*type: int
          a nad b will be created on RAM and store 10 and 20 values in them respectively
        */
        int a=10,b=20;

        if((a && b++) && (a++ || ++b))
        /*= (10 && 20) && (a++ || ++b)         // b = 21
          =  (true) && (10 || ++b)             // a= 11 here or operator is used so ap per condition if any on expression
                                             //  is true then it is true so it will not go for second condition then it wil not execute ++b
          =  true && true
          = true
        {
          printf("a : %d\n",a);     //11
          printf("b : %d\n",b);     //21
        }
        printf("out of if");        //out of if
  }
