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