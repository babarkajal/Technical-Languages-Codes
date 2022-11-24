/*
    write a proragm to find greatest num among three num using id-else ladder
*/

class Program {
    public static void main(String[] args) {
            int num1=19,num2=23,num3=19;

            //find greatest num among three
            if(num1 > num2 && num1 > num3 )
                  System.out.println(num1+ " is greatest");
            else if(num2> num1 && num2 > num3)
                System.out.println(num2 +" is greatest");
            else if(num3 > num1 && num3 > num2)
                System.out.println(num3 +" is greatest");
            else
                System.out.println("All num are same");


    }
}
