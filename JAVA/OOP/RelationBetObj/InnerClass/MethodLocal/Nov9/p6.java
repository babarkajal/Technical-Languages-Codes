/*
 * _________________Real Time Ex ____________________
 * Admission as outer class and Gov and private classes are method local innar classes
 */

class Admission {
	Admission(String field) {
		if(field == "medical") 
			NEET();
		else if(field == "Engg")
			JEE();
	}

	void NEET() {
		class Gov { 
			void college() {
				System.out.println("AIIMS college");
			}
		}

		class Private{
			void college() {
				System.out.println("bharati college");
			}	
		}
		Gov g = new Gov();
		g.college();
	}
	void JEE() {
		class Gov {
			void college() {
				System.out.println("COEP college");
			}
		}

		class Private{
			void college() {
				System.out.println("Sihngad/JSPM/Zeal college");
			}
		}
		Private p = new Private();
		p.college();
	}

	public static void main(String[] args ){
		Admission kajal = new Admission("Medical");
		Admission akanksha = new Admission("Engg");

	}
}
