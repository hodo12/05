#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	  int b;
      printf("���� �ϳ��� �Է��Ͻÿ� : ");
      scanf("%i", &b);

      if (b > 0) {
         printf("����Դϴ�.\n");
      }
      else if (b == 0) {
         printf("0 �Դϴ�.\n");
      }
      else {
         printf("�����Դϴ�.\n" );
      }
	return 0;
}
