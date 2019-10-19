matlab2

--------------------------------1----------------------------

>> a='I am'

a =

I am

>> b='TYH'

b =

TYH

>> c=strcat(a,b)

c =

I amTYH

>> d=[a,b]

d =

I amTYH

>> strcmp('hello','hello')

ans =

     1

>> strcmp('hello','hell')

ans =

     0

>> strcmpi('hello','Hello')

ans =

     1

>> strncmp('hello','hello123',5)

ans =

     1

>> findstr(a,'am')

ans =

     3

>> strfind(a,'am')

ans =

     3

------------------------------2---------------------

>> str=char('I','am', 'TYH')

str =

I  
am 
TYH

>> cell=cell(2,3)

cell = 

    []    []    []
    []    []    []

>> cell{1,1}='[1,2;3,4]'

cell = 

    '[1,2;3,4]'    []    []
             []    []    []

>> cell(1,2)={'matlab'}

cell = 

    '[1,2;3,4]'    'matlab'    []
             []          []    []

>> student.name='TYH'

student = 

    name: 'TYH'

>> student.score=100

student = 

     name: 'TYH'
    score: 100

>> student

student = 

     name: 'TYH'
    score: 100

>> student(1)

ans = 

     name: 'TYH'
    score: 100

>> student(2).name='HYT';
>> student(2).score=001;
>> student(2)

ans = 

     name: 'HYT'
    score: 1

>> student=struct('name',{'TYH','HYT'},'score',{100,001})

student = 

1x2 struct array with fields:
    name
    score

>> student(1).name

ans =

TYH

-------------------------------3----------------------

>> p=['can you give an apple']

p =

can you give an apple

>> findstr(p,'a')

ans =

     2    14    17
     
>> length(ans)

ans =

     3

---------------------4-----------------------

>> s1='i';
>> s2='love';
>> s3='matlab7.1';
>> p=[s1,s2,s3]

p =

ilovematlab7.1
>> son=p(1:5)

son =

ilove

>> length(p)

ans =

    14

>> p1=p(length(p):-1:1)

p1 =

1.7baltamevoli

>> p2=upper(p)

p2 =

ILOVEMATLAB7.1

>> length(regexp(p,'[a-z]'))

ans =

    11

>> strrep(p,'7.1','2016a')

ans =

ilovematlab2016a
-----------------------5-------------------------
>> c(1,1)={'hello'};
>>  c(2,1)={'world'};
>> c{1,2}=int8(2);
>> c{2,2}=double(2)

c = 

    'hello'    [2]
    'world'    [2]

>> cellplot(c)
---------------------picture------------
---
-------------------6--------------------
student=struct('number',{201720050101,201720050103,201720050104},
'name',{'TYH','DYC','TYJ'},
'course',{['RS','GIS','MATLAB'],['RS','GIS','MATLAB'],['RS','GIS','MATLAB']},
'score',{[100,95,100],[100,95,100],[100,95,100]}