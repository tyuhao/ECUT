2----------------------
A(1:10)=unifrnd(-5,9,10,1)
sort(A,'descend')

3-------------------
function y=f(x)
a=101;
    if x<=-a
        y=-1
    elseif abs(x)<a
    y=x/a
    else
        y=1
    end
end

4---------------------
studentnumber=input('studentnumber:','s')
len=length(studentnumber);
number=str2num(studentnumber(len-1:len));
groupnumber=mod(number,7)+1;
fprintf('学号：%s\n组号：%d\n',studentnumber,groupnumber);

5---------------------

function x=root2(a,b,c)
d=b^2-4*a*c;
e=-b/(2*a);
if a==0
    real=1
    x=-c/b
else
    if d<0
        real=0
    elseif d==0
        real=1
        x=e
    else
        real=2
        x=[e+sqrt(d)/e e-sqrt(d)/e]
    end
end
end
%
>> root2(3,7,1);
real =
     2
x =
   -6.3805    4.0471

6---------------------------

answer=input('please input 1 or 2:');
if answer==1
    sort1
elseif answer==2
    root2(3,7,1)
else
    disp('fuck you');
end

7-----------------

function pf
Num=input('输入学号后三位:')
rand('state',Num);
noise=rand(1,10);
k=2 ; s=3 ;
x=1:10;
y=k*x+s+noise;
a=polyfit(x,y,1);
subplot(1,2,1)
plot(a(1)*x+a(2),y)
subplot(1,2,2)
plot(x,y)
end


----------8

function ismagic(A)
    if rank(A)<3
        disp('error');
    else
        [r,c]=size(A);
        if r~=c
            disp('the size of matrix X must be N-by-N matrix');
        else
            rs=sum(A,2);
            cs=sum(A,1);
            ds=sum(diag(A));
            fs=sum(diag(fliplr(A)));
            if cs(1)==rs(1) & rs(1)==ds & ds==fs
                if rs(1)==rs(:) & cs(1)==cs(:)
                    disp('Yes');
                else
                    disp('No');
                end
            else
                disp('No');
            end
        end
    end
end