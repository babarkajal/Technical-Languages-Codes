#include <stdio.h>

void main() {
    float a = 4.5f;
    switch((int)a) {
  		case 1:
  			printf("Case 1\n");
  			break;
      case 2:
        printf("Case 2\n");
        break;
  		case 4:
  			printf("Case 4\n");
  			break;
  		default:
  			printf("Default case\n");
        break;  
  	}
}
