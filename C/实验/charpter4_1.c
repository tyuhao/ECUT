#include <stdio.h>
main( )
{
  int x=10,y=5,*px,*py;
  px=py;//py未初始化,可把第八行移至改行前
  px=&x;
  py=&y;
  printf("*px=%d,*py=%d\n",*px,*py);
}
