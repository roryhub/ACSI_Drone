  function targMap = targDataMap(),

  ;%***********************
  ;% Create Parameter Map *
  ;%***********************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 31;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc paramMap
    ;%
    paramMap.nSections           = nTotSects;
    paramMap.sectIdxOffset       = sectIdxOffset;
      paramMap.sections(nTotSects) = dumSection; %prealloc
    paramMap.nTotData            = -1;
    
    ;%
    ;% Auto data (flightControlSystem_P)
    ;%
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% flightControlSystem_P.WrapToZero_Threshold
	  section.data(1).logicalSrcIdx = 17;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(1) = section;
      clear section
      
      section.nData     = 6;
      section.data(6)  = dumData; %prealloc
      
	  ;% flightControlSystem_P.One2_Value
	  section.data(1).logicalSrcIdx = 18;
	  section.data(1).dtTransOffset = 0;
	
	  ;% flightControlSystem_P.One1_Value
	  section.data(2).logicalSrcIdx = 19;
	  section.data(2).dtTransOffset = 1;
	
	  ;% flightControlSystem_P.ZStep_Time
	  section.data(3).logicalSrcIdx = 20;
	  section.data(3).dtTransOffset = 2;
	
	  ;% flightControlSystem_P.ZStep_Y0
	  section.data(4).logicalSrcIdx = 21;
	  section.data(4).dtTransOffset = 3;
	
	  ;% flightControlSystem_P.ZStep_YFinal
	  section.data(5).logicalSrcIdx = 22;
	  section.data(5).dtTransOffset = 4;
	
	  ;% flightControlSystem_P.RateTransition_InitialCondition
	  section.data(6).logicalSrcIdx = 23;
	  section.data(6).dtTransOffset = 5;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(2) = section;
      clear section
      
      section.nData     = 6;
      section.data(6)  = dumData; %prealloc
      
	  ;% flightControlSystem_P.X_Value
	  section.data(1).logicalSrcIdx = 24;
	  section.data(1).dtTransOffset = 0;
	
	  ;% flightControlSystem_P.Y_Value
	  section.data(2).logicalSrcIdx = 25;
	  section.data(2).dtTransOffset = 1;
	
	  ;% flightControlSystem_P.YPR_Value
	  section.data(3).logicalSrcIdx = 26;
	  section.data(3).dtTransOffset = 2;
	
	  ;% flightControlSystem_P.Constant_Value
	  section.data(4).logicalSrcIdx = 27;
	  section.data(4).dtTransOffset = 3;
	
	  ;% flightControlSystem_P.Constant_Value_j
	  section.data(5).logicalSrcIdx = 28;
	  section.data(5).dtTransOffset = 4;
	
	  ;% flightControlSystem_P.Bias_Bias
	  section.data(6).logicalSrcIdx = 29;
	  section.data(6).dtTransOffset = 5;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(3) = section;
      clear section
      
      section.nData     = 3;
      section.data(3)  = dumData; %prealloc
      
	  ;% flightControlSystem_P.Output_InitialCondition
	  section.data(1).logicalSrcIdx = 30;
	  section.data(1).dtTransOffset = 0;
	
	  ;% flightControlSystem_P.FixPtConstant_Value
	  section.data(2).logicalSrcIdx = 31;
	  section.data(2).dtTransOffset = 1;
	
	  ;% flightControlSystem_P.Constant_Value_a
	  section.data(3).logicalSrcIdx = 32;
	  section.data(3).dtTransOffset = 2;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(4) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% flightControlSystem_P.Constant_Value_b
	  section.data(1).logicalSrcIdx = 33;
	  section.data(1).dtTransOffset = 0;
	
	  ;% flightControlSystem_P.One_Value
	  section.data(2).logicalSrcIdx = 34;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(5) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% flightControlSystem_P.FlightControlSystem.CompareToConstant_const
	  section.data(1).logicalSrcIdx = 35;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(6) = section;
      clear section
      
      section.nData     = 6;
      section.data(6)  = dumData; %prealloc
      
	  ;% flightControlSystem_P.FlightControlSystem.CompareToConstant_const_o
	  section.data(1).logicalSrcIdx = 36;
	  section.data(1).dtTransOffset = 0;
	
	  ;% flightControlSystem_P.FlightControlSystem.CompareToConstant1_const
	  section.data(2).logicalSrcIdx = 37;
	  section.data(2).dtTransOffset = 1;
	
	  ;% flightControlSystem_P.FlightControlSystem.CompareToConstant2_const
	  section.data(3).logicalSrcIdx = 38;
	  section.data(3).dtTransOffset = 2;
	
	  ;% flightControlSystem_P.FlightControlSystem.CompareToConstant4_const
	  section.data(4).logicalSrcIdx = 39;
	  section.data(4).dtTransOffset = 3;
	
	  ;% flightControlSystem_P.FlightControlSystem.CompareToConstant3_const
	  section.data(5).logicalSrcIdx = 40;
	  section.data(5).dtTransOffset = 4;
	
	  ;% flightControlSystem_P.FlightControlSystem.CompareToConstant5_const
	  section.data(6).logicalSrcIdx = 41;
	  section.data(6).dtTransOffset = 5;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(7) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% flightControlSystem_P.FlightControlSystem.Memory_InitialCondition
	  section.data(1).logicalSrcIdx = 42;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(8) = section;
      clear section
      
      section.nData     = 3;
      section.data(3)  = dumData; %prealloc
      
	  ;% flightControlSystem_P.FlightControlSystem.Constant3_Value
	  section.data(1).logicalSrcIdx = 43;
	  section.data(1).dtTransOffset = 0;
	
	  ;% flightControlSystem_P.FlightControlSystem.Gain_Gain
	  section.data(2).logicalSrcIdx = 44;
	  section.data(2).dtTransOffset = 3;
	
	  ;% flightControlSystem_P.FlightControlSystem.Gain1_Gain
	  section.data(3).logicalSrcIdx = 45;
	  section.data(3).dtTransOffset = 4;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(9) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% flightControlSystem_P.FlightControlSystem.Constant1_Value
	  section.data(1).logicalSrcIdx = 46;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(10) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% flightControlSystem_P.FlightControlSystem.Merge_InitialOutput
	  section.data(1).logicalSrcIdx = 47;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(11) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% flightControlSystem_P.FlightControlSystem.Normalcondition.Constant_Value
	  section.data(1).logicalSrcIdx = 48;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(12) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% flightControlSystem_P.FlightControlSystem.estimatorOpticalflowerror.Constant_Value
	  section.data(1).logicalSrcIdx = 49;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(13) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% flightControlSystem_P.FlightControlSystem.Geofencingerror.Constant_Value
	  section.data(1).logicalSrcIdx = 50;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(14) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (parameter)
      ;%
	      
	    ;% Sensors
	    section.nData = 1;
	    section.data(1).logicalSrcIdx = 0;
	    section.data(1).dtTransOffset = 0;
	  
	    nTotData = nTotData + section.nData;
	    paramMap.sections(15) = section;
	    clear section
	  
	      
	    ;% takeOffDuration
	    section.nData = 1;
	    section.data(1).logicalSrcIdx = 1;
	    section.data(1).dtTransOffset = 0;
	  
	    nTotData = nTotData + section.nData;
	    paramMap.sections(16) = section;
	    clear section
	  
	      
	    ;% D_pr
	    section.nData = 1;
	    section.data(1).logicalSrcIdx = 2;
	    section.data(1).dtTransOffset = 0;
	  
	    nTotData = nTotData + section.nData;
	    paramMap.sections(17) = section;
	    clear section
	  
	      
	    ;% D_xy
	    section.nData = 1;
	    section.data(1).logicalSrcIdx = 3;
	    section.data(1).dtTransOffset = 0;
	  
	    nTotData = nTotData + section.nData;
	    paramMap.sections(18) = section;
	    clear section
	  
	      
	    ;% D_yaw
	    section.nData = 1;
	    section.data(1).logicalSrcIdx = 4;
	    section.data(1).dtTransOffset = 0;
	  
	    nTotData = nTotData + section.nData;
	    paramMap.sections(19) = section;
	    clear section
	  
	      
	    ;% D_z
	    section.nData = 1;
	    section.data(1).logicalSrcIdx = 5;
	    section.data(1).dtTransOffset = 0;
	  
	    nTotData = nTotData + section.nData;
	    paramMap.sections(20) = section;
	    clear section
	  
	      
	    ;% I_antiWU
	    section.nData = 1;
	    section.data(1).logicalSrcIdx = 6;
	    section.data(1).dtTransOffset = 0;
	  
	    nTotData = nTotData + section.nData;
	    paramMap.sections(21) = section;
	    clear section
	  
	      
	    ;% I_pr
	    section.nData = 1;
	    section.data(1).logicalSrcIdx = 7;
	    section.data(1).dtTransOffset = 0;
	  
	    nTotData = nTotData + section.nData;
	    paramMap.sections(22) = section;
	    clear section
	  
	      
	    ;% I_satLimitHigh
	    section.nData = 1;
	    section.data(1).logicalSrcIdx = 8;
	    section.data(1).dtTransOffset = 0;
	  
	    nTotData = nTotData + section.nData;
	    paramMap.sections(23) = section;
	    clear section
	  
	      
	    ;% I_satLimitLow
	    section.nData = 1;
	    section.data(1).logicalSrcIdx = 9;
	    section.data(1).dtTransOffset = 0;
	  
	    nTotData = nTotData + section.nData;
	    paramMap.sections(24) = section;
	    clear section
	  
	      
	    ;% P_pr
	    section.nData = 1;
	    section.data(1).logicalSrcIdx = 10;
	    section.data(1).dtTransOffset = 0;
	  
	    nTotData = nTotData + section.nData;
	    paramMap.sections(25) = section;
	    clear section
	  
	      
	    ;% P_xy
	    section.nData = 1;
	    section.data(1).logicalSrcIdx = 11;
	    section.data(1).dtTransOffset = 0;
	  
	    nTotData = nTotData + section.nData;
	    paramMap.sections(26) = section;
	    clear section
	  
	      
	    ;% P_yaw
	    section.nData = 1;
	    section.data(1).logicalSrcIdx = 12;
	    section.data(1).dtTransOffset = 0;
	  
	    nTotData = nTotData + section.nData;
	    paramMap.sections(27) = section;
	    clear section
	  
	      
	    ;% P_z
	    section.nData = 1;
	    section.data(1).logicalSrcIdx = 13;
	    section.data(1).dtTransOffset = 0;
	  
	    nTotData = nTotData + section.nData;
	    paramMap.sections(28) = section;
	    clear section
	  
	      
	    ;% landingAltitude
	    section.nData = 1;
	    section.data(1).logicalSrcIdx = 14;
	    section.data(1).dtTransOffset = 0;
	  
	    nTotData = nTotData + section.nData;
	    paramMap.sections(29) = section;
	    clear section
	  
	      
	    ;% latestY
	    section.nData = 1;
	    section.data(1).logicalSrcIdx = 15;
	    section.data(1).dtTransOffset = 0;
	  
	    nTotData = nTotData + section.nData;
	    paramMap.sections(30) = section;
	    clear section
	  
	      
	    ;% enableLanding
	    section.nData = 1;
	    section.data(1).logicalSrcIdx = 16;
	    section.data(1).dtTransOffset = 0;
	  
	    nTotData = nTotData + section.nData;
	    paramMap.sections(31) = section;
	    clear section
	  
    

    ;%
    ;% Add final counts to struct.
    ;%
    paramMap.nTotData = nTotData;
    


  ;%**************************
  ;% Create Block Output Map *
  ;%**************************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 7;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc sigMap
    ;%
    sigMap.nSections           = nTotSects;
    sigMap.sectIdxOffset       = sectIdxOffset;
      sigMap.sections(nTotSects) = dumSection; %prealloc
    sigMap.nTotData            = -1;
    
    ;%
    ;% Auto data (flightControlSystem_B)
    ;%
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% flightControlSystem_B.BusAssignment
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% flightControlSystem_B.RelationalOperator1
	  section.data(1).logicalSrcIdx = 6;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(2) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% flightControlSystem_B.Bias
	  section.data(1).logicalSrcIdx = 1;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(3) = section;
      clear section
      
      section.nData     = 9;
      section.data(9)  = dumData; %prealloc
      
	  ;% flightControlSystem_B.FlightControlSystem.x
	  section.data(1).logicalSrcIdx = 7;
	  section.data(1).dtTransOffset = 0;
	
	  ;% flightControlSystem_B.FlightControlSystem.y
	  section.data(2).logicalSrcIdx = 8;
	  section.data(2).dtTransOffset = 1;
	
	  ;% flightControlSystem_B.FlightControlSystem.z
	  section.data(3).logicalSrcIdx = 9;
	  section.data(3).dtTransOffset = 2;
	
	  ;% flightControlSystem_B.FlightControlSystem.x_c
	  section.data(4).logicalSrcIdx = 10;
	  section.data(4).dtTransOffset = 3;
	
	  ;% flightControlSystem_B.FlightControlSystem.y_n
	  section.data(5).logicalSrcIdx = 11;
	  section.data(5).dtTransOffset = 4;
	
	  ;% flightControlSystem_B.FlightControlSystem.z_p
	  section.data(6).logicalSrcIdx = 12;
	  section.data(6).dtTransOffset = 5;
	
	  ;% flightControlSystem_B.FlightControlSystem.altitude
	  section.data(7).logicalSrcIdx = 13;
	  section.data(7).dtTransOffset = 6;
	
	  ;% flightControlSystem_B.FlightControlSystem.pressure
	  section.data(8).logicalSrcIdx = 14;
	  section.data(8).dtTransOffset = 7;
	
	  ;% flightControlSystem_B.FlightControlSystem.DefaultController_o2
	  section.data(9).logicalSrcIdx = 15;
	  section.data(9).dtTransOffset = 8;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(4) = section;
      clear section
      
      section.nData     = 27;
      section.data(27)  = dumData; %prealloc
      
	  ;% flightControlSystem_B.FlightControlSystem.Logging.SigConversion_InsertedFor_states_estim_BusSelector_BusSelector1
	  section.data(1).logicalSrcIdx = 16;
	  section.data(1).dtTransOffset = 0;
	
	  ;% flightControlSystem_B.FlightControlSystem.Logging.SigConversion_InsertedFor_states_estim_BusSelector_BusSelecto_k
	  section.data(2).logicalSrcIdx = 17;
	  section.data(2).dtTransOffset = 1;
	
	  ;% flightControlSystem_B.FlightControlSystem.Logging.SigConversion_InsertedFor_states_estim_BusSelector_BusSelecto_g
	  section.data(3).logicalSrcIdx = 18;
	  section.data(3).dtTransOffset = 2;
	
	  ;% flightControlSystem_B.FlightControlSystem.Logging.SigConversion_InsertedFor_states_estim_BusSelector_BusSelect_kk
	  section.data(4).logicalSrcIdx = 19;
	  section.data(4).dtTransOffset = 3;
	
	  ;% flightControlSystem_B.FlightControlSystem.Logging.SigConversion_InsertedFor_states_estim_BusSelector_BusSelecto_b
	  section.data(5).logicalSrcIdx = 20;
	  section.data(5).dtTransOffset = 4;
	
	  ;% flightControlSystem_B.FlightControlSystem.Logging.SigConversion_InsertedFor_states_estim_BusSelector_BusSelecto_a
	  section.data(6).logicalSrcIdx = 21;
	  section.data(6).dtTransOffset = 5;
	
	  ;% flightControlSystem_B.FlightControlSystem.Logging.SigConversion_InsertedFor_states_estim_BusSelector_BusSelecto_i
	  section.data(7).logicalSrcIdx = 22;
	  section.data(7).dtTransOffset = 6;
	
	  ;% flightControlSystem_B.FlightControlSystem.Logging.SigConversion_InsertedFor_states_estim_BusSelector_BusSelecto_h
	  section.data(8).logicalSrcIdx = 23;
	  section.data(8).dtTransOffset = 7;
	
	  ;% flightControlSystem_B.FlightControlSystem.Logging.SigConversion_InsertedFor_states_estim_BusSelector_BusSelect_ax
	  section.data(9).logicalSrcIdx = 24;
	  section.data(9).dtTransOffset = 8;
	
	  ;% flightControlSystem_B.FlightControlSystem.Logging.SigConversion_InsertedFor_states_estim_BusSelector_BusSelect_bb
	  section.data(10).logicalSrcIdx = 25;
	  section.data(10).dtTransOffset = 9;
	
	  ;% flightControlSystem_B.FlightControlSystem.Logging.SigConversion_InsertedFor_states_estim_BusSelector_BusSelect_ha
	  section.data(11).logicalSrcIdx = 26;
	  section.data(11).dtTransOffset = 10;
	
	  ;% flightControlSystem_B.FlightControlSystem.Logging.SigConversion_InsertedFor_states_estim_BusSelector_BusSelecto_n
	  section.data(12).logicalSrcIdx = 27;
	  section.data(12).dtTransOffset = 11;
	
	  ;% flightControlSystem_B.FlightControlSystem.Logging.TmpSignalConversionAtToWorkspace2Inport1
	  section.data(13).logicalSrcIdx = 28;
	  section.data(13).dtTransOffset = 12;
	
	  ;% flightControlSystem_B.FlightControlSystem.Logging.DataTypeConversion1
	  section.data(14).logicalSrcIdx = 29;
	  section.data(14).dtTransOffset = 24;
	
	  ;% flightControlSystem_B.FlightControlSystem.Logging.DataTypeConversion2
	  section.data(15).logicalSrcIdx = 30;
	  section.data(15).dtTransOffset = 25;
	
	  ;% flightControlSystem_B.FlightControlSystem.Logging.TmpSignalConversionAtToWorkspace6Inport1
	  section.data(16).logicalSrcIdx = 31;
	  section.data(16).dtTransOffset = 26;
	
	  ;% flightControlSystem_B.FlightControlSystem.Logging.DataTypeConversion3
	  section.data(17).logicalSrcIdx = 32;
	  section.data(17).dtTransOffset = 36;
	
	  ;% flightControlSystem_B.FlightControlSystem.Logging.SigConversion_InsertedFor_ReferenceValueServerBus_BusSelector_B
	  section.data(18).logicalSrcIdx = 33;
	  section.data(18).dtTransOffset = 37;
	
	  ;% flightControlSystem_B.FlightControlSystem.Logging.DataTypeConversion7
	  section.data(19).logicalSrcIdx = 34;
	  section.data(19).dtTransOffset = 40;
	
	  ;% flightControlSystem_B.FlightControlSystem.Logging.SigConversion_InsertedFor_ReferenceValueServerBus_BusSelector_d
	  section.data(20).logicalSrcIdx = 35;
	  section.data(20).dtTransOffset = 41;
	
	  ;% flightControlSystem_B.FlightControlSystem.Logging.DataTypeConversion9
	  section.data(21).logicalSrcIdx = 36;
	  section.data(21).dtTransOffset = 44;
	
	  ;% flightControlSystem_B.FlightControlSystem.Logging.TmpSignalConversionAtToWorkspace3Inport1
	  section.data(22).logicalSrcIdx = 37;
	  section.data(22).dtTransOffset = 45;
	
	  ;% flightControlSystem_B.FlightControlSystem.Logging.DataTypeConversion11
	  section.data(23).logicalSrcIdx = 38;
	  section.data(23).dtTransOffset = 54;
	
	  ;% flightControlSystem_B.FlightControlSystem.Logging.SigConversion_InsertedFor_Sensors_BusSelector_BusSelector1_at_o
	  section.data(24).logicalSrcIdx = 39;
	  section.data(24).dtTransOffset = 55;
	
	  ;% flightControlSystem_B.FlightControlSystem.Logging.SigConversion_InsertedFor_Sensors_BusSelector_BusSelector1_at_i
	  section.data(25).logicalSrcIdx = 40;
	  section.data(25).dtTransOffset = 58;
	
	  ;% flightControlSystem_B.FlightControlSystem.Logging.TmpSignalConversionAtToWorkspace4Inport1
	  section.data(26).logicalSrcIdx = 41;
	  section.data(26).dtTransOffset = 62;
	
	  ;% flightControlSystem_B.FlightControlSystem.Logging.SigConversion_InsertedFor_Sensors_BusSelector_BusSelector1_a_iq
	  section.data(27).logicalSrcIdx = 42;
	  section.data(27).dtTransOffset = 70;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(5) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (signal)
      ;%
	      
	    ;% motors_outport
	    section.nData = 1;
	    section.data(1).logicalSrcIdx = 88;
	    section.data(1).dtTransOffset = 0;
	  
	    nTotData = nTotData + section.nData;
	    sigMap.sections(6) = section;
	    clear section
	  
	      
	    ;% flag_outport
	    section.nData = 1;
	    section.data(1).logicalSrcIdx = 89;
	    section.data(1).dtTransOffset = 0;
	  
	    nTotData = nTotData + section.nData;
	    sigMap.sections(7) = section;
	    clear section
	  
    

    ;%
    ;% Add final counts to struct.
    ;%
    sigMap.nTotData = nTotData;
    


  ;%*******************
  ;% Create DWork Map *
  ;%*******************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 10;
    sectIdxOffset = 7;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc dworkMap
    ;%
    dworkMap.nSections           = nTotSects;
    dworkMap.sectIdxOffset       = sectIdxOffset;
      dworkMap.sections(nTotSects) = dumSection; %prealloc
    dworkMap.nTotData            = -1;
    
    ;%
    ;% Auto data (flightControlSystem_DW)
    ;%
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% flightControlSystem_DW.ColorSpaceConversion_DWORK1
	  section.data(1).logicalSrcIdx = 3;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% flightControlSystem_DW.RateTransition_Buffer
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(2) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% flightControlSystem_DW.Output_DSTATE
	  section.data(1).logicalSrcIdx = 1;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(3) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% flightControlSystem_DW.RateTransition_ActiveBufIdx
	  section.data(1).logicalSrcIdx = 2;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(4) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% flightControlSystem_DW.Y1UY2VtoYUV_InstanceData
	  section.data(1).logicalSrcIdx = 4;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(5) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% flightControlSystem_DW.FlightControlSystem.Memory_PreviousInput
	  section.data(1).logicalSrcIdx = 5;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(6) = section;
      clear section
      
      section.nData     = 7;
      section.data(7)  = dumData; %prealloc
      
	  ;% flightControlSystem_DW.FlightControlSystem.Logging.ToWorkspace2_PWORK.LoggedData
	  section.data(1).logicalSrcIdx = 6;
	  section.data(1).dtTransOffset = 0;
	
	  ;% flightControlSystem_DW.FlightControlSystem.Logging.ToWorkspace6_PWORK.LoggedData
	  section.data(2).logicalSrcIdx = 7;
	  section.data(2).dtTransOffset = 1;
	
	  ;% flightControlSystem_DW.FlightControlSystem.Logging.ToWorkspace3_PWORK.LoggedData
	  section.data(3).logicalSrcIdx = 8;
	  section.data(3).dtTransOffset = 2;
	
	  ;% flightControlSystem_DW.FlightControlSystem.Logging.ToWorkspace4_PWORK.LoggedData
	  section.data(4).logicalSrcIdx = 9;
	  section.data(4).dtTransOffset = 3;
	
	  ;% flightControlSystem_DW.FlightControlSystem.Logging.ToWorkspace5_PWORK.LoggedData
	  section.data(5).logicalSrcIdx = 10;
	  section.data(5).dtTransOffset = 4;
	
	  ;% flightControlSystem_DW.FlightControlSystem.Logging.ToWorkspace_PWORK.LoggedData
	  section.data(6).logicalSrcIdx = 11;
	  section.data(6).dtTransOffset = 5;
	
	  ;% flightControlSystem_DW.FlightControlSystem.Logging.ToWorkspace1_PWORK.LoggedData
	  section.data(7).logicalSrcIdx = 12;
	  section.data(7).dtTransOffset = 6;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(7) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% flightControlSystem_DW.FlightControlSystem.Normalcondition.Geofencingerror_SubsysRanBC
	  section.data(1).logicalSrcIdx = 13;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(8) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% flightControlSystem_DW.FlightControlSystem.estimatorOpticalflowerror.Geofencingerror_SubsysRanBC
	  section.data(1).logicalSrcIdx = 14;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(9) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% flightControlSystem_DW.FlightControlSystem.Geofencingerror.Geofencingerror_SubsysRanBC
	  section.data(1).logicalSrcIdx = 15;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(10) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (dwork)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    dworkMap.nTotData = nTotData;
    


  ;%
  ;% Add individual maps to base struct.
  ;%

  targMap.paramMap  = paramMap;    
  targMap.signalMap = sigMap;
  targMap.dworkMap  = dworkMap;
  
  ;%
  ;% Add checksums to base struct.
  ;%


  targMap.checksum0 = 220778028;
  targMap.checksum1 = 2064103415;
  targMap.checksum2 = 2632017202;
  targMap.checksum3 = 3205045346;

