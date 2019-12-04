classdef CustomMsgConsts
    %CustomMsgConsts This class stores all message types
    %   The message types are constant properties, which in turn resolve
    %   to the strings of the actual types.
    
    %   Copyright 2014-2019 The MathWorks, Inc.
    
    properties (Constant)
        dronecomms_droneOut32 = 'dronecomms/droneOut32'
        dronecomms_pidIn32 = 'dronecomms/pidIn32'
        dronecomms_readCSV = 'dronecomms/readCSV'
        dronecomms_readCSVRequest = 'dronecomms/readCSVRequest'
        dronecomms_readCSVResponse = 'dronecomms/readCSVResponse'
    end
    
    methods (Static, Hidden)
        function messageList = getMessageList
            %getMessageList Generate a cell array with all message types.
            %   The list will be sorted alphabetically.
            
            persistent msgList
            if isempty(msgList)
                msgList = cell(4, 1);
                msgList{1} = 'dronecomms/droneOut32';
                msgList{2} = 'dronecomms/pidIn32';
                msgList{3} = 'dronecomms/readCSVRequest';
                msgList{4} = 'dronecomms/readCSVResponse';
            end
            
            messageList = msgList;
        end
        
        function serviceList = getServiceList
            %getServiceList Generate a cell array with all service types.
            %   The list will be sorted alphabetically.
            
            persistent svcList
            if isempty(svcList)
                svcList = cell(1, 1);
                svcList{1} = 'dronecomms/readCSV';
            end
            
            % The message list was already sorted, so don't need to sort
            % again.
            serviceList = svcList;
        end
        
        function actionList = getActionList
            %getActionList Generate a cell array with all action types.
            %   The list will be sorted alphabetically.
            
            persistent actList
            if isempty(actList)
                actList = cell(0, 1);
            end
            
            % The message list was already sorted, so don't need to sort
            % again.
            actionList = actList;
        end
    end
end
