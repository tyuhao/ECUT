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