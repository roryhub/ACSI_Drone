% Connects Matlab to the drone using Bluetooth
% Only applicable to Linux systems

if isunix
    parrot.util.ConnectDroneToBlueTooth
else
    disp('Not a linux system.  Follow the instructions <a href="https://www.mathworks.com/help/supportpkg/parrot/ug/connect-parrot-mambo-minidrone-to-computer-using-bluetooth.html">here</a> to connect using a Windows machine.')
end