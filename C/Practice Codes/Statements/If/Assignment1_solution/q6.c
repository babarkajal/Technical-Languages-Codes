void main() {

    //type: int
     int subVal=15;       // 15
     if(subVal++ && subVal--)
     // and operator: both expression should be executed if it get first as false then whole exp becomes false
     // (15 && subVal--)          subVal = 16 (postinc)
    //  (15 && 16)                subVal = 15 (postdec)
    // (true)
     {
      printf("SubVal : %d\n",subVal);       //15
     }

    if(subVal-- || ++subVal)
    /*or opreator if first exepression is true then entire exp evaluates to true
      right now updated value pf subVal = 15
      = (15 || ++subVal)      //subVal = 14(postdec)
      = true
    */
    {
     printf("SubVal : %d\n",subVal);      //14
    }

    if(subVal > subVal);
    /*
      14 > 14 =>false
      but if is terminated by semicolon
    */
    {
     printf("SubVal : %d\n",subVal);    //14
   }

 }
