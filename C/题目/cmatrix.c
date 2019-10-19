/*开始输入的m为矩阵行数，输入的n为矩阵列数*/
#include<stdio.h>
#include<conio.h>
#include<dos.h>
#define MAX 10  //最大行(列)数
typedef struct
{ int m,n;
  int a[MAX][MAX];
} matrix;
void input_matrix(matrix *dat);
void output_matrix(matrix dat);
void exchang_row(int *a,int *b,int n);  //交换两行
void mul_row(int *a,int k,int n);  //将某一行乘以k
void add_row(int *a1,int *a2,int k,int n); //将a2行的k倍加到a1行上
int rank_matrix(matrix dat,matrix *res);
int main()
{ matrix a,b;
  int r;
  input_matrix(&a);
  r=rank_matrix(a,&b);

  printf("原矩阵:\n");
  output_matrix(a);
  printf("简化后矩阵:\n");
  output_matrix(b);
  printf("\nr(A)=%d\n",r);
  getch(); 
}
void input_matrix(matrix *dat)   //输入矩阵
{ int i,j;
  do
   { printf("行数=",MAX);
     scanf("%d",&(dat->m));
   } while((dat->m)<1||(dat->m)>MAX);
  do
   { printf("列数=",MAX);
     scanf("%d",&(dat->n));
   } while((dat->n)<1||(dat->n)>MAX);
  for(i=0;i<(dat->m);i++)
   for(j=0;j<(dat->n);j++)
    { printf("a(%d,%d)=",i+1,j+1);
      scanf("%d",&(dat->a[i][j]));
    }
}
void output_matrix(matrix dat)  //显示矩阵
{ int m,n,i,j;
  m=dat.m;n=dat.n;
  for(i=0;i<m;i++)
   { for(j=0;j<n;j++)
      printf("%-4d",dat.a[i][j]);
     printf("\n");
   }
}
void exchang_row(int *a,int *b,int n)
{ int i,t;
  for(i=0;i<n;i++)
   { t=a[i];
     a[i]=b[i];
     b[i]=t;
   }
}
void mul_row(int *a,int k,int n)
{ int i;
  for(i=0;i<n;i++)
   a[i]*=k;
}
void add_row(int *a1,int *a2,int k,int n)
{ int i;
  for(i=0;i<n;i++)
   a1[i]+=a2[i]*k;
}
int rank_matrix(matrix dat,matrix *res) //求秩(返回值为秩，第2个参数为变换得到的阶梯阵)
{ int m,n,i,t;
  int ri,ci;  //行标记与列标记
  int f_z;    //某列是否全为0的标志，为1表示全为0
  m=dat.m;n=dat.n;
  for(ri=ci=0;ci<n;ci++)
   { f_z=1;
     for(i=ri;i<m;i++)
      if(dat.a[i][ci]!=0)
       { if(i!=ri)
          if(f_z)
           exchang_row(&(dat.a[ri][ci]),&(dat.a[i][ci]),n-ci);
          else
           { t=dat.a[i][ci];
            mul_row(&(dat.a[i][ci]),dat.a[ri][ci],n-ci);
            add_row(&(dat.a[i][ci]),&(dat.a[ri][ci]),-t,n-ci);
           }
         f_z=0;
       }
     if(!f_z) ri++;
   }
  *res=dat;
  return ri;
}