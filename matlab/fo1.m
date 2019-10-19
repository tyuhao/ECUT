function y=fo1(x,n)
  y=0;
  f=-1;
  i=1;
  while i<=n
    y=y+sin(i*x)+f*cos(i*x);
    f=-f;
    i++;
  end
end

