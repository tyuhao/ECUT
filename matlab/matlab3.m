-------------------1--------------
function sum=f(x)
sum=0;
for i=1:x
	sum=sum+i;
end
end
-----------------------2----------------



for i = 1:9
	for j = 1:i
		fprintf('%dx%d= %d ',j,i,i*j);
	end
	fprintf('\n');
	end


	-------------------3-------------------

	(1)if
	function y=f1(x)
	a=101
	if x<=-a
		y=-1;
	elseif abs(x)<a
	y=x/a;
	else
		y=1;
	end
	end
	(2)switch

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
	-------------------------------4------------------

	function y=fo(x,n)
	y=0;
	f=-1;
	for i=1:n
		y=y+sin(i*x)+f*cos(i*x);
	f=-f;
	end
	end

	------------------while

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

	------------------------5
	function fact=fact(n)
	fact=1;
	for i=1:n
		fact=fact*i;
	if fact>10100
		disp(i)
	end
	end
	end
	----------------------6
	A=[2 4 5 8 10];
	B=[4 9 6 7 4];
	n=length(B);
	s=0;
	for i=1:n
		s=s+A(i)*B(n-i+1);
	endfor
	s