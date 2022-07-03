#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Constructed By Dominic Alexander Cooper
int main(){

	
	char a[101] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',' ','\n','\t','	','\',',',','.','/','<','>','?',':',';','@','#','~',']','[','{','}','`','¬','|','¦','!','"','£','$','%','^','&','*','(',')','-','_','+','=','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','0','1',' 2','3','4','5','6','7','8','9','\0'};
	FILE *p; p = fopen("SOLUTION1.txt","w");
	int k = 100;
	printf("\n\tk = 100");
	int noc; printf("\n\tn = ");
	scanf("%d", &noc);
	printf("\n\tNumber Of FILE Cells = %d", noc);
	int n = noc;
	int row, col;
	int cell;
	int rdiv;
	unsigned long long id;
	id = 0;
	int nbr_comb = pow(k+1, n);
	for (row=0; row < nbr_comb; row++){
		id++;  fprintf(p,"\n\n\n\nFILE%d\n\n\n\n", id);
		for (col=n-1; col>=0; col--){  rdiv = pow(k+1, col);
			cell = (row/rdiv) % (k+1); fprintf(p,"%c", a[cell]);
		}
		printf("\n");
	}
	fprintf(p,"\n\n\t(k+1)^n = (%d + 1)^%d = %d", k, n, id);
	fclose(p);

	return 0;
}
