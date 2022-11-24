int printf(const char*,...);

void main() {
	int inumber=1000;
	float fvalue=12.12;
	char cAlphabet='k';
	double ddouble=12.1345;

	printf("\nNAME     Value     Address\n");
	printf("inumber   %d      %p \n",inumber,&inumber); 
	printf("fvalue    %.2f      %p \n",fvalue,&fvalue); 
	printf("cAlphabet   %c      %p \n",cAlphabet,&cAlphabet); 
	printf("ddouble   %.2lf     %p \n",ddouble,&ddouble);

} 
