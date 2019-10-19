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