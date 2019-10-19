A=[2 4 5 8 10];
B=[4 9 6 7 4];
n=length(B);
s=0;
for i=1:n
  s=s+A(i)*B(n-i+1);
endfor
s
