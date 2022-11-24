/* variable name rules
 *    - variable name should start with alphabet not numeric value
 *    - name should contain only numbers and characters including _ and $
 *    - no other special characters are allowed in the variable name excluidng _ and $
 */


class NamingConvention {
    public static void main(String[] args) {
            //valid names - no any error
            int name;
            String covid19;
            int number_of_patinets;
            int rupees$;
            int $data, _data;

            //invalid names :- compile time error
            //can not find symbol
            int 1Name;      //first it got integer value . compiler will assume that it may be an integer but after that it finds characters so error occurs
            int name#data;  //no any special character is allowed
            int name@id;    //@ has special meaning in java for annotation

    }

}
