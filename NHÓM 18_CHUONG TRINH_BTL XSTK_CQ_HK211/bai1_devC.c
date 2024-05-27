#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// giai bai toan uoc luong khoang voi 15 mau
main ()
{
int i=0, j=0, k=0, l= 1;
double phuongsai = 0 , trungbinh = 0, mau = 0 ,student=0, tong , nguongsaiso = 0;
double biennho1 = 0, biennho2 = 0 , trunggian1 = 0 , trunggian2 = 0 ; 
double khoangtincay = 0, min = 0, max =0 ;
double array[15];
    printf("nhom 18: tran ngoc duy\n");
	printf("bai toan uoc luong khoang\n");
	printf("moi nhap khoang tin cay, vidu 0.99\n");
	scanf("%lf", &khoangtincay);
	 if (khoangtincay == 0.990)
	 {student=2.947;}
	 else if (khoangtincay==0.980)
	 {student=2.602;}
	 else if (khoangtincay==0.950)
	 {student=2.131;}
	 else if (khoangtincay==0.900)
	 {student=1.753;}
	 else if (khoangtincay==0.850)
	 {student=1.517;}
	 else { printf("moi nhap lai khoang tin cay\n");
	 return 0;}
for(i=0 ; i<15 ; i++)
    {
	printf("moi nhap gia tri mau thu %d \n",l);
	l++;
	scanf("%lf",&mau);
	array[i]= mau ;
	}	 
for(j=0 ; j<15 ; j++)
    {
	biennho1 = array[j];
	tong +=biennho1;
	}	
	trungbinh= tong/15;
for(k=0 ; k<15 ; k++)
    {
	biennho2 = array[k];
	trunggian1 += (trungbinh-biennho2)*(trungbinh-biennho2);
	}
phuongsai= sqrt(trunggian1/14);
nguongsaiso = student*phuongsai/sqrt(15);
min= trungbinh-nguongsaiso;
max= trungbinh+nguongsaiso;
printf("gia tri student là %f :\n", student);
printf("gia tri trung binh là %f :\n", trungbinh);
printf("gia tri phuong sai là %f :\n", phuongsai);
printf("gia tri nguong sai so là %f :\n", nguongsaiso);
printf("ket qua cuoi cung cua bai la\n");
printf("gia tri khoanng uoc luong la: ( %f , %f ) kV\n", min, max);
printf("cam on cac ban va thay co da theo doi\n");
printf("xin chao va hen gap lai !!!\n");
    return 0;
}

