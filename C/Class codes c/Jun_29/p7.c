//access *fp 

#include <stdio.h>
#include <stdlib.h>

void main(){

	FILE *fp;
	fp=fopen("/home/kajal/Desktop/kajal.txt","r");
	if(fp==NULL){
		printf("Unable to open file\n");
		exit(1);
	}
	printf("fp->_flags= %d\n",fp->_flags);//first member of the FILE structure
	printf("fp->= _IO_read_ptr= %p\n",fp->_IO_read_ptr);
	printf("fp->= _IO_read_end= %p\n",fp->_IO_read_end);
	printf("fp->= _IO_read_base= %p\n",fp->_IO_read_ptr);
	printf("fp->_mode= %d\n",fp->_mode);
	printf("fp->_fileno= %d\n",fp->_fileno);
	printf("fp->_old_offset= %ld\n",fp->_old_offset);
//	printf("fp->fd =%c\n",fp->fd);
}
