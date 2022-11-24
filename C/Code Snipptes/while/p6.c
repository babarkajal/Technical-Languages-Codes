int main() {
		int i=0;
		do {
			i++;
			if(i==3) 
				continue;
			printf("in loop");
		}while(i<3);
		printf("%d",i);

}
