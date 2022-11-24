import java.util.Scanner;
class TextEditor {
	String tName, creator;
	TextEditor(String tName, String creator) {
		this.tName = tName;
		this.creator =creator;
	}


	
}

class PunchingCard {
	TextEditor atom;
	TextEditor vim;	
	TextEditor sublime;
	Scanner sc = new Scanner(System.in);
	PunchingCard() {
		atom = new TextEditor("Atom", "Github");
		vim = new TextEditor("Vim","Bram Moolenaar et al");
		sublime = new TextEditor("sublime","Jon Skinner" );	
	}

	void display() {
		System.out.println("Text Editor name and its creator");
		System.out.println("Name\tCreator");
		System.out.println(atom.tName+"\t" + atom.creator);
		System.out.println(vim.tName+"\t" + vim.creator);
		System.out.println(sublime.tName+"\t" + sublime.creator);
	}
}

class Main {
	public static void main(String[] args) {
		PunchingCard p = new PunchingCard();
		p.display();
	}
}
