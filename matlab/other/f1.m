function y=f(x)
  a=101;
  x=input('input x:')
  switch x&a
    case x<=-a
      y=-1
    case x>-a& x<a
      y=x/a
    otherwise
      y=1
  end
end