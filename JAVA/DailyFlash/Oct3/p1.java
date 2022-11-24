//bB

import java.io.*;

class EmployeeDetails {

	//take four instance variables
	int id;
	String name;
	long num;
	String add;
	
	//Parameterised constructor 
	EmployeeDetails(int id, String name, long num, String add) {
		//initilize variables
		this.id = id;
		this.name = name;
		this.num = num;
		this.add = add;

	}
	
	//display the details
	void display() {
		System.out.println("Id "+ id);
		System.out.println("Name "+ name);
		System.out.println("number "+ num);
		System.out.println("Address "+ add);

	}

}


class MainDemo {
	public static void main(String[] args) throws IOException{
	BufferedReader ip = new BufferedReader(new InputStreamReader(System.in));
	//take n from user
	System.out.println("Enter numBer of Employees: ");
	int n = Integer.parseInt(ip.readLine());
	
	//create array of size n and of type EmployeeDetails
	EmployeeDetails []arr = new EmployeeDetails[n];

	//create oBjects and take values from user 
	System.out.println("Enter employee details: ");
	for(int i=0; i<n ;i++) {
		System.out.println("Employee "+(i+1)+"----");
		System.out.print("Enter id: ");
		int id = Integer.parseInt(ip.readLine());
		System.out.print("Enter name: ");
		String name = ip.readLine();
		System.out.print("Enter moBile num: ");
		Long num =Long.parseLong(ip.readLine());
		System.out.print("Enter address: ");
		String add = ip.readLine();

		arr[i] = new EmployeeDetails(id,name, num,add);

	}
	

	System.out.println("----------Employee Details--------");
	for(int i=0; i<n; i++) {
		System.out.println("Employee "+(i+1));
		arr[i].display();
		System.out.println("");
	}


	}
}
