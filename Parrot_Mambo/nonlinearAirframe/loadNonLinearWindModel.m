%% loadWindValues.m - Default Wind Parameter definition
% This script initializes the parameters for the wind blocks in the
% quadcopter model.

if exist('Wind','var')==0
    Wind = struct;
%Normal Wind
    Wind.Normal = struct;
    Wind.Normal.speed = 1;
    Wind.Normal.heading = 0;
    Wind.Normal.angle = 0;
    Wind.Normal.variance = 0;
    Wind.Normal.seed = 0;

%Wind Gust
    Wind.Gust = struct;
    Wind.Gust.speed = 0;
    Wind.Gust.heading = 0;
    Wind.Gust.angle = 0;
    Wind.Gust.startTime = 5;
    Wind.Gust.stopTime = 10;
    Wind.Gust.riseTime = 1;
    Wind.Gust.variance = 0;
    Wind.Gust.seed = 0;
end
