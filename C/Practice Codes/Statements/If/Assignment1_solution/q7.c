
void main() {
    //type: int
    // value = 50
    int weight=50;


    if(weight<50 && weight >30)
    // (50 < 50 && weight > 30)
    // false && weight > 30
    // false
    {
        printf("You are under weight");
    }

    if(weight>=50 && weight <= 70)
    // weight >=50 && weight <=70
    // true && true
    // true
    {
          printf("you are well maintained");
      }

    if(weight > 70);
    //true but terminated with semicolon
    {

    printf("you are overweight you have to work hard"); //independent block
   }
 }
