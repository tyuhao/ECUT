%===============================
%1.3
>> A=1:10
A =
     1     2     3     4     5     6     7     8     9    10
>> A+1
ans =
     2     3     4     5     6     7     8     9    10    11
%===============================
%1.4
>> A*A'
ans =
   385
%===============================
%1.5
>> x = 1:0.02*pi:2*pi;
>> y=2.*exp(-5*x).*sin(2*pi*x);
>> plot(x,y)
>> plot(x,y,'r--')
>> plot(x,y,'k.')
%===============================
%3
%=====================
%建立一数据文件 test.dat，用于存放矩阵 A 的数据。
A=[1 2 3;4 5 6;7 8 9];
fid=fopen('test.dat','w');
cnt=fwrite(fid,A,'float');
fclose(fid);
%======================
%读取文件test.dat的内容
fid=fopen('test.dat','r');
[B,cnt]=fread(fid,[5,inf],'float');
fclose(fid)
%======================
%文件定位
a=1:5;
fid=fopen('fdat.txt','w');
fwrite(fid,a,'int16');
status1=fclose(fid);
fid=fopen('fdat.txt','r');
status2=fseek(fid,6,'bof');
four=fread(fid,1,'int16');
position=ftell(fid);
eight=fread(fid,1,'int16');
%===============================
%图像操作
%读写操作
I=imread('lena.tif');
imwrite(I,'lena.jpg');
imshow('lena.jpg');
%基本操作
I1=imresize(I,0.5);%缩小图像
I2=rgb2gray(I);%转灰度影像
I3=imrotate(I,45);%旋转影像
figure,subplot(2,2,1),imshow(I);
subplot(2,2,2),imshow(I1);
subplot(2,2,3),imshow(I2);
subplot(2,2,4),imshow(I3);
%==============================
%函数计算
function y = fx(x)
    if x>1
        y=x*x;
    elseif x>-1 && x<1
        y=1;
    else
        y=3+2*x;
    end
end
%图像直方图使用内置函数
I=imread('lena.tif');
Gray=rgb2gray(I);
subplot(1,2,1),imshow(Gray);
subplot(1,2,2)
bar(imhist(Gray));
%直方图统计
row=size(Gray,1);
col=size(Gray,2);
N=zeros(1,256);%生成256x256矩阵记录灰度值像素数
for i=1:row
    for j=1:col
        k=Gray(i,j);
        N(k+1)=N(k+1)+1;%记录每个灰度值的像素数
    end
end
figure;
subplot(1,2,1);imshow(I);
subplot(1,2,2);bar(N);%bar函数绘制直方图
axis tight;%设置坐标轴
%图像熵计算
entropy(Gray)
%镜像操作
m1=Gray(:,end:-1:1);
m2=Gray(end:-1:1,:);
subplot(2,2,1),imshow(Gray);title('原图')
subplot(2,2,2),imshow(m1);title('处理后图像1')
subplot(2,2,3),imshow(m2);title('处理后图像2')

>> help imshow
imshow - Display image
    This MATLAB function displays image I in a figure, where I is a grayscale, RGB
    (truecolor), or binary image.
    imshow(I)
    imshow(X,map)
    imshow(filename)
    imshow(I,[low high])
    imshow(___,Name,Value)
    himage = imshow(___)
    另请参阅 image, imagesc, imfinfo, imread, imwrite, iptsetpref
    imshow 的参考页

>> lookfor imshow
imshow           - Display image in Handle Graphics figure.  
imshowpair       - Compare differences between images.

>> type imshow

function h=imshow(varargin)
%IMSHOW Display image in Handle Graphics figure.  
%   IMSHOW(I) displays the grayscale image I.
......