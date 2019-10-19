studentnumber=input('studentnumber:','s')
len=length(studentnumber);
number=str2num(studentnumber(len-1:len));
groupnumber=mod(number,7)+1;
fprintf('Ñ§ºÅ£º%s\n×éºÅ£º%d\n',studentnumber,groupnumber);