clc
clear
s = serialport('/dev/cu.usbmodem14101',9600) ;
v =[];
t = [];
tic 
while toc<=15
    
    data = readline(s);
    v = [v str2double(data)];
    t = [t toc];
    
end

figure
plot(t,v);
xlabel('time(s)');
ylabel('Brightness');
title('Brightness vs time');
