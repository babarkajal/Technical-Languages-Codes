/* In BufferedReader class there are two types of constructors
 * 1.BufferedReader(Reader in, size sz) 
 * 		this will Be usefull when we want to give Buffer size externally
 *		if sz <=0 throws IllegalArgurmentException
 *
 * 2. BufferedReader(Reader in)
 * 		Defines default Buffer of 8192 Bits -> 1024 Bytes -> 1 KB 		
 */


import java.io.*;       //if this package is not included then for the below class error will be generated
                        //error: cannot find symbol

class InputDemo {
        public static void main(String[] args) throws IOException {

                //create connection System.in .---> InputStreamReader
                InputStreamReader isr = new InputStreamReader(System.in);

                //create connection InputStreamReader --> BufferedReader
		BufferedReader input = new BufferedReader(isr, 0);

	}
}
