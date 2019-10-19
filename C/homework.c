检测变量
IDL> print,IDL_VALIDNAME('var')
var
IDL> print,IDL_VALIDNAME('5var')

IDL> print,IDL_VALIDNAME('5var',/CONVERT_SPACES)

IDL> var=0
IDL> print,N_ELEMENTS(var)
           1
IDL> print,N_ELEMENTS(var1)
           0
；返回 1 为存在，0 不存在

数据类型转换
IDL> A = 33000
IDL> B = FIX(A)
IDL> print,B
  -32536
IDL> num = 6
IDL> num= num*5.2
IDL> help,num
NUM             FLOAT     =       31.2000
精度丢失
IDL> C = 1/3
IDL> print,C
       0
IDL> C=3/2
IDL> print,C
       1
IDL> C=3.0/2
IDL> print,C
      1.50000
IDL> C=float(3)/2
IDL> print,C
      1.50000
系统变量
IDL> defsysv,'!sys_var',88
IDL> help,!sys_var
<Expression>    INT       =       88
数组定义
直接创建
IDL> arrr = [1,2,3]
IDL> help,arr
ARR             UNDEFINED = <Undefined>
IDL> arr = [1,2,3]
IDL> help,arr
ARR             INT       = Array[3]
IDL> arr=[1,2,3B]
IDL> help,arr
ARR             INT       = Array[3]
IDL> arr=[1,2,3D]
IDL> help,arr
ARR             DOUBLE    = Array[3]
多维数组
IDL> arr=[[1,2,3],[4,5,6]]
IDL> help,arr
ARR             INT       = Array[3, 2]
IDL> print,arr
       1       2       3
       4       5       6
根据已有数组嵌套创建数组
IDL> a=[1,2,3]
IDL> b=[4,5,6]
IDL> c=[a,b]
IDL> d=[[a],[b]]
IDL> print,c
       1       2       3       4       5       6
IDL> print,d
       1       2       3
       4       5       6
创建数组
IDL> array=Bytarr(100,100)
IDL> help,array
ARRAY           BYTE      = Array[100, 100]
IDL> vector=FindGen(100)

IDL> arr=replicate(3.2,2,2)
IDL> print,arr
      3.20000      3.20000
      3.20000      3.20000

IDL> make_array(3,4,/integer, value=5)
       5       5       5
       5       5       5
       5       5       5
       5       5       5
伪随机数
IDL> random_nums=randomu(seed,3)
IDL> print,random_nums
     0.586622     0.452272     0.200864
IDL> random_nums=randomn(seed,3)
IDL> print,random_nums
    -0.579037     0.233959     0.547101
数组存储
IDL> array = indgen(3)
IDL> print,array
       0       1       2
IDL> array=indgen(3,3)
IDL> print,array
       0       1       2
       3       4       5
       6       7       8
IDL> arr = indgen(2,3,2)
IDL> print,arr
       0       1
       2       3
       4       5

       6       7
       8       9
      10      11
数组访问
1.下标方式
IDL> print,array
       0       1       2       3       4       5       6       7
IDL> print,array[3]
       3
IDL> print,array[-1],array[-2]
       7       6
2.向量方式
IDL> indices=[0,1,3,5]
IDL> print,array[indices]
       0       1       3       5

IDL> data=indgen(20,30)
IDL> subarray = data[5:9,11:14]
IDL> vector = data[*,9]
IDL> print,vector
     180     181     182     183     184     185     186     187     188     189
     190     191     192     193     194     195     196     197     198     199
IDL> subarray=data[*,25:29]
IDL> print,subarray
     500     501     502     503     504     505     506     507     508     509
     510     511     512     513     514     515     516     517     518     519
     520     521     522     523     524     525     526     527     528     529
     530     531     532     533     534     535     536     537     538     539
     540     541     542     543     544     545     546     547     548     549
     550     551     552     553     554     555     556     557     558     559
     560     561     562     563     564     565     566     567     568     569
     570     571     572     573     574     575     576     577     578     579
     580     581     582     583     584     585     586     587     588     589
     590     591     592     593     594     595     596     597     598     599
IDL> i=2
IDL> subarray=data[i:i+2]
IDL> print,subarray
       2       3       4
数组与数运算
IDL> print,A
       1       2       3
IDL> A=indgen(5)
IDL> print,a
       0       1       2       3       4
IDL> b=a+2
IDL> print,b
       2       3       4       5       6
IDL> c=a*2
IDL> print,c
       0       2       4       6       8
IDL> d=a/2
IDL> print,d
       0       0       1       1       2
数组与数组运算
IDL> arr=[2,4,6,8]
IDL> darr=[2,4]
IDL> print,arr+darr
       4       8
IDL> print,arr*darr
       4      16
IDL> print,arr/darr
       1       1
多维数组运算需转化一维数组
IDL> a=indgen(3,5)
IDL> a
       0       1       2
       3       4       5
       6       7       8
       9      10      11
      12      13      14
IDL> b=indgen(2,3)
IDL> b
       0       1
       2       3
       4       5
IDL> a+b
       0       2
       4       6
       8      10
数组合并
IDL> a=indgen(2,5)
IDL> b=indgen(4,5)
IDL> c=[a,b]
IDL> help,c
C               INT       = Array[6, 5]
IDL> d=indgen(2,3)
IDL> e=[[a],[d]]
IDL> help,e
E               INT       = Array[2, 8]
三维
IDL> a=indgen(2,3,5)
IDL> d=indgen(2,3,2)
IDL> e=[[[a]],[[d]]]
IDL> help,e
E               INT       = Array[2, 3, 7]
IDL> c=indgen(2,2,5)
IDL> e=[[a],[c]]
IDL> help,e
E               INT       = Array[2, 5, 5]