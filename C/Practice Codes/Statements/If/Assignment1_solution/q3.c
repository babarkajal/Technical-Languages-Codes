void main() {
        /*type: int
          ilc = 15, olc=25
        */
       int ilc=15, olc= 25;

       if(olc >ilc)
      //= 25 > 15
      //= true =>go to if block
      {
           printf("olc : %d\n",olc);      //25
      }

      if(ilc<olc);      //15 < 25 =>true but if statment is terminated by ; so no block for if

      //this is part of program.it just an independent block so it will always executes
      {
           printf("ilc : %d\n",ilc);        //15
       }
          printf("olc : %d\n",olc);         //25
         printf("ilc : %d\n",ilc);          //15

}
